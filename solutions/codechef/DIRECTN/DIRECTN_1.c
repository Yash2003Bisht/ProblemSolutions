// DATE: 04/08/2023, 07:29:12
// PROBLEM NAME: Professor And Directions
// PROBLEM URL: https://www.codechef.com/problems/DIRECTN
// PROBLEM DIFFICULTY RATTING: 1420
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char direction[n+1];
        scanf("%s", direction);
        flag = 0;

        for (int i=0; i<n-1; i++){
            if ((direction[i] == 'L' && direction[i+1] == 'L') ||
                (direction[i] == 'R' && direction[i+1] == 'R')){
                    flag = 1;
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



