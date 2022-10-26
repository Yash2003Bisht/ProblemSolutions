// QUESTION URL: https://www.codechef.com/problems/STRP

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char s[100000];
	    int i,n,c=0;
	    scanf("%ld",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf(" %c",&s[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            c++;
	            i++;
	        }
	        else
	        {
	            c++;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}



