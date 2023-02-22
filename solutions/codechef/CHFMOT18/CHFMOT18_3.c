// DATE: 22/02/2023, 08:20:58
// PROBLEM NAME: Chef and Demonetisation
// PROBLEM URL: https://www.codechef.com/problems/CHFMOT18
// PROBLEM DIFFICULTY RATTING: 1250
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

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
        temp = s/n;
        
        if (s%n == 0) printf("%lld\n", temp);
        else if ((s%n) % 2 == 1 && s%n != 1) printf("%d\n", temp+2);
        else printf("%d\n", temp+1);
        
    }
    
	return 0;
}



