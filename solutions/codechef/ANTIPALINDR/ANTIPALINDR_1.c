// DATE: 12/10/2023, 08:29:18
// PROBLEM NAME: Anti Palindrome
// PROBLEM URL: https://www.codechef.com/problems/ANTIPALINDR
// PROBLEM DIFFICULTY RATTING: 1488
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int is_palindrome_by_char(char *s, int size){
    int counter[26] = {0}, odd = 0, even = 0;

    for (int i=0; i<size; i++)
        counter[s[i] - 97]++;

    for (int i=0; i<26; i++){
        if (counter[i]){
            if (counter[i] == size)
                return size;
            else if (counter[i]%2 == 0)
                even++;
            else
                odd++;
        }
    }

    if (even && (!odd || odd == 1))
        return 1;

    return 0;

}

int main(void) {
    int t, n, count;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);

        count = is_palindrome_by_char(s, n);

        if (count){
            if (count != n || count%2 == 0)
                printf("1\n");
            else
                printf("2\n");
        } else {
            printf("0\n");
        }

    }

	return 0;
}


