// DATE: 21/07/2023, 10:54:52
// PROBLEM NAME: Card Swipe
// PROBLEM URL: https://www.codechef.com/problems/CARDSWIPE
// PROBLEM DIFFICULTY RATTING: 1172
// STATUS: accepted
// TIME: 0.09
// MEMORY: 5.3M

#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, a, max_people, temp_max;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int swipes_counter[n], swipes[n], max_people = 0, temp_max = 0;

        for(int i=0; i<n; i++){
            swipes_counter[i] = 0;
            scanf("%d", &swipes[i]);
        }

        for (int i=0; i<n; i++){
            if (!swipes_counter[swipes[i] - 1]){
                swipes_counter[swipes[i] - 1] = 1;
                temp_max++;
            } else{
                swipes_counter[swipes[i] - 1] = 0;
                temp_max--;
            }

            max_people = max(max_people, temp_max);

        }

        printf("%d\n", max_people);

    }

	return 0;
}


