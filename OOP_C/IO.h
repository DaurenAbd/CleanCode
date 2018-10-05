//
// Created by daurenabd on 05/10/18.
//

#ifndef SOLID_C_IO_H
#define SOLID_C_IO_H

struct io_operations {
    void (*clean)(void *data);
    char (*getchar)(void *data);
    void (*putchar)(void *data, char c);
};

struct IO *create(struct io_operations *ops, void *data);
void pclean(struct IO *pr);
char pgetchar(struct IO *p);
void pputchar(struct IO *p, char c);

#endif //SOLID_C_IO_H
