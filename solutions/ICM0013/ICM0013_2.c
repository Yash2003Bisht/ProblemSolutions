// QUESTION URL: https://www.codechef.com/problems/ICM0013
// STATUS: time limit exceeded

#include <stdio.h>

int main(void) {
    int t,n,counter;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        counter = 0;
        for (int i=1; i<=n; i++){
            if (n%i<=n/2){
                counter++;
            }
        }
        printf("%d\n", counter);
    }
	return 0;
}



