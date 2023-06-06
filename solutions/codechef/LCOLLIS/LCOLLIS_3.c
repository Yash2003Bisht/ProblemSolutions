// DATE: 06/06/2023, 07:30:43
// PROBLEM NAME: Collisions
// PROBLEM URL: https://www.codechef.com/problems/LCOLLIS
// PROBLEM DIFFICULTY RATTING: 1352
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int fact(int n){
    int value = 1;
    for (int i=1; i<=n; i++) value *= i;
    return value;
}

int main(void) {
    int t, n, m, count, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        char arr[n][m];
        count = 0;
        
        for (int i=0; i<n; i++)
            scanf("%s", arr[i]);


        int j=0;
        while (m--){
            temp = 0;
            for (int i=0; i<n; i++){
                if (arr[i][j] == '1')
                    temp++;
            }

            count += fact(temp) / (2 * fact(temp-2));

            j++;
        }

        printf("%d\n", count);

    }
    
	return 0;
}



