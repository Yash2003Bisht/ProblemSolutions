// QUESTION URL: https://www.codechef.com/problems/HEADBOB
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d",&n);
        char s[n];
        scanf("%s",&s);
        int indian = 0;
        int cant_say = 0;
        
        for(int i=0; i<n; i++){
            if(s[i] == 'I'){
                indian = 1;
                break;
            } else if(s[i] == 'N'){
                cant_say++;
            }
        }
        
        if(indian){
            printf("INDIAN\n");
        }else if(cant_say == n){
            printf("NOT SURE\n");
        }else{
            printf("NOT INDIAN\n");
        }
    }
	return 0;
}



