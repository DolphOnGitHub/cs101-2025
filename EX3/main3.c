#include <stdio.h>

int main() {
    int i = 30;
    
    if (i % 15 == 0) {
        printf("Love U!\n");
    } else if (i % 3 == 0) {
        printf("Love\n");
    } else if (i % 5 == 0) {
        printf("U\n");
    } else {
        printf("%d\n", i);
    }
    
    return 0;
}
