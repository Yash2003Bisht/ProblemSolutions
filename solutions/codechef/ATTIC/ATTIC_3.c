// DATE: 05/04/2023, 08:34:15
// PROBLEM NAME: Attic Crossing
// PROBLEM URL: https://www.codechef.com/problems/ATTIC
// PROBLEM DIFFICULTY RATTING: 1295
// STATUS: wrong answer
// TIME: 0.05
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, count, counter, days;
    char p[5000001];
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", p);
        count = 0, counter = 0, days = 0;
        
        for (int i=0; p[i] != '\0'; i++){
            if (p[i] == '.')
                count++;
            else {
                if (count && counter < count){
                    counter = count;
                    days++;
                    count = 0;
                }
            }

        }
        
        printf("%d\n", days);
        
    }
    
	return 0;
}



