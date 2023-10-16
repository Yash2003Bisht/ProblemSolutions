// DATE: 16/10/2023, 08:14:05
// PROBLEM NAME: Friend or Girlfriend
// PROBLEM URL: https://www.codechef.com/problems/STRCH
// PROBLEM DIFFICULTY RATTING: 1486
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 2.3M

#include <stdio.h>

int main(void) {
    int t, n;
    long long int count, temp;
    char x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s %c", s, &x);
        
        temp = 0, count = 0;

        for (int i=0; i<n; i++){
            if (s[i] != x)
                temp++;
            else{
                count += ((temp+1)*temp) / 2;
                temp = 0;
            }
        }

        if (temp)
            count += ((temp+1)*temp) / 2;

        printf("%lld\n", ((n+1)*n)/2 - count);

    }
    
	return 0;
}



