// QUESTION URL: https://www.codechef.com/problems/WGHTS
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,w,x,y,z;
	scanf("%d", &t);
	while(t--){
	    scanf("%d%d%d%d", &w,&x,&y,&z);
	    if(x+y == w || x+z == w || y+z == w || w == x || w == y || w == z){
	        printf("YES\n");
	    }else{
	        printf("NO\n");	        
	    }
	}
	return 0;
}



