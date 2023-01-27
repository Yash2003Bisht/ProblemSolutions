// QUESTION URL: https://www.hackerrank.com/challenges/minimum-distances/problem
// STATUS: Accepted

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n], min_value = 100001, temp;

    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i] == a[j]){
                temp = j - i;
                min_value = min_value > temp ? temp : min_value;
            }
        }
    }
    
    if (min_value == 100001)
        printf("-1\n");
    else
        printf("%d\n", min_value);
    
    return 0;
}
