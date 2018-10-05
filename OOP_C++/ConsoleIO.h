//
// Created by daurenabd on 29/08/18.
//

#ifndef SOLID_CONSOLE_H
#define SOLID_CONSOLE_H

#include <cstdio>
#include "AbstractIO.h"

class ConsoleIO : public AbstractIO {
public:
    ConsoleIO() = default;

    char getchar() override {
        return (char) ::getchar();
    }

    void putchar(const char &c) override {
        ::putchar(c);
    }
};

#endif //SOLID_CONSOLE_H
