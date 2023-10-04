// DATE: 03/10/2023, 09:02:17
// PROBLEM NAME: Who dares to be a millionaire
// PROBLEM URL: https://www.codechef.com/problems/WDTBAM
// PROBLEM DIFFICULTY RATTING: 1497
// STATUS: accepted
// TIME: 0.06
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
	int t, n, count, ans, i;
	scanf("%d", &t);

	while(t--) {
	    scanf("%d", &n);

	    int marks[n];
	    char correct_ans[n], chef_ans[n];

	    scanf("%s", correct_ans);
	    scanf("%s", chef_ans);
	    
	    for(i=0, count=0; i<n; i++)
    	    if(correct_ans[i] == chef_ans[i])
    	        count++;

	    scanf("%d", &ans);

	    for(i=0; i<n; i++)
	        scanf("%d", &marks[i]);

	    if(count == n)
    	    printf("%d\n", marks[n-1]);
	    else {
	        i=0;

	        while(count--) {
	            if(ans < marks[i])
	                ans = marks[i];
	            i++;
	        }

	        printf("%d\n", ans);
	    }
	}
	return 0;
}


