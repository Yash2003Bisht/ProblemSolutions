// QUESTION URL: https://www.codechef.com/problems/HOWMANYMAX
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n], pre = '0';
        count = 1;
        
        scanf("%s", &s);

        for(int i=0; s[i]!='\0'; i++){
            if (s[i] == '0' && pre == '1'){
                count++;
                pre = '0';
            } else if (s[i] == '1' && pre == '0'){
                pre = '1';
            }
        }
        
        printf("%d\n", count);
        
    }
	return 0;
}



