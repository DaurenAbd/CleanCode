//
// Created by daurenabd on 29/08/18.
//

#ifndef SOLID_COPY_H
#define SOLID_COPY_H

#include <cstdio>
#include "AbstractIO.h"

void copy(AbstractIO *reader, AbstractIO *writer) {
    char c;
    while ((c = reader->getchar()) != EOF) {
        writer->putchar(c);
    }
}

#endif //SOLID_COPY_H
