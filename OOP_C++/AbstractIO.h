//
// Created by daurenabd on 29/08/18.
//

#ifndef SOLID_READER_H
#define SOLID_READER_H

class AbstractIO {
public:
    virtual char getchar() = 0;

    virtual void putchar(const char &c) = 0;
};

#endif //SOLID_READER_H
