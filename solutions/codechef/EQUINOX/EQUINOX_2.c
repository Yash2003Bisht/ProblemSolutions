// DATE: 15/03/2023, 08:08:12
// PROBLEM NAME: Equinox Strings
// PROBLEM URL: https://www.codechef.com/problems/EQUINOX
// PROBLEM DIFFICULTY RATTING: 1272
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, flag;
    long long int a, b, sarthak_points, anuradha_points;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%lld%lld", &n, &a, &b);
        char s[n+1], match[] = "EQUINOX";
        sarthak_points = 0, anuradha_points = 0;
        
        while(n--){
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
            printf("SARTHAK\n");
        else if (sarthak_points < anuradha_points)
            printf("ANURADHA\n");
        else
            printf("DRAW\n");
    }
    
	return 0;
}



