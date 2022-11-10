// QUESTION URL: https://www.codechef.com/problems/XJUMP
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    printf("%d\n",(x/y)+(x%y));
	}
	return 0;
}



