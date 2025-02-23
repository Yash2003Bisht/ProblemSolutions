// DATE: 20/03/2023, 08:35:00
// PROBLEM NAME: Hard Sequence
// PROBLEM URL: https://www.codechef.com/problems/HRDSEQ
// PROBLEM DIFFICULTY RATTING: 1278
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t, n, temp, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int arr[n];
        arr[0] = 0, temp = 0, n--;

        for (int i=1; i<n; i++)
            arr[i] = -1;

        while(n--){
            flag = 1;
            temp++;
            for (int j=temp-1; j>=0; j--){
                if (arr[j] == arr[temp]){
                    arr[temp] = temp - (j+1);
                    flag = 0;
                    break;
                }
            }
            
            if (flag)
                arr[temp] = 0;
            
        }

        n = temp + 1, temp = 0;

        for (int i=0; i<n; i++){
            if (arr[n-1] == arr[i]){
                temp++;
            }
        }

        printf("%d\n", temp);
        
    }
    
	return 0;
}



