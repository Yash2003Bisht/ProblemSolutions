// QUESTION URL: https://www.codechef.com/problems/WATESTCASES
// STATUS: wrong answer

#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int s[n];
		char v[n];
		for (int i=0; i<n; i++){
			scanf("%d", &s[i]);
		}
		scanf("\n"); // point to the next line
		for (int i=0; i<n; i++){
			scanf("%c", &v[i]);
		}
		int  smallest = s[0];
		for (int i=1; i<=n; i++){
			if (v[i] == '0' && smallest > s[i]){
				smallest = s[i];
			}
		}
		printf("%d\n", smallest);
	}
	return 0;
}



