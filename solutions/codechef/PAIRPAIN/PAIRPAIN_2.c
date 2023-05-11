// DATE: 11/05/2023, 07:52:52
// PROBLEM NAME: Pair Pain
// PROBLEM URL: https://www.codechef.com/problems/PAIRPAIN
// PROBLEM DIFFICULTY RATTING: 1327
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    long long ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long long int arr[n], count_1 = 0, count_2 = 0, i;

        for (i=0; i<n; i++)
            scanf("%lld", &arr[i]);
        
        for (i=0; i<n; i++){
            if (arr[i] == 1)
                count_1++;
            else if (arr[i] == 2)
                count_2++;
        }

        ans = count_1*(count_1-1)/2 + (n-count_1)*count_1 + count_2*(count_2-1)/2;
        printf("%lld\n", ans);

    }
    
	return 0;
}


