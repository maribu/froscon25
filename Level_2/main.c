#include <stdio.h>

int main(void)
{
    for (unsigned i = 0; i < 15; i++) {
        printf("In room %u you will find: ", i);

        if ((i % 3) == 0) {
            puts("a dragon");
        }
        else if ((i % 2) == 0) {
            puts("an egg");
        }
        else if (((i % 3) == 0) && ((i % 2) == 0)) {
            puts("a dragonegg");
        }
        else {
            puts("nothing");
        }
    }

    return 0;
}
