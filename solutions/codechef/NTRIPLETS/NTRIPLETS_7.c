// DATE: 12/08/2023, 08:39:30
// PROBLEM NAME: N Triplets
// PROBLEM URL: https://www.codechef.com/problems/NTRIPLETS
// PROBLEM DIFFICULTY RATTING: 1426
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.8M

#include <stdio.h>
#include <math.h>
#define lli long long

// int is_prime(lli num){
//     lli count = sqrt(num);

//     for (lli i=2; i<=count; i++){
//         if (num%i == 0)
//             return 0;
//     }

//     return 1;
// }

// int square_root(lli num){
//     lli count = sqrt(num);
    
//     if (num == count*count)
//         return 1;

//     return 0;
// }

// lli lowest_divisor(lli num){
//     lli count = sqrt(num);
//     for (lli i=2; i<count; i++){
//         if (num%i == 0)
//             return i;
//     }
// }

int main(void) {
    int t, flag;
    lli n, d;
    scanf("%d", &t);

    while(t--){
        scanf("%lli", &n);
        flag = 0;
        
        for (int i=2; i<sqrt(n); i++){
            if (n%i == 0){
                printf("1 %lli %lli\n", i, n/i);
                flag = 1;
                break;
            }
        }
        
        if (!flag)
            printf("-1\n");

        // if (is_prime(n) || square_root(n))
        //     printf("-1\n");
        // else{
        //     d = lowest_divisor(n);
        //     printf("1 %lli %lli\n", d, n/d);
        // }

    }

	return 0;
}



