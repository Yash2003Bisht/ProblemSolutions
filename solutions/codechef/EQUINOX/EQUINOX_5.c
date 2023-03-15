// DATE: 15/03/2023, 08:03:06
// PROBLEM NAME: Equinox Strings
// PROBLEM URL: https://www.codechef.com/problems/EQUINOX
// PROBLEM DIFFICULTY RATTING: 1272
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t, n, a, b, flag, sarthak_points, anuradha_points;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &a, &b);
        char s[n+1], match[] = "EQUINOX";
        sarthak_points = 0, anuradha_points = 0;
        
        for (int i=0; i<n; i++){
            scanf("%s", s);
            flag = 0;

            for (int j=0; match[j] != '\0'; j++){
                if (s[0] == match[j]){
                    sarthak_points += a;
                    flag = 1;
                    break;
                }
            }
            
            if (!flag)
                anuradha_points += b;
            
        }
        
        if (sarthak_points > anuradha_points)
            printf("SARTHAK\N");
        else if (sarthak_points < anuradha_points)
            printf("ANURADHA\n");
        else
            printf("DRAW\n");
    }
    
	return 0;
}



