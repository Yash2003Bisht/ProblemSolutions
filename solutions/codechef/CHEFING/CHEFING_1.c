// DATE: 23/06/2023, 08:56:46
// PROBLEM NAME: Chef and Secret Ingredients
// PROBLEM URL: https://www.codechef.com/problems/CHEFING
// PROBLEM DIFFICULTY RATTING: 1376
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
	int t, n, total;
	scanf("%d", &t);

	while(t--) {
	    scanf("%d", &n);
	    int counter[26] = {0};
	    total = 0;

	    for(int i=0; i<n; i++) {
	        char ingredients[200];
	        scanf("%s", ingredients);

	        for(int j=0; ingredients[j] != '\0'; j++) {
	            if(counter[ingredients[j] - 97] == i)
	                counter[ingredients[j] - 97]++;
	        }

	    }

	    for(int i=0; i<26; i++){
	        if(counter[i] == n)
	            total++;
	    }

	    printf("%d\n", total);

	}

	return 0;
}


