#include <iostream>
#include <unistd.h>

int main() {
    sleep(5);
    for (int i = 1; i <= 12; i++) {
        printf("/home/phuc/RustRoverProjects/yazi/sandbox/test_%d.json\n", i);
    }
    return 0;
}
