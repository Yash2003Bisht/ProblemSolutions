// DATE: 02/06/2023, 07:36:55
// PROBLEM NAME: Subsequence Equality
// PROBLEM URL: https://www.codechef.com/problems/LIKECS01
// PROBLEM DIFFICULTY RATTING: 1363
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, flag;
    char s[101];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        int counter[26] = {0};
        flag = 0;

        for (int i=0; s[i] != '\0'; i++){
            counter[s[i] - 97]++;

            if (counter[s[i] - 97] > 1){
                flag = 1;
                break;
            }

        }

        if (flag)
            printf("yes\n");
        else
            printf("no\n");
        
    }
    
	return 0;
}



