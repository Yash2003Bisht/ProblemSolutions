// DATE: 31/12/2022, 04:00:17
// PROBLEM NAME: Making a Meal
// PROBLEM URL: https://www.codechef.com/problems/CFMM
// PROBLEM DIFFICULTY RATTING: 1214
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[1001];
        int meal_counter[6] = {0}, min_value = 1000;
        
        while(n--){
            scanf("%s", s);

            for (int j=0; s[j] != '\0'; j++){
                if (s[j] == 'c') meal_counter[0]++;
                else if (s[j] == 'o') meal_counter[1]++;
                else if (s[j] == 'd') meal_counter[2]++;
                else if (s[j] == 'h') meal_counter[3]++;
                else if (s[j] == 'e') meal_counter[4]++;
                else if (s[j] == 'f') meal_counter[5]++;
            }

        }
        
        meal_counter[0] /= 2;
        meal_counter[4] /= 2;
        
        for (int i=0; i<6; i++){
            if (min_value > meal_counter[i]) min_value = meal_counter[i];
        }
        
        printf("%d\n", min_value);
        
    }

	return 0;
}



