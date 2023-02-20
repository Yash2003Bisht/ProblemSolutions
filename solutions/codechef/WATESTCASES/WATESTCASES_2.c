// DATE: 05/09/2022, 06:29:05
// PROBLEM NAME: WA Test Cases
// PROBLEM URL: https://www.codechef.com/problems/WATESTCASES
// PROBLEM DIFFICULTY RATTING: 976
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int s[n];
		int  smallest = 0;
		char v[n];
		for (int i=0; i<n; i++){
			scanf("%d", &s[i]);
		}
		scanf("\n"); // point to the next line
		for (int i=0; i<n; i++){
			scanf("%c", &v[i]);
		}

		for (int i=0; i<n; i++){
			if (v[i] == '0'){
				if (smallest == 0){
					smallest = s[i];
				} else if (smallest > s[i]){
					smallest = s[i];

				}
			}
		}
		printf("%d\n", smallest);
	}
	return 0;
}



