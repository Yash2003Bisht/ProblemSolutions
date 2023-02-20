// DATE: 07/10/2022, 06:09:29
// PROBLEM NAME: Snake Procession
// PROBLEM URL: https://www.codechef.com/problems/SNAKPROC
// PROBLEM DIFFICULTY RATTING: 1014
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int r, l,h,valid;
    scanf("%d", &r);
    while(r--){
        scanf("%d", &l);
        char l_string[l];
        scanf("%s", &l_string);
        h = 0, valid=1;
        for (int i=0; i<l; i++){
            if (l_string[i] == 'H' && !h){
                h = 1;
            } else if (l_string[i] == 'T' && h){
                h = 0;
            } else if (l_string[i] != '.'){
                valid = 0;
                break;
            }
        }
        
        if (valid && !h){
            printf("Valid\n");
        } else{
            printf("Invalid\n");
        }
        
    }
	return 0;
}



