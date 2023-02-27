// DATE: 27/02/2023, 09:43:37
// PROBLEM NAME: Easy Math
// PROBLEM URL: https://www.codechef.com/problems/RPD
// PROBLEM DIFFICULTY RATTING: 1133
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

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
    int t, n, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], counter[10000] = {0}, max_value = 0, k = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                counter[k] = a[i] * a[j];
                k++;
            }
        }

        for (int i=0; i<10000; i++){
            temp = digitSum(counter[i]);
            if (temp > max_value) max_value = temp;
        }
        
        printf("%d\n", max_value);

    }
    
	return 0;
}



