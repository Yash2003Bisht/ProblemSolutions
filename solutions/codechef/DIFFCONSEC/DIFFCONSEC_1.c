// DATE: 02/11/2022, 02:40:03
// PROBLEM NAME: Different Consecutive Characters 
// PROBLEM URL: https://www.codechef.com/problems/DIFFCONSEC
// PROBLEM DIFFICULTY RATTING: 879
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>
void clr();
void clr()
{
    int x,i=0,k;
    scanf("%d",&x);
    char s[x];
    scanf("%s",&s);
    while(i<x)
    {
        if(s[i]==s[i+1]) k++;
        
        i++;
    }

    printf("%d\n",k);
}




int main(void) 
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    clr();
	}
	return 0;
}




