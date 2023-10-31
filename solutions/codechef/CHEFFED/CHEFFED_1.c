// DATE: 31/10/2023, 09:46:51
// PROBLEM NAME: Chef and Numbers
// PROBLEM URL: https://www.codechef.com/problems/CHEFFED
// PROBLEM DIFFICULTY RATTING: 1477
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

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
    int n, count = 0, total, temp;
    scanf("%d", &n);

    for (int i=1; i<81; i++){
        total = n - (i + digitSum(i));

        if (digitSum(total) == i)
            count++;

    }

    printf("%d\n", count);

	return 0;
}



