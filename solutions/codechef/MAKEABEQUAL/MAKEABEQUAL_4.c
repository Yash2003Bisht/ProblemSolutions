// DATE: 02/03/2023, 08:21:13
// PROBLEM NAME: Make A and B equal
// PROBLEM URL: https://www.codechef.com/problems/MAKEABEQUAL
// PROBLEM DIFFICULTY RATTING: 1264
// STATUS: wrong answer
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    long long int t, n, b, temp;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        long long int a[n], counter[n], max_diff = 0, total = 0;
        
        for (long long int i=0; i<n*2; i++){
            if (i < n)
                scanf("%lld", &a[i]);
            else {
                scanf("%lld", &b);
                temp = abs(a[i-n] - b);
                counter[i-n] = abs(a[i-n] - b);
                total += temp;
                
                if (temp > max_diff)
                    max_diff = temp;
                
            }
        }
        
        if (max_diff != total-max_diff)
            printf("-1\n");
        else
            printf("%lld\n", max_diff);
        
    }
    
	return 0;
}



