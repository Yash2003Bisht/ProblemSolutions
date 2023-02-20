// DATE: 19/12/2022, 06:13:30
// PROBLEM NAME: Chef and Card Game
// PROBLEM URL: https://www.codechef.com/problems/CRDGAME
// PROBLEM DIFFICULTY RATTING: 1125
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.2M

#include <stdio.h>

int sum_digits(int num){
    int total = 0;

    while(num){
        total += num % 10;
        num /= 10;
    }

    return total;
}

int main(void) {
    int t, n, a, b, a_points, b_points;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        a_points = 0;
        b_points = 0;

        for (int i=0; i<n; i++){
            scanf("%d%d", &a, &b);
            a = sum_digits(a);
            b = sum_digits(b);
            if (a > b) a_points++;
            else if (a < b) b_points++;
            else a_points++, b_points++;
        }
        
        if (a_points < b_points) printf("%d %d\n", 1, b_points);
        else if (a_points > b_points) printf("%d %d\n", 0, a_points);
        else printf("%d %d\n", 2, a_points);

    }

	return 0;
}



