// DATE: 27/10/2023, 09:05:28
// PROBLEM NAME: Digital clock
// PROBLEM URL: https://www.codechef.com/problems/ONOZ
// PROBLEM DIFFICULTY RATTING: 1482
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int is_indentical_num(int num){
    if (num < 10)
        return 1;
    else{
        if ((num/10 )== (num%10))
            return 1;
        else
            return 0;
    }
}

int main(void) {
    int t, h, m, count, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &h, &m);
        count = 1;

        for (int i=1; i<h; i++){
            if (is_indentical_num(i)){
                temp = i % 10;

                while (m > temp){
                    count++;
                    temp = (temp * 10) + (i % 10);
                }
            }

        }

        printf("%d\n", count);

    }
    
	return 0;
}



