// DATE: 02/11/2022, 07:28:58
// PROBLEM NAME: Test Score
// PROBLEM URL: https://www.codechef.com/problems/CHEFSCORE
// PROBLEM DIFFICULTY RATTING: 610
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
	int t,x,y,z;
	scanf("%d",&t);
	
	while(t--) {
	    scanf("%d%d%d",&x,&y,&z);
	    if(z%y==0)
	        printf("yes\n");
	    else 
	        printf("no\n");
	}
	return 0;
}



