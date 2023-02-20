// DATE: 08/09/2022, 12:47:22
// PROBLEM NAME: Tanu and Head-bob
// PROBLEM URL: https://www.codechef.com/problems/HEADBOB
// PROBLEM DIFFICULTY RATTING: 1065
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

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
            printf("NOT SURE");
        }else{
            printf("NOT INDIAN\n");
        }
    }
	return 0;
}



