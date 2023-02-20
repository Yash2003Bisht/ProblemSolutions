// DATE: 10/09/2022, 06:07:21
// PROBLEM NAME: Balls and Boxes
// PROBLEM URL: https://www.codechef.com/problems/BALLBOX
// PROBLEM DIFFICULTY RATTING: 994
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
	int t,n,k;
	scanf("%d", &t);
	while(t--){
	    scanf("%d%d", &n,&k);
	    
	    if(k==n && k==1){
	        printf("YES\n");
	    } else if(k>n || n==k){
	        printf("NO\n");
	    } else{
	        printf("YES\n");
	    }
	}
	return 0;
}



