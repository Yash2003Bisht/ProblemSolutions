// DATE: 30/09/2023, 08:34:35
// PROBLEM NAME: Chef goes Left Right Left
// PROBLEM URL: https://www.codechef.com/problems/CLRL
// PROBLEM DIFFICULTY RATTING: 1498
// STATUS: accepted
// TIME: 0.10
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
	
	int t, n, r, prev, curr, left, right, flag;
	scanf("%d", &t);

	while(t--) {
	   scanf("%d%d", &n, &r);
	   scanf("%d", &prev);

	   flag=1, left=0, right=1000000000;

	   if(n==1) {
	       printf("YES\n");
	       continue;
	   }
	   
	   for(int i=1; i<n; i++) {
	       scanf("%d", &curr);

	       if(curr < prev){
	           if(left > curr)
	             flag = 0;
	           right = prev; 
	       } else {
	           if(curr > right)
	             flag = 0;
	           left = prev;
	       }

	       prev = curr;
	   }
	   
	   if(flag==0)
	       printf("NO\n");
	   else
	       printf("YES\n");

	}

	return 0;
}


