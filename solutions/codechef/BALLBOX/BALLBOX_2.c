// DATE: 10/09/2022, 06:09:34
// PROBLEM NAME: Balls and Boxes
// PROBLEM URL: https://www.codechef.com/problems/BALLBOX
// PROBLEM DIFFICULTY RATTING: 994
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
	int t,n,k;
	scanf("%d", &t);
	while(t--){
	    scanf("%d%d", &n,&k);
	    
	    if(n>=k*(k+1)/2){
	        printf("YES\n");
	    } else{
	        printf("NO\n");
	    }
	}
	return 0;
}



