// DATE: 03/10/2023, 08:23:12
// PROBLEM NAME: Who dares to be a millionaire
// PROBLEM URL: https://www.codechef.com/problems/WDTBAM
// PROBLEM DIFFICULTY RATTING: 1497
// STATUS: wrong answer
// TIME: 0.07
// MEMORY: 1.5M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int main(void) {
    int t, n, count;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        char correct_ans[n+1], chef_answer[n+1];
        int marks[n];

        scanf("%s\n%s", correct_ans, chef_answer);

        for (int i=0; i<n+1; i++)
            scanf("%d", &marks[i]);

        count = 0;

        for (int i=0; i<n; i++){
            if (correct_ans[i] == chef_answer[i])
                count++;
        }

        printf("%d\n", marks[count]);

    }
    
	return 0;
}



