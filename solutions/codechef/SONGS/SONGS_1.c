// DATE: 12/06/2023, 04:40:27
// PROBLEM NAME: Playlist
// PROBLEM URL: https://www.codechef.com/problems/SONGS
// PROBLEM DIFFICULTY RATTING: 489
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    // ================= TESTING SUBMISSION =================
    int i,t,n,x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d",&n,&x);
	    printf("%d\n",n/(3*x));
	}
	return 0;
}



