// QUESTION URL: https://www.codechef.com/problems/CHEFCBA
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

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
    int arr[4];
    
    for (int i=0; i<4; i++)
        scanf("%d", &arr[i]);
        
    // sort the array
    quick_sort(arr, 0, 3);

    
    if ((double) arr[0]/arr[1] == (double) arr[2]/arr[3]) printf("Possible");
    else printf("Impossible");
    
    
	return 0;
}



