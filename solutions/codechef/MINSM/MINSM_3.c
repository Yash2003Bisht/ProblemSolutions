// DATE: 21/04/2023, 08:47:30
// PROBLEM NAME: Minimum Sum
// PROBLEM URL: https://www.codechef.com/problems/MINSM
// PROBLEM DIFFICULTY RATTING: 1315
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.3M

#include <stdio.h>

long long int gcd(long long int a, long long int b){
    if (a == 0)
        return a;
    else if (b == 0)
        return b;
    else if (b == a)
        return a;
    
    if (a > b)
        return gcd(a-b, b);
    
    return gcd(a, b-a);
    
}

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int arr[n], total;

        for (int i=0; i<n; i++)
            scanf("%lld", &arr[i]);
            
        
        total = arr[0];
        for (int i=1; i<n; i++)
            total = gcd(total, arr[i]);

        printf("%lld\n", n*total);

        
    }
    
	return 0;
}



