// DATE: 16/08/2023, 07:55:37
// PROBLEM NAME: The Tricky Deal
// PROBLEM URL: https://www.codechef.com/problems/TRICKYDL
// PROBLEM DIFFICULTY RATTING: 1431
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.7M

#include <stdio.h>
#define lld long long int

int main(void) {
    int t, a, d1, d2;
    lld chef, chef_friend, exponent, max_diff, temp;
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

            temp = chef - chef_friend;
            if (temp > max_diff){
                max_diff = temp;
                d2 = d1;
            }

        }

        printf("%d %d\n", d1-1, d2);
        
    }
    
	return 0;
}



