//
// Created by daurenabd on 05/10/18.
//

#ifndef SOLID_C_COPY_H
#define SOLID_C_COPY_H

#include <libio.h>
#include "IO.h"

void copy(struct IO *input, struct IO *output) {
    char c;
    while((c = pgetchar(input)) != EOF) {
        pputchar(output, c);
    }
}

#endif //SOLID_C_COPY_H
