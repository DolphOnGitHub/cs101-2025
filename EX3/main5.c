#include <stdio.h>

int main() {
    int i = 2000;
    
    if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)) {
        printf("leap year\n");
    } else {
        printf("not a leap year\n");
    }
    
    return 0;
}
