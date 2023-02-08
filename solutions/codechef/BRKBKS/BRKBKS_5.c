// QUESTION URL: https://www.codechef.com/problems/BRKBKS
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, s, w, count, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &s);
        count = 1, temp = s;

        for (int i=0; i<3; i++){
            scanf("%d", &w);
            
            if (temp >= w) temp -= w;
            else{
                count++;
                temp = s - w;
            }

        }
        
        printf("%d\n", count);

    }
    
	return 0;
}



