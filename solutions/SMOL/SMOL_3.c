// QUESTION URL: https://www.codechef.com/problems/SMOL
// STATUS: time limit exceeded

#include <stdio.h>

int main(void) {
    int t,n,k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&k);
        if (n==k){
            printf("0\n");
        } else if(n<k){
            printf("%d\n",n);
        } else{
            int counter;
            while (1){
                counter = n-k;
                if (counter >= 0){
                    n = counter;
                } else{
                    break;
                }
            }
            printf("%d\n", n);
        }
    }
	return 0;
}



