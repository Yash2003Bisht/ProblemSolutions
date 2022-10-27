// QUESTION URL: https://www.codechef.com/problems/FINALSUM

#include <stdio.h>
#include <stdlib.h>

void change_arr(int start_index, int end_index, int array[]){
    int add = 1;
    for (int i=start_index; i<=end_index; i++){
        if (add){
            array[i-1]++;
            add = 0;
        } else{
            array[i-1]--;
            add = 1;
        }
    }
}

int sum(int array[], int size){
    int total=0;
    for (int i=0; i<size; i++)
        total += array[i];
        
    return total;
}

int main(void) {
    int t, n, q, l, r, *arr;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &q);
        arr = (int *) malloc(n*sizeof(int));
        
        for (int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        for (int i=0; i<q; i++){
            scanf("%d%d", &l, &r);
            change_arr(l, r, arr);
        }
        
        printf("%d\n", sum(arr, n));
        
    }
	return 0;
}



