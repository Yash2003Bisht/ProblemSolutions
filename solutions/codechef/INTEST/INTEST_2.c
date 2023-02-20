// DATE: 02/11/2022, 07:14:27
// PROBLEM NAME: Enormous Input Test
// PROBLEM URL: https://www.codechef.com/problems/INTEST
// PROBLEM DIFFICULTY RATTING: 464
// STATUS: accepted
// TIME: 0.26
// MEMORY: 5.1M

//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.
#include<stdio.h>

int main()
{
	int n,k,ans=0,i;
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(t%k==0)
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}



