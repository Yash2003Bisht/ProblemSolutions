// DATE: 11/05/2023, 08:18:03
// PROBLEM NAME: Yet Another Palindrome Making Problem
// PROBLEM URL: https://www.codechef.com/problems/MAKEPALAGAIN
// PROBLEM DIFFICULTY RATTING: 1328
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        int counter_1[26] = {0}, counter_2[26] = {0}, flag = 1;
        scanf("%s", s);
        
        for (int i=0; i<n; i++){
            if (i%2 == 0)
                counter_1[s[i] - 97]++;
            else
                counter_2[s[i] - 97]++;
        }
        
        for (int i=0; i<26; i++){
            if (counter_1[i] != counter_2[i]){
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



