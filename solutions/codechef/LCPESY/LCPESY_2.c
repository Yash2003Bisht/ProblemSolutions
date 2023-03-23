// DATE: 23/03/2023, 08:51:18
// PROBLEM NAME: Longest Common Pattern
// PROBLEM URL: https://www.codechef.com/problems/LCPESY
// PROBLEM DIFFICULTY RATTING: 1284
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>
#define min(a, b)(a>b?b:a)

void Counter(char arr[], int counter_arr[]){
    for (int i=0; arr[i] != '\0'; i++){
        if (arr[i] >= 'a' && arr[i] <= 'z')
            counter_arr[arr[i] - 97]++;
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
            counter_arr[arr[i] - 39]++;
        else
            counter_arr[arr[i] + 4]++;
    }
}

int main(void) {
    int t, count;
    scanf("%d", &t);
    
    while(t--){
        char a[10001], b[10001];
        int a_counter[62] = {0}, b_counter[62] = {0};
        scanf("%s", a);
        scanf("%s", b);
        count = 0;

        Counter(a, a_counter);
        Counter(b, b_counter);
        
        for (int i=0; i<62; i++)
            count += min(a_counter[i], b_counter[i]);
            
        printf("%d\n", count);
        
        
    }
    
	return 0;
}



