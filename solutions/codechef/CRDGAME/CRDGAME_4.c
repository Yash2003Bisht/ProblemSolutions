// DATE: 19/12/2022, 06:18:52
// PROBLEM NAME: Chef and Card Game
// PROBLEM URL: https://www.codechef.com/problems/CRDGAME
// PROBLEM DIFFICULTY RATTING: 1125
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

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
        scanint(&n);
        a_points = 0;
        b_points = 0;

        for (int i=0; i<n; i++){
            scanint(&a);
            scanint(&b);
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



