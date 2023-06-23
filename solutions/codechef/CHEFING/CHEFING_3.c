// DATE: 23/06/2023, 08:43:28
// PROBLEM NAME: Chef and Secret Ingredients
// PROBLEM URL: https://www.codechef.com/problems/CHEFING
// PROBLEM DIFFICULTY RATTING: 1376
// STATUS: wrong answer
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>


int main(void) {
    int t, n, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char ingredients[201] = {'\0'};
        int counter[26] = {0};
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%s", ingredients);

            for (int j=0; j < ingredients[j] != '\0'; j++){
                if (counter[ingredients[j] - 97] == i)
                    counter[ingredients[j] - 97] = i+1;
            }

        }
        
        for (int i=0; i<26; i++){
            if (counter[i] >= n)
                total++;
        }
        
        printf("%d\n", total);

    }
    
	return 0;
}


