// QUESTION URL: https://www.codechef.com/problems/CHFSPL
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,a,b,c;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        int result1 = a+b;
        int result2 = a+c;
        int result3 = b+c;
        if (result1 >= result2 && result1 >= result3){
            printf("%d\n", result1);
        } else if(result2 >= result1 && result2 >= result3){
            printf("%d\n", result2);
        } else{
            printf("%d\n", result3);
        }
    }
	return 0;    

}


