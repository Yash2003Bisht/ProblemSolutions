// DATE: 01/08/2023, 08:29:57
// PROBLEM NAME: Maximize Colours
// PROBLEM URL: https://www.codechef.com/problems/COLOUR
// PROBLEM DIFFICULTY RATTING: 1415
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.9M

#include <stdio.h>

int cmpfunc(const void * a, const void * b){
   return ( *(int*)b - *(int*)a );
}

int main(void) {
    int t, arr[3], total;
    scanf("%d", &t);

    while(t--){
        total = 0;

        for (int i=0; i<3; i++){
            scanf("%d", &arr[i]);
            
            if (arr[i] > 0){
                total++;
                arr[i]--;
            }
       
        }
        
        qsort(arr, 3, sizeof(int), cmpfunc);
        
        if (arr[0] > 0 && arr[1] > 0){
            total++;
            arr[0]--, arr[1]--;
        }
        
        if (arr[0] > 0 && arr[2] > 0){
            total++;
            arr[0]--, arr[2]--;
        }
        
        if (arr[1] > 0 && arr[2] > 0){
            total++;
            arr[1]--, arr[2];
        }
        
        printf("%d\n", total);

    }
    
	return 0;
}



