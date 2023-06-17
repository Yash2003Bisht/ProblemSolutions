// DATE: 17/06/2023, 08:42:58
// PROBLEM NAME: CodeChef Streak
// PROBLEM URL: https://www.codechef.com/problems/CS2023_STK
// PROBLEM DIFFICULTY RATTING: 1009
// STATUS: wrong answer
// TIME: 0.04
// MEMORY: 5.1M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, count1, count2, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int a[n], b[n];
        
        for (int i=0; i<n*2; i++){
            if (i < n)
                scanf("%lld", &a[i]);
            else
                scanf("%lld", &b[i-n]);
        }

        count1 = 0, count2 = 0, temp = 0;
        for (int i=0; i<n; i++){
            if (a[i] > 0)
                temp++;
            else{
                count1 = max(count1, temp);
                temp = 0;
            }
        }
        
        temp = 0;
        for (int i=0; i<n; i++){
            if (b[i] > 0)
                temp++;
            else{
                count2 = max(count2, temp);
                temp = 0;
            }
        }
        
        if (count1 > count2)
            printf("Om\n");
        else if (count1 < count2)
            printf("Addy\n");
        else
            printf("Draw\n");
        
    }
    
	return 0;
}



