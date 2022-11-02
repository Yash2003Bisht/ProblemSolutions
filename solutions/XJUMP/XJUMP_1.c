// QUESTION URL: https://www.codechef.com/problems/XJUMP

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



