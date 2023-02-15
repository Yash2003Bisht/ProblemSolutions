// QUESTION URL: https://www.codechef.com/problems/TWOSTR
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, flag;
    char x[11], y[11];
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", x);
        scanf("%s", y);
        flag = 0;
        
        for (int i=0; x[i] != '\0'; i++){
            if (x[i] != y[i] && x[i] != '?' && y[i] != '?'){
                flag = 1;
                break;
            }
        }
        
        if (!flag) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}


