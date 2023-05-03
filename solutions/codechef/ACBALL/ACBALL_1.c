// DATE: 03/05/2023, 07:08:32
// PROBLEM NAME: Akhil And Colored Balls
// PROBLEM URL: https://www.codechef.com/problems/ACBALL
// PROBLEM DIFFICULTY RATTING: 1329
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, i;
    char x[100001], y[100001], result[100002];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s\n%s", x, y);
        
        for (i=0; x[i] != '\0'; i++){
            if (x[i] == y[i]){
                if (x[i] == 'W')
                    result[i] = 'B';
                else
                    result[i] = 'W';
            } else{
                result[i] = 'B';
            }
        }
        
        result[i] = '\0';
        printf("%s\n", result);
        
    }
    
	return 0;
}



