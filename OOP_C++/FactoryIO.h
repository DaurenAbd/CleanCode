//
// Created by daurenabd on 29/08/18.
//

#include "AbstractIO.h"
#include "ConsoleIO.h"
#include "FileIO.h"

#ifndef SOLID_FACTORYIO_H
#define SOLID_FACTORYIO_H

#endif //SOLID_FACTORYIO_H

class FactoryIO {
public:
    static AbstractIO *buildConsole() {
        return new ConsoleIO();
    }

    static AbstractIO *buildFile(const char *filename, bool toFlush = false) {
        return new FileIO(filename, toFlush);
    }
};