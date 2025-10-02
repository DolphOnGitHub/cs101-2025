#include <stdio.h>

int main() {
    int minutes = 40;
    
    if (minutes <= 30) {
        printf("free\n");
    } else {
        // Calculate hours (30 minutes = 0.5 hour)
        int total_half_hours = (minutes + 29) / 30;
        int fee = total_half_hours * 30; // 30 yuan per half hour
        
        // Maximum fee per day is 150 yuan
        if (fee > 150) {
            fee = 150;
        }
        
        printf("%d yuan\n", fee);
    }
    
    return 0;
}
