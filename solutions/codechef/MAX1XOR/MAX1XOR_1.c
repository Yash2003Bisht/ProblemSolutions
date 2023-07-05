// DATE: 05/07/2023, 08:21:11
// PROBLEM NAME: Max count of 1
// PROBLEM URL: https://www.codechef.com/problems/MAX1XOR
// PROBLEM DIFFICULTY RATTING: 1381
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int max_count(char crr, char* s){
    int count = crr == '1' ? 1 : 0;

    for (int i=1; s[i] != '\0'; i++){
        if (s[i-1] != crr){
            count++;
            crr = '1';
        } else{
            crr = '0';
        }
    }

    return count;
}

int main(void) {
    int t, n, count1, count2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1], crr;

        scanf("%s", s);
        
        // * No need to create a separate array for X
        // * directly count the number of occurrences of 1s
        count1 = max_count('1', s);
        count2 = max_count('0', s);

        printf("%d\n", max(count1, count2));

    }
    
	return 0;
}


