// DATE: 30/03/2023, 07:58:51
// PROBLEM NAME: Chef and his daily routine
// PROBLEM URL: https://www.codechef.com/problems/CHEFROUT
// PROBLEM DIFFICULTY RATTING: 1292
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, flag;
    scanf("%d", &t);
    
    while(t--){
        char n[100001];
        flag = 1;
        scanf("%s", n);
        
        for (int i=0; i<strlen(n)-1; i++){
            if (n[i] - n[i+1] > 0){
                flag = 0;
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



