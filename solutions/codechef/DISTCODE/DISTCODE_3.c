// DATE: 25/01/2023, 07:52:10
// PROBLEM NAME: Distinct Codes
// PROBLEM URL: https://www.codechef.com/problems/DISTCODE
// PROBLEM DIFFICULTY RATTING: 1234
// STATUS: accepted
// TIME: 0.10
// MEMORY: 5.3M

#include <stdio.h>

int check_cc(char * country_code, char country_code_array[10001][3]){
    int i, flag = 0;
    for (i=0; country_code_array[i][0] != '\0'; i++){
        if (country_code[0] == country_code_array[i][0] && \
            country_code[1] == country_code_array[i][1]){
            flag = 1;
            break;
        }
    }
    
    if (!flag){
        country_code_array[i][0] = country_code[0];
        country_code_array[i][1] = country_code[1];
        return 1;
    }
    
    return 0;
    
}

int main(void) {
    int t, counter;
    char s[10001], cc[3];

    scanf("%d", &t);

    while(t--){
        scanf("%s", s);
        char cc_set[10001][3] = {{'\0'}};
        counter = 0;

        for (int i=0; s[i+1] != '\0'; i++){
            cc[0] = s[i];
            cc[1] = s[i+1];

            counter += check_cc(cc, cc_set);

        }

        printf("%d\n", counter);

    }

	return 0;
}



