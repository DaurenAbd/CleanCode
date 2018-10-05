//
// Created by daurenabd on 05/10/18.
//

#include <stdio.h>
#include <stdlib.h>
#include "IO.h"
#include "printerfactory.h"

struct fileprinter {
    FILE *f;
    char toFlush;
};

char fp_getchar(void *data) {
    struct fileprinter *fp = data;
    return (char) fgetc(fp->f);
}

void fp_putchar(void *data, char c) {
    struct fileprinter *fp = data;
    fputc(c, fp->f);
    if (fp->toFlush) {
        fflush(fp->f);
    }
}

struct IO *fp_create(const char *path, char toFlush) {
    static struct io_operations ops;
    ops.clean = free;
    ops.getchar = fp_getchar;
    ops.putchar = fp_putchar;

    struct fileprinter *fp = malloc(sizeof *fp);
    fp->f = fopen(path, "r+");
    fp->toFlush = toFlush;
    return create(&ops, fp);
}