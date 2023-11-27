// DATE: 27/11/2023, 09:16:52
// PROBLEM NAME: Sum OR Difference
// PROBLEM URL: https://www.codechef.com/problems/DIFFSUM
// PROBLEM DIFFICULTY RATTING: 749
// STATUS: accepted
// TIME: 0.00
// MEMORY: 3.6M

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
        printf("%d", n1-n2);
    else
        printf("%d", n1+n2);

	return 0;
}


