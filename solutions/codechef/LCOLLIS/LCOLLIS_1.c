// DATE: 06/06/2023, 07:33:16
// PROBLEM NAME: Collisions
// PROBLEM URL: https://www.codechef.com/problems/LCOLLIS
// PROBLEM DIFFICULTY RATTING: 1352
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int fact(int n){
    int value = 1;
    for (int i=1; i<=n; i++) value *= i;
    return value;
}

int main(void) {
    int t, n, m, count, temp, j;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        char arr[n][m];
        count = 0;
        
        for (int i=0; i<n; i++)
            scanf("%s", arr[i]);


        j=0;
        while (j < m){
            temp = 0;
            for (int i=0; i<n; i++)
                temp += arr[i][j] == '1' ? 1 : 0;

            count += fact(temp) / (2 * fact(temp-2));
            j++;
        }

        printf("%d\n", count);

    }
    
	return 0;
}



