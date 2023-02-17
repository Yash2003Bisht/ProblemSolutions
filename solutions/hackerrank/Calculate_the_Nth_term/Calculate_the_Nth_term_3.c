// QUESTION URL: https://www.hackerrank.com/challenges/recursion-in-c/problem
// STATUS: Accepted

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int sum;
  n -= 3;
  while(n--){
      sum = a + b + c;
      a = b;
      b = c;
      c = sum;
  }
  return sum;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
