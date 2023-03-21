// DATE: 21/03/2023, 08:04:40
// PROBLEM NAME: Matrix Game
// PROBLEM URL: https://www.codechef.com/problems/ICL1801
// PROBLEM DIFFICULTY RATTING: 1279
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int compare (const void* a, const void* b){
  return ( *(int*)b - *( int*)a );
}

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

int main(void) {
    int t, n, m, size, sum1, sum2;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        scanint(&m);

        size = n*m, sum1 = 0, sum2 = 0;
        int arr[size];
        
        for (int i=0; i<size; i++)
            scanint(&arr[i]);
        
        qsort(arr, size, sizeof(int), compare);

        for (int i=0; i<size; i++){
            if (i%2 == 0)
                sum1 += arr[i];
            else
                sum2 += arr[i];
        }

        if (sum1 > sum2)
            printf("Cyborg\n");
        else
            printf("Draw\n");

    }
    
	return 0;
}



