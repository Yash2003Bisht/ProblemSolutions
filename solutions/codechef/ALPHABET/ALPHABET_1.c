// DATE: 13/12/2022, 06:53:59
// PROBLEM NAME: Studying Alphabet
// PROBLEM URL: https://www.codechef.com/problems/ALPHABET
// PROBLEM DIFFICULTY RATTING: 1123
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int n, flag;
    char s[27], w[13], s_count[26] = {0};

    scanf("%s", &s);
    scanf("%d", &n);
    
    for (int i=0; s[i]  != '\0'; i++) s_count[s[i] - 97] = 1;

    while(n--){
        scanf("%s", &w);
        flag = 1;

        for (int i=0; w[i] != '\0'; i++){
            if (s_count[w[i]-97] == 0){
                flag = 0;
                break;
            }
        }

        if (flag) printf("Yes\n");
        else printf("No\n");

    }

	return 0;
}



