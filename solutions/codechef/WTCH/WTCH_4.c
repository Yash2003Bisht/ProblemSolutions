// DATE: 24/08/2023, 08:55:29
// PROBLEM NAME: The Nights Watch
// PROBLEM URL: https://www.codechef.com/problems/WTCH
// PROBLEM DIFFICULTY RATTING: 1441
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.9M

#include <stdio.h>

int count_char(char a, char *chr_arr){
    int count = 0;

    for (int i=0; chr_arr[i] != '\0'; i++){
        if (chr_arr[i] == a)
            count++;
    }

    return count;
}

int main(void) {
    int t, n, count1, count2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        
        if (n == 1)
            printf("1\n");
        else{
            count1 = count_char('1', s);

            for (int i=0; i<n-1; i++){
                if (s[i] == '0' && s[i+1] == '0'){
                    if (i == 0)
                        s[i] = '1';
                    else if (i == n-2)
                        s[n-1] = '1';
                    else if (s[i-1] == '0')
                        s[i] = '1';
                    else if (s[i+2] == '0')
                        s[i+1] = '1';
                }
            }

            count2 = count_char('1', s);
            printf("%d\n", count2 - count1);
        }

    }
    
	return 0;
}



