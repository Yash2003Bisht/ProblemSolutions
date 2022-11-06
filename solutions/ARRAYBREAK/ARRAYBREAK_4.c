// QUESTION URL: https://www.codechef.com/problems/ARRAYBREAK
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
    int t,n,a,odd,even;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        odd=0, even=0;
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        
        if (odd<even){
            printf("%d\n", odd);
        } else{
            printf("%d\n", even);
        }
        
    }
	return 0;
}



