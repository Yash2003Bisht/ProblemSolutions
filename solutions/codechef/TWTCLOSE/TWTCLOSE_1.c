// DATE: 28/03/2023, 07:44:17
// PROBLEM NAME: Closing the Tweets
// PROBLEM URL: https://www.codechef.com/problems/TWTCLOSE
// PROBLEM DIFFICULTY RATTING: 1291
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>

int main(void) {
    int n, k, count = 0, temp;
    scanf("%d%d", &n, &k);

    char task[9];
    int arr[n];
    
    for (int i=0; i<n; i++)
        arr[i] = 0;
    
    while(k--){
        scanf("%s %d", task, &temp);
        count = 0;

        if (!strcmp(task, "CLICK"))
            arr[temp - 1] = arr[temp - 1] == 0 ? 1 : 0;
        else {
            for (int i=0; i<n; i++)
                arr[i] = 0;
        }
            
        for (int i=0; i<n; i++){
            if (arr[i] == 1)
                count++;
        }


        printf("%d\n", count);
        
    }
    
	return 0;
}



