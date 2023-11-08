// DATE: 06/11/2023, 08:28:36
// PROBLEM NAME: Prime in a binary string
// PROBLEM URL: https://www.codechef.com/problems/PINBS
// PROBLEM DIFFICULTY RATTING: 1473
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, flag;
    char s[100001];
    scanf("%d", &t);

    while(t--){
        scanf("%s", s);
        flag = 0;

        for (int i=0; s[i+1] != '\0'; i++){
            if ((s[i] == '1' && s[i+1] == '0') || (s[i] == '1' && s[i+1] == '1')){
                flag = 1;
                break;
            }
        }

        if (flag)
            printf("Yes\n");
        else
            printf("No\n");

    }

	return 0;
}



