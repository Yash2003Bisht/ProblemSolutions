// QUESTION URL: https://www.codechef.com/problems/CARTRIP

#include <stdio.h>

int main(){
    int t, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        int cost = x<=300?3000:x*10;
        printf("%d\n", cost);
    }
    return 0;
}

