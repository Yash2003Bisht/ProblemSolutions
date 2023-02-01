// QUESTION URL: https://www.hackerrank.com/challenges/halloween-sale/problem
// STATUS: Terminated due to timeout

#include <stdio.h>

int main(){
    int p, d, m, s, count = 0;
    scanf("%d%d%d%d", &p, &d, &m, &s);
    
    while (s >= p){
        count++;
        s -= p;
        if (p >= m)
            p -= d;
    }
    
    printf("%d\n", count-1);
    
    return 0;
}
