#include <stdio.h>

int main() {
    int distance = 1540;
    
    if (distance <= 1500) {
        printf("70 yuan\n");
    } else {
        int extra_distance = distance - 1500;
        // Round up to nearest 100 meters
        int extra_units = (extra_distance + 99) / 100;
        int fare = 70 + extra_units * 10;
        
        printf("%d yuan\n", fare);
    }
    
    return 0;
}
