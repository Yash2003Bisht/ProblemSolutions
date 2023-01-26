// QUESTION URL: https://www.codechef.com/problems/SNDMAX
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,a;
    scanf("%d",&t);
    while(t--){
        int first_max=0;
        int second_max=0;
        for(int i=0; i<3; i++){
            scanf("%d",&a);
            if(a>first_max){
                second_max=first_max;
                first_max=a;
            } else if(a>second_max){
                second_max=a;
            }
        }
        printf("%d\n", second_max);
    }
	return 0;
}



