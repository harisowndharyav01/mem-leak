#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    while (1) {
        void *p = malloc(1024 * 1024); // leak 1 MB
        printf("Leaked 1 MB at %p\n", p);
        sleep(1);
    }
    return 0;
}
