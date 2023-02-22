// DATE: 22/02/2023, 07:25:48
// PROBLEM NAME: Avoid Fixed Points
// PROBLEM URL: https://www.codechef.com/problems/NOFIX
// PROBLEM DIFFICULTY RATTING: 1250
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
	int t, n, count, temp;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d", &n);
	    long long int a;
	    count = 0, temp=1;
	    
	    for (int i=0; i<n; i++){
	        scanf("%lld", &a);
	        if (i+temp == a){
	           count++;
	           temp++;
	       }
	    }

	   printf("%d\n", count);

	}
	
	return 0;
}



