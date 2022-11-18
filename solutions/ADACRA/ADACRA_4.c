// QUESTION URL: https://www.codechef.com/problems/ADACRA
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
	int t,n,count;
	scanf("%d",&t);
	
	while(t--) {
        scanf("%d",&n);
        char s[n+1];
        count = 0;
        scanf("%s",&s);
	    
	    for(int i=0;s[i]!='\0';i++) {
	       if(s[i]!=s[i+1]) count++;
	    }
	    
	    printf("%d\n", count/2);
	
	    
	}
	return 0;
}



