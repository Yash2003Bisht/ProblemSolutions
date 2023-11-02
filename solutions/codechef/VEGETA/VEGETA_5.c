// DATE: 02/11/2023, 08:22:59
// PROBLEM NAME: Majin Vegeta
// PROBLEM URL: https://www.codechef.com/problems/VEGETA
// PROBLEM DIFFICULTY RATTING: 1477
// STATUS: accepted
// TIME: 0.08
// MEMORY: 9.2M

#include <stdio.h>
#define max_size 1000000

int isprime(int num){
    
    if (num == 1)
        return 0;
    else if (num <= 3)
        return 1;
    else if (num%2 == 0 || num%3 == 0)
        return 0;

    for (int i = 5; i*i <= num; i += 6) {
        if (num % i == 0 || num%(i+2) == 0)
            return 0;
    }

    return 1;
    
}

int main(void) {
    int t, n, m, count = 0, pre_compute[max_size] = {0}, prime_nums[max_size] = {0};
    scanf("%d", &t);

    for (int i=2; i<max_size; i++){
        if (isprime(i)){
            pre_compute[i]++;
            prime_nums[count] = i;
            count++;
        } else {
            for (int j=0; j<count; j++){
                if (i%prime_nums[j] == 0){
                    int num1 = prime_nums[j], num2 = i/num1;
                    if (num2%num1 == 0)
                        pre_compute[i] = pre_compute[num2];
                    else
                        pre_compute[i] = pre_compute[num1] + pre_compute[num2];
                    break;
                }
            }
        }
    }

    while(t--){
        scanf("%d%d", &n, &m);
        count = 0;

        for (int i=n; i<m; i++)
            count += pre_compute[i];

        printf("%d\n", count);

    }
    
	return 0;
}



