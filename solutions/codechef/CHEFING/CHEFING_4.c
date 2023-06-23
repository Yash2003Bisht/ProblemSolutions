// DATE: 23/06/2023, 08:38:01
// PROBLEM NAME: Chef and Secret Ingredients
// PROBLEM URL: https://www.codechef.com/problems/CHEFING
// PROBLEM DIFFICULTY RATTING: 1376
// STATUS: accepted
// TIME: 0.21
// MEMORY: 5.4M

#include <stdio.h>
#include <string.h>

int cmpfunc( const void *a, const void *b) {
  return *(char*)a - *(char*)b;
}

int main(void) {
    int t, n, total, size;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char ingredients[201] = {'\0'};
        int counter[26] = {0};
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%s", ingredients);
            size = strlen(ingredients);
            qsort(ingredients, size, sizeof(char), cmpfunc);

            for (int j=0; j < size; j++){
                if (ingredients[j] != ingredients[j+1])
                    counter[ingredients[j] - 97]++;
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


