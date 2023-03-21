// DATE: 21/03/2023, 07:30:33
// PROBLEM NAME: Fancy Quotes
// PROBLEM URL: https://www.codechef.com/problems/FANCY
// PROBLEM DIFFICULTY RATTING: 1279
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, flag;
    char s[101];

    scanf("%d", &t);

    while(t--){
        scanf("\n%[^\n]", s);
        char *split_s = strtok(s, " ");
        flag = 0;
        
        while(split_s){
            if (!strcmp(split_s, "not")){
                flag = 1;
                break;
            }
            split_s = strtok(NULL, " ");
        }
        
        if (flag)
            printf("Real Fancy\n");
        else
            printf("regularly fancy\n");
        
    }
    
	return 0;
}



