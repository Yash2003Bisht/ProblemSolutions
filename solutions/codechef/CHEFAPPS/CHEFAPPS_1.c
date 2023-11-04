// DATE: 04/11/2023, 10:14:17
// PROBLEM NAME: Chef and his Apps
// PROBLEM URL: https://www.codechef.com/problems/CHEFAPPS
// PROBLEM DIFFICULTY RATTING: 702
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, s, x, y, z, remaining_storage, required_storage;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &s, &x, &y, &z);
        remaining_storage = s - (x+y);

        if (remaining_storage >= z)
            printf("0\n");
        else {
            if (remaining_storage + x >= z || remaining_storage + y >= z)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    
	return 0;
}



