// QUESTION URL: https://www.hackerrank.com/challenges/halloween-sale/problem
// STATUS: Accepted

#include <stdio.h>

int main(){
    int p, d, m, s, count = 0;
    scanf("%d%d%d%d", &p, &d, &m, &s);
    
    while (s >= p){
        if (p-d > m){
            s -= p;
            p -= d;
        } else s -= m;

        count++;

    }
    
    printf("%d\n", count);
    
    return 0;
}
