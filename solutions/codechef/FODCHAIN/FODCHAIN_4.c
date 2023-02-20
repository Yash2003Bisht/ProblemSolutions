// DATE: 21/10/2022, 06:28:32
// PROBLEM NAME: Food Chain
// PROBLEM URL: https://www.codechef.com/problems/FODCHAIN
// PROBLEM DIFFICULTY RATTING: 1062
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,e,k,temp_e,count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &e, &k);
        count = 0, temp_e = e;
        
        for (int i=0; i<e; i++){
            temp_e = (temp_e/k) + 0.5f;
            count++;
            if (temp_e == 0)
                break;
            
        }
        
        printf("%d\n", count);
        
    }
	return 0;
}



