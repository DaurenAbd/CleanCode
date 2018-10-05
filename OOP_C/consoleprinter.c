//
// Created by daurenabd on 05/10/18.
//

#include <stdio.h>
#include "IO.h"
#include "printerfactory.h"

void cp_clean(void *data) {};

char cp_getchar(void *data) {
    return (char) getchar();
}

void cp_putchar(void *data, char c) {
    putchar(c);
}

struct IO *cp_create() {
    static struct io_operations ops;
    ops.clean = cp_clean;
    ops.getchar = cp_getchar;
    ops.putchar = cp_putchar;

    return create(&ops, NULL);
}