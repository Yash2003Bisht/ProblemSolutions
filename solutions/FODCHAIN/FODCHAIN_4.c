// QUESTION URL: https://www.codechef.com/problems/FODCHAIN

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



