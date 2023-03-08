// DATE: 08/03/2023, 03:13:26
// PROBLEM NAME: Helping Lira
// PROBLEM URL: https://www.codechef.com/problems/HELPLIRA
// PROBLEM DIFFICULTY RATTING: 1270
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>
#include <math.h>

int get_min_index(int arr[], int size){
    int min_area = INT_MAX, index;
    
    for (int i=0; i<size; i++){
        if (min_area >= arr[i]){
            index = i+1;
            min_area = arr[i];
        }
    }
    
    return index;

}

int get_max_index(int arr[], int size){
    int max_area = INT_MIN, index;
    
    for (int i=0; i<size; i++){
        if (max_area <= arr[i]){
            index = i+1;
            max_area = arr[i];
        }
    }
    
    return index;
    
}

int main(void) {
    int n, x1, y1, x2, y2, x3, y3, min_index, max_index, area;
    scanf("%d", &n);
    int areas[n], index = 0;
    
    while(n--){
        scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
        area = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))*0.5;
        areas[index] = area;
        index++;
    }
    
    min_index = get_min_index(areas, index);
    max_index = get_max_index(areas, index);
    
    printf("%d %d\n", min_index, max_index);
    
	return 0;
}



