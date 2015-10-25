#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    long number = strtol(argv[1], NULL, 0);

    for (long candidate = 2; number > 1; candidate++) {
        for (; number % candidate == 0; number /= candidate) {
            printf("%ld\n", candidate);
        }
    }

    return 0;
}
