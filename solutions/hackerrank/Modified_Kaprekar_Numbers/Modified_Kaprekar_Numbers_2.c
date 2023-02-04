// QUESTION URL: https://www.hackerrank.com/challenges/kaprekar-numbers/problem
// STATUS: Accepted

#include <stdio.h>
#include <math.h>

int main(){
    
    long long int p, q, digit_count, temp1, temp2, total, flag = 0;
    scanf("%lld\n%lld", &p, &q);
    
    for (long long int i=p; i<=q; i++){
        digit_count = 0, temp1 = i;

        while(temp1>0){
            digit_count++;
            temp1 /= 10;
        }
        
        temp1 = i*i;
        temp2 = pow(10, digit_count);
        total = temp1 / temp2 + temp1 % temp2;
        
        if (total == i){
            printf("%lld ", total);
            flag++;
        }
        
    }
    
    if (!flag) printf("INVALID RANGE\n");
    
    return 0;
}
