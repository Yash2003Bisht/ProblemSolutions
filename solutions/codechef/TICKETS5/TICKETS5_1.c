// DATE: 27/04/2023, 08:01:53
// PROBLEM NAME: Tickets
// PROBLEM URL: https://www.codechef.com/problems/TICKETS5
// PROBLEM DIFFICULTY RATTING: 1332
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, count, flag;
    char s[101];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        int arr[26] = {0};
        count = 0;
        
        for (int i=0; s[i] != '\0'; i++)
            arr[s[i] - 65] = 1;
        
        for (int i=0; i<26; i++){
            if (arr[i] == 1)
                count++;
        }
        
        flag = count == 2 ? 1 : 0;
        if (flag){
            for (int i=0; s[i+1] != '\0'; i++){
                if (s[i] == s[i+1]){
                    flag = 0;
                    break;
                }
            }
        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}


