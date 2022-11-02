// QUESTION URL: https://www.codechef.com/problems/DIFFCONSEC

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




