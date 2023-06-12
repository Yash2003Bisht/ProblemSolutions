// DATE: 12/06/2023, 04:13:29
// PROBLEM NAME: Dominant Army
// PROBLEM URL: https://www.codechef.com/problems/DOMINANT
// PROBLEM DIFFICULTY RATTING: 488
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    // ================= TESTING SUBMISSION =================
    int i,t,na,nb,nc,sum1,sum2,sum3;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d",&na,&nb,&nc);
	    sum1 = na+nb;
	    sum2 = na+nc;
	    sum3 = nb+nc;
	    if(nc>sum1 || nb>sum2 || na>sum3)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}



