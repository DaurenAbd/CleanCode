//
// Created by daurenabd on 06/10/18.
//

#ifndef SOLID_C_PRINTERFACTORY_H
#define SOLID_C_PRINTERFACTORY_H

struct IO *cp_create();
struct IO *fp_create(const char *path, char toFlush);

#endif //SOLID_C_PRINTERFACTORY_H
