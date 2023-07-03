// DATE: 03/07/2023, 07:41:53
// PROBLEM NAME: Name Reduction
// PROBLEM URL: https://www.codechef.com/problems/NAME1
// PROBLEM DIFFICULTY RATTING: 1404
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, flag;
    char name[40001];
    
    scanf("%d", &t);
    
    while(t--){
        // Reading string from input with space character
        scanf(" %[^\n]s", name);
        scanf("%d", &n);
        flag = 1;

        int counter_p[26] = {0}, counter_c[26] = {0};

        for (int i=0; name[i] != '\0'; i++){
            if (name[i] != ' ')
                counter_p[name[i] - 97]++;
        }

        for (int i=0; i<n; i++){
            // Reading string from input with space character
            scanf(" %[^\n]s", name);
            for (int i=0; name[i] != '\0'; i++){
                if (name[i] != ' ')
                    counter_c[name[i] - 97]++;
            }
        }
        
        for (int i=0; i<26; i++){
            if (counter_c[i] > 0 && counter_c[i] > counter_p[i]){
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



