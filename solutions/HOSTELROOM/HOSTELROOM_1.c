// QUESTION URL: https://www.codechef.com/problems/HOSTELROOM
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,x,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&x);
        int max_a=x,counter=x;
        for(int i=0; i<n; i++){
            scanf("%d", &a);
            counter += a;
            if (counter > max_a){
                max_a = counter;
            }
        }
        printf("%d\n", max_a);
    }
	return 0;
}



