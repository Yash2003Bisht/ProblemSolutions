// QUESTION URL: https://www.codechef.com/problems/XYSTR
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <string.h>

int main(void) {
	int t, count;
	scanf("%d", &t);
	
	while(t--){
	    char s[100001];
	    count = 0;
	    scanf("%s", &s);

	    for (int i=0; i<strlen(s)-1; i++){
	        if (s[i] != s[i+1]){
	            count++;
	            i++;
	        }
	    }
	    
	    printf("%d\n", count);
	    
	}
	return 0;
}



