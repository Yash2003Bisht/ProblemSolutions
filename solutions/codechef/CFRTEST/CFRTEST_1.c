// DATE: 18/10/2022, 06:36:00
// PROBLEM NAME: Devu and friendship testing
// PROBLEM URL: https://www.codechef.com/problems/CFRTEST
// PROBLEM DIFFICULTY RATTING: 1061
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int already_added(int start, int value, int arr[]){
    for (int i=0; i<start; i++){
        if (arr[i] == value){
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int t,n,a,counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        counter = 0;
        
        for (int i=0;  i<n; i++){
            scanf("%d", &a);
            if (!already_added(counter, a, arr)){
                arr[counter] = a;
                counter++;
            }
        }
        
        printf("%d\n", counter);
        
    }
    
	return 0;
}



