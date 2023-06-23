// DATE: 23/06/2023, 08:01:01
// PROBLEM NAME: Transfusion Chain
// PROBLEM URL: https://www.codechef.com/problems/TRANCHAIN
// PROBLEM DIFFICULTY RATTING: 1214
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#include <string.h>
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, a, b, ab, o;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char blood[3];
        a = 0, b = 0, ab = 0, o = 0;

        for (int i=0; i<n; i++){
            scanf("%s", blood);

            if(!strcmp(blood, "A"))
                a++;
            else if(!strcmp(blood, "B"))
                b++;
            else if(!strcmp(blood, "AB"))
                ab++;
            else
                o++;
        }
        
        printf("%d\n", o + max(a+ab, b+ab));
        
    }
    
	return 0;
}



