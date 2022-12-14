// QUESTION URL: https://www.codechef.com/problems/XYSTR
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
	int t, count, i;
	scanf("%d", &t);

	while(t--){
	    char s[100000];
	    count = 0, i = 0;
	    scanf("%s", &s);

	    while(1){
	        if (s[i] == '\0' || s[i+1] == '\0') break;

	        else if (s[i] != s[i+1]){
	            count++;
	            i++;
	        }

	        i++;
	    }

	    printf("%d\n", count);

	}
	return 0;
}



