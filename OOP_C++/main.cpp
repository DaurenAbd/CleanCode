#include <iostream>
#include "FactoryIO.h"
#include "Copy.h"

int main() {
    AbstractIO *in = FactoryIO::buildFile("../input.txt");
    AbstractIO *out = FactoryIO::buildFile("../output.txt");
    AbstractIO *console = FactoryIO::buildConsole();

    copy(in, console);

    return 0;
}