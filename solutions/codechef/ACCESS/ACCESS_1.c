// DATE: 20/01/2024, 09:56:40
// PROBLEM NAME: Access Control
// PROBLEM URL: https://www.codechef.com/problems/ACCESS
// PROBLEM DIFFICULTY RATTING: 1096
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, x, swipes, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        char s[n+1];
        scanf("%s", s);

        flag = 1, swipes = 0;

        for (int i=0; i<n; i++){
            if (s[i] == '0')
                swipes--;
            else
                swipes = x;

            if (swipes < 0){
                flag = 0;
                break;
            }

        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
}



