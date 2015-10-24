#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int number = atoi(argv[1]);

    for (int candidate = 2; number > 1; candidate++) {
        for (; number % candidate == 0; number /= candidate) {
            printf("%d\n", candidate);
        }
    }

    return 0;
}
