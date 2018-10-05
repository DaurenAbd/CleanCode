#include <stdio.h>
#include "printerfactory.h"
#include "copy.h"

int main() {
    struct IO *in = fp_create("../input.txt", 0);
    struct IO *out = fp_create("../output.txt", 0);
    struct IO *console = cp_create();

    copy(in, console);

    pclean(in);
    pclean(console);

    return 0;
}