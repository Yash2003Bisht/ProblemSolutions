// QUESTION URL: https://www.codechef.com/problems/DAILY
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int fact(int n){
    int value = 1;
    
    for (int i=1; i<=n; i++){
        value *= i;
    }
    
    return value;
    
}

int main(void) {
    int x, n, counter = 0;
    char s[55];
    scanf("%d%d", &x, &n);
    
    while(n--){
        scanf("%s", s);
        int a[9] = {0}, j = 8;
        
        for (int i=0; i<36; i++){
             if (s[i] == '0'){
                a[i/4]++;
             }
        }
        
        for (int i=36; i<54; i++){

            if (s[i] == '0'){
                a[j]++;
            }

            if (i%2 != 0) j--;

        } 
        
        // n! / (k! * (n – k)!)
        for (int i=0; i<9; i++){
            counter += fact(a[i]) / (fact(x) * fact(a[i] - x));   
        }
        
    }

    printf("%d\n", counter);
    
	return 0;
}



