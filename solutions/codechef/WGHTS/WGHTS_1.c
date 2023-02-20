// DATE: 04/09/2022, 04:25:42
// PROBLEM NAME: Weights
// PROBLEM URL: https://www.codechef.com/problems/WGHTS
// PROBLEM DIFFICULTY RATTING: 697
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,w,x,y,z;
	scanf("%d", &t);
	while(t--){
	    scanf("%d%d%d%d", &w,&x,&y,&z);
	    if(w == x || w == y || w == z || x+y == w || x+z == w || y+z == w || x+y+z == w){
	        printf("YES\n");
	    }else{
	        printf("NO\n");	        
	    }
	}
	return 0;
}



