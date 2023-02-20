// DATE: 31/01/2023, 08:55:18
// PROBLEM NAME: Swapping Chefs Way
// PROBLEM URL: https://www.codechef.com/problems/SWAPCW
// PROBLEM DIFFICULTY RATTING: 1238
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int arr_sorted(char arr[], int size){
    for (int i=0; i<size-1; i++){
        if (arr[i] > arr[i+1]) return 0;
    }
    return 1;
}

void swapSort(char arr[], int size){
    char temp[2];

    for (int i=0; i<size/2; i++){
        if (arr[i] > arr[size-1-i]){
            temp[0] = arr[i];
            arr[i] = arr[size-1-i];
            arr[size-1-i] = temp[0];
            
        }
    }
}

int main(void) {
    int t, n, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];

        scanf("%s", s);
        swapSort(s, n);
        flag = arr_sorted(s, n);
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



