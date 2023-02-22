// DATE: 22/02/2023, 08:08:29
// PROBLEM NAME: Chef and Demonetisation
// PROBLEM URL: https://www.codechef.com/problems/CHFMOT18
// PROBLEM DIFFICULTY RATTING: 1250
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

long long int get_value(long long int num, long long int total){
    if (num > total)
        return total;
    else{
        while(total > num) total -= 2;
        return total;
    }
}

int main(void) {
    int t;
    long long int s, n, coin_count, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &s, &n);
        coin_count = 0;
        
        if (s%n == 0)
            printf("%lld\n", s/n);
        else{
            while(s > 1){
                temp = get_value(s, n);
                coin_count += s / temp;
                s = s % temp;
            }

            if (s == 1)
                printf("%lld\n", coin_count+1);
            else
                printf("%lld\n", coin_count);

        }
    }
    
	return 0;
}



