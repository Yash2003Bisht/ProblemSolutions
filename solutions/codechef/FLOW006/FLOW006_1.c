// DATE: 01/11/2022, 07:43:04
// PROBLEM NAME: Sum of Digits
// PROBLEM URL: https://www.codechef.com/problems/FLOW006
// PROBLEM DIFFICULTY RATTING: 455
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--){
	    int n,m,sum=0;
	    scanf ("%d",&n);
	    while(n>0){
	        
	        m=n%10;
	        n=n/10;
	    
	        sum=sum+m;
	    }
	        printf("%d\n",sum);
	    
	    
	    
	    
	    
	    
	}
	
	
	return 0;
}



