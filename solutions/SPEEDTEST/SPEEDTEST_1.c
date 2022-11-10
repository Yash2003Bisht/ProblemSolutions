// QUESTION URL: https://www.codechef.com/problems/SPEEDTEST
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,a,x,b,y;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &a,&x,&b,&y);
        float k_ph_a = (float) a/x;
        float k_ph_b = (float) b/y;
        
        if(k_ph_a > k_ph_b){
            printf("Alice\n");
        } else if(k_ph_a < k_ph_b){
            printf("Bob\n");
        } else{
            printf("Equal\n");
        }
        
    }
	return 0;
}



