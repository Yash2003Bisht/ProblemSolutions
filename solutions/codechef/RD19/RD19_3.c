// DATE: 03/03/2023, 07:41:14
// PROBLEM NAME: Minimum Deletions
// PROBLEM URL: https://www.codechef.com/problems/RD19
// PROBLEM DIFFICULTY RATTING: 1267
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int is_prime(int num){

    for (int i=2; i<num; i++){
        if (num%i == 0)
            return 0;
    }

    return 1;

}


int main(void) {
    int t, n, a, count, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0, flag = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (a == 1){
                flag = 1;
                count++;
            }
            
            else if (is_prime(a))
                count++;

        }
        
        if (flag)
            printf("0\n");
        else if (count >= 2)
            printf("%d\n", n - count);
        else
            printf("-1\n");
        
    }
    
	return 0;
}



