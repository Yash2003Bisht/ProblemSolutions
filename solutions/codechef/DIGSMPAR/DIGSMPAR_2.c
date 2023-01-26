// QUESTION URL: https://www.codechef.com/problems/DIGSMPAR
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

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
    char flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        sum = digitSum(n);
        
        if (sum%2 == 0)
            flag = 'e';
        else
            flag = 'o';
        
        while ((sum%2 != 0 && flag == 'o') || (sum%2 == 0 && flag == 'e')){
            n++;
            sum = digitSum(n);
        }
        
        printf("%d\n", n);
        
        
        
    }
    
	return 0;
}



