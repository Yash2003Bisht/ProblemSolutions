// DATE: 23/05/2023, 08:12:56
// PROBLEM NAME: Crazy Bishops on Chessboard
// PROBLEM URL: https://www.codechef.com/problems/CRZBISHOP
// PROBLEM DIFFICULTY RATTING: 1351
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, ans, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        if (n <= 2)
            printf("0\n");
        else{
            temp = (n-2)/2 + (n-2)%2;
            ans = n%2 == 0 ? temp*2 + temp : temp*2 + temp - 1;
            printf("%d\n", ans);
        }
    }
    
	return 0;
}



