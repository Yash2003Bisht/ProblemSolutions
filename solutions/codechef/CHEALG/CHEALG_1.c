// DATE: 12/03/2023, 02:14:19
// PROBLEM NAME: Check Algorithm
// PROBLEM URL: https://www.codechef.com/problems/CHEALG
// PROBLEM DIFFICULTY RATTING: 1273
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

int digitCount(int num){
    int count = 0;

    while(num){
        count++;
        num = num/10;
    }

    return count;
}

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--){
        char s[10001];
        scanf("%s", s);

        int s_len = strlen(s), new_s_len = 0, temp = 1;

        for (int i=0; i<s_len - 1; i++){
            if (s[i] == s[i+1]){
                temp++;
            }else{
                new_s_len += digitCount(temp) + 1;
                temp = 1;
            }
        }

        if (temp > 1)
            new_s_len += digitCount(temp) + 1;
        else
            new_s_len += 2;
        
        if (new_s_len < s_len)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
	return 0;
}


