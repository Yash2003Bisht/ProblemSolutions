// DATE: 08/08/2023, 08:36:20
// PROBLEM NAME: The Largest Bouquet
// PROBLEM URL: https://www.codechef.com/problems/BOUQUET
// PROBLEM DIFFICULTY RATTING: 1423
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>
#define max(a, b)(a>b?a:b)
#define lld long long int

lld sum(lld* arr, int size){
    lld total = 0;

    for (int i=0; i<size; i++)
        total += arr[i];

    return total;
}

int main(void) {
    int t;
    lld maple[3], oak[3], poplar[3], max_value, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &maple[0], &maple[1], &maple[2]);
        scanf("%d%d%d", &oak[0], &oak[1], &oak[2]);
        scanf("%d%d%d", &poplar[0], &poplar[1], &poplar[2]);
        
        // get max b/w maple and oak leaves
        max_value = sum(maple, 3);
        temp = sum(oak, 3);
        max_value = max(max_value, temp);
        
        // get max b/w max_value and poplar leaves
        temp = sum(poplar, 3);
        max_value = max(max_value, temp);
        
        // get max b/w max_value and color of leaves
        // * green
        temp = maple[0] + oak[0] + poplar[0];
        max_value = max(max_value, temp);

        // * yelllow
        temp = maple[1] + oak[1] + poplar[1];
        max_value = max(max_value, temp);

        // * red
        temp = maple[2] + oak[2] + poplar[2];
        max_value = max(max_value, temp);

        if (max_value%2 == 0 && max_value != 0)
            printf("%lld\n", max_value-1);
        else
            printf("%lld\n", max_value);


    }
    
	return 0;
}



