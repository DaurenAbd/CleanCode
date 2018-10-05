//
// Created by daurenabd on 05/10/18.
//

#include <stdlib.h>
#include <memory.h>
#include <stdio.h>
#include "IO.h"

struct IO {
    struct io_operations *ops;
    void *data;
};

/* constructor */
struct IO *create(struct io_operations *ops, void *data) {
    struct IO *p = malloc(sizeof *p);
    p->ops = ops;
    p->data = data;
    return p;
}

void pclean(struct IO *p) {
    p->ops->clean(p->data);
    free(p);
}

char pgetchar(struct IO *p) {
    return p->ops->getchar(p->data);
}

void pputchar(struct IO *p, char c) {
    return p->ops->putchar(p->data, c);
}