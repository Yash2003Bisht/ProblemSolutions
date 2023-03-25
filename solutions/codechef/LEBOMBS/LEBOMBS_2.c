// DATE: 25/03/2023, 07:49:46
// PROBLEM NAME: Little Elephant and Bombs
// PROBLEM URL: https://www.codechef.com/problems/LEBOMBS
// PROBLEM DIFFICULTY RATTING: 1284
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        temp = n;
        char s[n+1];
        scanf("%s", s);
        
        for (int i=0; i<temp; i++){
            if (s[i] == '1' && i > 0 && i < temp-1){
                n--;
                if (s[i-1] == '0'){
                    s[i-1] = '1';
                    n--;
                }
                if (s[i+1] == '0'){
                    s[i+1] = '1';
                    n--;
                    i++;
                }
            } else if (s[i] == '1'){
                n--;
                if (i == 0 && s[i+1] == '0'){
                    s[i+1] = '1';
                    n--;
                    i++;
                } else if (i == temp-1 && s[i-1] == '0'){
                    s[i-1] = '1';
                    n--;
                }
            }

        }

        printf("%d\n", n);

    }
    
	return 0;
}



