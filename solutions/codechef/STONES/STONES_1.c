// DATE: 09/02/2023, 07:07:27
// PROBLEM NAME: Jewels and Stones
// PROBLEM URL: https://www.codechef.com/problems/STONES
// PROBLEM DIFFICULTY RATTING: 1248
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, count;
    scanf("%d", &t);
    
    while(t--){
        char s[101] = {'\0'}, j[101] = {'\0'};
        count = 0;
        scanf("%s", j);
        scanf("%s", s);
        
        for (int i=0; s[i] != '\0'; i++){
            for (int k=0; j[k] != '\0'; k++){
                if (s[i] == j[k]){
                    count++;
                    break;
                }
            }
        }
        
        printf("%d\n", count);
        
    }
    
    
    
	return 0;
}



