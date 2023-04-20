// DATE: 20/04/2023, 07:03:43
// PROBLEM NAME: Villages and Tribes
// PROBLEM URL: https://www.codechef.com/problems/VILTRIBE
// PROBLEM DIFFICULTY RATTING: 1318
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b, temp;
    char s[1000001], flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", s);
        a = 0, b = 0, temp = 0;
        flag = 'C';

        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == 'A'){
                a += (flag == 'A' ? temp : 0) + 1;
                temp = 0;
                flag = 'A';
            } else if (s[i] == 'B'){
                b += (flag == 'B' ? temp : 0) + 1;
                temp = 0;
                flag = 'B';
            } else
                temp++;
        }
        
        printf("%d %d\n", a, b);
        
    }
    
	return 0;
}



