// DATE: 03/05/2023, 07:04:31
// PROBLEM NAME: Akhil And Colored Balls
// PROBLEM URL: https://www.codechef.com/problems/ACBALL
// PROBLEM DIFFICULTY RATTING: 1329
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    char x[100001], y[100000];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s\n%s", x, y);
        
        for (int i=0; x[i] != '\0'; i++){
            if (x[i] == y[i]){
                if (x[i] == 'W')
                    printf("B");
                else
                    printf("W");
            } else{
                printf("B");
            }
        }
        
        printf("\n");
        
    }
    
	return 0;
}



