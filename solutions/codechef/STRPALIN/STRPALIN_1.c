// QUESTION URL: https://www.codechef.com/problems/STRPALIN
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include<stdbool.h> 

int main(void) {
    int t;
    bool flag;
    scanf("%d", &t);
    
    while(t--){
        char a[1001], b[1001];
        scanf("%s", a);
        scanf("%s", b);
        flag = false;
        
        for (int i=0; a[i] != '\0'; i++){
            for (int j=0; b[j] != '\0'; j++){
                if (a[i] == b[j]) {
                    flag = true;
                    break;
                }
            }
        }
        
        if(flag) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



