// DATE: 01/05/2023, 07:36:55
// PROBLEM NAME: Distinct Characters Subsequence
// PROBLEM URL: https://www.codechef.com/problems/DISCHAR
// PROBLEM DIFFICULTY RATTING: 1314
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, total;
    char n[1000001];
    scanf("%d", &t);
    
    while(t--){
        int counter[26] = {0};
        scanf("%s", n);
        
        for (int i=0; n[i] != '\0'; i++)
            counter[n[i] - 97]++;
        
        total = 0;
        for (int i=0; i<26; i++){
            if (counter[i] > 0)
                total++;
        }
        
        printf("%d\n", total);
        
    }
    
	return 0;
}



