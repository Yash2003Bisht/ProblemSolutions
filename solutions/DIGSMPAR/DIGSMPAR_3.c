// QUESTION URL: https://www.codechef.com/problems/DIGSMPAR
// STATUS: accepted

#include <stdio.h>

int digitSum(int num){
    int sum = 0;

    while(num){
        sum += num%10;
        num = num/10;
    }
    
    return sum;
}


int main(void) {
    int t, n, sum;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        sum = digitSum(n);
        
        if (sum%2 == 0){
            while (sum%2 == 0){
                n++;
                sum = digitSum(n);
            }
        } else{
            while (sum%2 != 0){
                n++;
                sum = digitSum(n);
            }
        }
        
        printf("%d\n", n);
        
        
        
    }
    
	return 0;
}



