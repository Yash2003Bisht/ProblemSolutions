// DATE: 20/05/2023, 07:53:34
// PROBLEM NAME: Chef Feeds Cats
// PROBLEM URL: https://www.codechef.com/problems/CATFEED
// PROBLEM DIFFICULTY RATTING: 1343
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.4M

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
    int t, n, m, a, max_value, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        int counter[n];
        flag = 1;
        
        for (int i=0; i<n; i++)
            counter[i] = 0;

        for (int i=0; i<m; i++){
            scanf("%d", &a);

            if (flag){
                counter[a-1]++;
                max_value = max(counter, n);
                flag = wrong_order(max_value, counter, n) ? 0 : 1;
            }

        }
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



