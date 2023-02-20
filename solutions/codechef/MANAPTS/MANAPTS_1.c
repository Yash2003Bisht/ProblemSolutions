// DATE: 21/01/2023, 08:35:14
// PROBLEM NAME: Mana Points
// PROBLEM URL: https://www.codechef.com/problems/MANAPTS
// PROBLEM DIFFICULTY RATTING: 327
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


