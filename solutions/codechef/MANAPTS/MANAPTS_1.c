// QUESTION URL: https://www.codechef.com/problems/MANAPTS
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    printf("%d\n",y/x);
	}
	return 0;
}


