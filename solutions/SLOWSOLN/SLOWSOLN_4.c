// QUESTION URL: https://www.codechef.com/problems/SLOWSOLN
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int maxt,maxn,sumn;
	scanf("%d\n",&t);
	while(t--)
	{
	    scanf("%d %d %d\n",&maxt,&maxn,&sumn);
	    int x,y,z;
	    x=sumn/maxn;
	    y=sumn%maxn;
	    
	    if (maxt < x){
	        x = maxt;
	    }
	    
        z=maxn*maxn*x+y*y;
        printf("%d\n",z);
	    
	}
	return 0;
}



