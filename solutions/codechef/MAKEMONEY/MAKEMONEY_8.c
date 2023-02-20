// DATE: 09/12/2022, 07:35:06
// PROBLEM NAME: Make Money
// PROBLEM URL: https://www.codechef.com/problems/MAKEMONEY
// PROBLEM DIFFICULTY RATTING: 1101
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int sum(int arr[], int size){
    int total = 0;
    
    for (int i=0; i<size; i++){
        total += arr[i];
    }
    
    return total;
    
}

int partition(int arr[], int low, int high){
    int p = arr[high], index = low - 1, i, temp;

    for (i=low; i<high; i++){
        if (arr[i] < p){
            index++;
            temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }

    // final swap for highest value
    index++;
    temp = arr[index];
    arr[index] = arr[high];
    arr[high] = temp;

    return index;
}


int quick_sort(int arr[], int low, int high){
    // base case
    if (low < high){
        int index = partition(arr, low, high);

        // recursive call
        quick_sort(arr, index+1, high); // right side
        quick_sort(arr, low, index-1); // left side
    }
}


int main(void) {
    int t, n, x, c, temp, deducted, counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &x, &c);
        int a[n];
        
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);

        quick_sort(a, 0, n-1);
        
        counter = sum(a, n);
        deducted = 1;

        for(int i=0; i<n; i++){
            if (a[i] < x){
                a[i] = x;
                temp = sum(a, n) - c*deducted;
                
                if (temp > counter)
                    counter = temp;
                
                deducted++;
            }
        }
        
        printf("%d\n", counter);
        
    }
    
	return 0;
}


