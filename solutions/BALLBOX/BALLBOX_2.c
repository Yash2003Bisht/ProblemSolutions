// QUESTION URL: https://www.codechef.com/problems/BALLBOX
// STATUS: accepted

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



