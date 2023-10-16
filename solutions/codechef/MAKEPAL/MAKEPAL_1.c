// DATE: 16/10/2023, 08:35:27
// PROBLEM NAME: Weird Palindrome Making
// PROBLEM URL: https://www.codechef.com/problems/MAKEPAL
// PROBLEM DIFFICULTY RATTING: 1486
// STATUS: accepted
// TIME: 0.02
// MEMORY: 2.2M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int arr[n];

        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        count = 0;

        for (int i=0; i<n; i++){
            if (arr[i]%2 != 0)
                count++;
        }

        printf("%d\n", count/2);

    }

	return 0;
}


