// QUESTION URL: https://www.codechef.com/problems/WGHTS
// STATUS: accepted

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



