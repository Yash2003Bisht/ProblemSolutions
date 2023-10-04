// DATE: 03/10/2023, 09:04:19
// PROBLEM NAME: Who dares to be a millionaire
// PROBLEM URL: https://www.codechef.com/problems/WDTBAM
// PROBLEM DIFFICULTY RATTING: 1497
// STATUS: accepted
// TIME: 0.07
// MEMORY: 1.9M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
	int t, n, count, ans, i;
	scanf("%d", &t);

	while(t--) {
	    scanf("%d", &n);

	    int marks[n];
	    char correct_ans[n], chef_ans[n];

	    scanf("%s\n%s", correct_ans, chef_ans);

        count = 0
;
	    for(i=0; i<n; i++)
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
	            ans = max(ans, marks[i]);
	            i++;
	        }

	        printf("%d\n", ans);
	    }
	}
	return 0;
}


