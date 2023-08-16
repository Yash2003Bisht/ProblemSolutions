// DATE: 16/08/2023, 07:59:41
// PROBLEM NAME: The Tricky Deal
// PROBLEM URL: https://www.codechef.com/problems/TRICKYDL
// PROBLEM DIFFICULTY RATTING: 1431
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, a, d1, d2;
    long long int chef, chef_friend, exponent, max_diff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &a);
        d1 = 1, d2 = 1, chef = a, chef_friend = 1, exponent = 2;
        max_diff = chef - chef_friend;
        
        while (chef >= chef_friend){
            chef += a;
            chef_friend += exponent;
            exponent *= 2;
            d1++;
            
            if (chef - chef_friend > max_diff){
                max_diff = chef - chef_friend;
                d2 = d1;
            }

        }

        printf("%d %d\n", d1-1, d2);

    }

	return 0;
}


