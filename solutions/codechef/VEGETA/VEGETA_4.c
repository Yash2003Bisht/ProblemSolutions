// DATE: 02/11/2023, 09:00:45
// PROBLEM NAME: Majin Vegeta
// PROBLEM URL: https://www.codechef.com/problems/VEGETA
// PROBLEM DIFFICULTY RATTING: 1477
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define max_size 1000001

int main(void) {
    int t, n, m, count = 0, pre_compute[max_size] = {0};
    scanf("%d", &t);

    for (int i=2; i<max_size; i++){
        if (pre_compute[i] == 0){
            for (int j=i; j<max_size; j += i)
                pre_compute[j]++;
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



