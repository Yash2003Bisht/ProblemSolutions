// DATE: 04/11/2023, 10:05:10
// PROBLEM NAME: Chef and his Apps
// PROBLEM URL: https://www.codechef.com/problems/CHEFAPPS
// PROBLEM DIFFICULTY RATTING: 702
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, s, x, y, z, remaining_storage, required_storage;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &s, &x, &y, &z);
        remaining_storage = s - (x+y);
        required_storage = z - remaining_storage;

        if (required_storage >= 0){
            if (required_storage >= (x+y))
                printf("2\n");
            else
                printf("1\n");
        } else {
            printf("0\n");
        }


    }
    
	return 0;
}



