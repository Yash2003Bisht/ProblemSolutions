// DATE: 06/05/2023, 08:07:49
// PROBLEM NAME: Chef and Chain
// PROBLEM URL: https://www.codechef.com/problems/CHEFCH
// PROBLEM DIFFICULTY RATTING: 1332
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, odd_1, even_1, odd_2, even_2;
    char s[100001], new_s[100001];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        odd_1 = 0, even_1 = 0, odd_2 = 0, even_2 = 0;
        strcpy(new_s, s);

        for (int i=0; s[i]!='\0'; i++){
            if (s[i] == '-'){
                if (i%2 == 0)
                    even_1++;
                else
                    odd_1++;
            } else{
                if (i%2 == 0)
                    even_2++;
                else
                    odd_2++;
            }
        }

        printf("%d\n", min(even_1 + odd_2, even_2 + odd_1));

    }
    
	return 0;
}



