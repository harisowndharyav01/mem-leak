#include <stdlib.h>
#include <unistd.h>

int main() {
    while (1) {
        malloc(1024 * 1024);  // leak 1MB each second
        sleep(1);
    }
    return 0;
}
