//
// Created by daurenabd on 29/08/18.
//

#ifndef SOLID_FILERIO_H
#define SOLID_FILERIO_H

#include <cstdio>
#include "AbstractIO.h"

class FileIO : public AbstractIO {
private:
    FILE *file;
    bool toFlush;

public:
    explicit FileIO(const char *filename, const bool &toFlush) {
        file = fopen(filename, "r+");
        this->toFlush = toFlush;
    }

    ~FileIO() {
        delete file;
    }

    char getchar() override {
        return (char) ::fgetc(file);
    }

    void putchar(const char &c) override {
        ::fputc(c, file);
        if (toFlush) {
            fflush(file);
        }
    }
};

#endif //SOLID_FILERIO_H
