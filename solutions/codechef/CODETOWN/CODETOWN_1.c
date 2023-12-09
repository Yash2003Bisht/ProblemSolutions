// DATE: 09/12/2023, 08:26:50
// PROBLEM NAME: Reach Codetown
// PROBLEM URL: https://www.codechef.com/problems/CODETOWN
// PROBLEM DIFFICULTY RATTING: 1022
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int is_vowel(char s){
    char vowels[6] =  "AEIOU";

    for (int i=0; vowels[i] != '\0'; i++){
        if (vowels[i] == s)
            return 1;
    }

    return 0;

}

int main(void) {
    int t, reach;
    char town1[9], town2[9] = "CODETOWN";
    scanf("%d", &t);

    while(t--){
        scanf("%s", town1);
        reach = 1;

        for (int i=0; i<8; i++){
            if (is_vowel(town1[i]) != is_vowel(town2[i])){
                reach = 0;
                break;
            }
        }

        if (reach)
            printf("YES\n");
        else
            printf("NO\n");

    }

	return 0;
}



