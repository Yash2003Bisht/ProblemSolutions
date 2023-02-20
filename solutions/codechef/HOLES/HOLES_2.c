// DATE: 09/09/2022, 06:34:55
// PROBLEM NAME: Holes in the text
// PROBLEM URL: https://www.codechef.com/problems/HOLES
// PROBLEM DIFFICULTY RATTING: 1093
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include<string.h>

int main(void) {
    int t,length,i;
    char s[100];
    scanf("%d", &t);
    
    while (t--){
        scanf("%s", s);
        int count = 0;
        length = strlen(s);
        for(i=0; i<length; i++){
            if (s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R'){
                count++;
            }
            if (s[i] == 'B'){
                count += 2;
            }
        }
        printf("%d\n", count);
    }
	return 0;
}



