// DATE: 20/05/2023, 07:41:06
// PROBLEM NAME: Chef Feeds Cats
// PROBLEM URL: https://www.codechef.com/problems/CATFEED
// PROBLEM DIFFICULTY RATTING: 1343
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int max(int *arr, int size){
    int _max = 0;
    for (int i=0; i<size; i++){
        if (_max < arr[i])
            _max = arr[i];
    }
    return _max;
}

int wrong_order(int _max, int *counter, int size){
    for (int i=0; i<size; i++){
        if (_max-counter[i] > 1)
            return 1;
    }
    return 0;
}

int main(void) {
    int t, n, m, max_value, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        int arr[m], counter[n];
        flag = 1;
        
        for (int i=0; i<n; i++)
            counter[i] = 0;

        for (int i=0; i<m; i++)
            scanf("%d\n", &arr[i]);
        
        for (int i=0; i<m; i++){
            counter[arr[i]-1]++;
            max_value = max(counter, n);
            
            if (wrong_order(max_value, counter, n)){
                flag = 0;
                break;
            }
            
        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



