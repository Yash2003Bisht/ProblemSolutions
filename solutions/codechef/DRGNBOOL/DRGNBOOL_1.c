// DATE: 09/03/2023, 08:33:51
// PROBLEM NAME: Fierce Battles
// PROBLEM URL: https://www.codechef.com/problems/DRGNBOOL
// PROBLEM DIFFICULTY RATTING: 1271
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, m, chakra, power, level;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        int soint[100] = {0}, sofloat[100] = {0};
        chakra = 0;

        for (int i=0; i<n+m; i++){
            if (i < n){
                scanf("%d%d", &power, &level);
                soint[level - 1] += power;
            }
            
            else {
                scanf("%d%d", &power, &level);
                sofloat[level - 1] += power;
            }
        }
        
        for (int i=0; i<100; i++){
            if (soint[i] < sofloat[i])
                chakra += sofloat[i] - soint[i];
        }
        
        printf("%d\n", chakra);
        
    }
    
	return 0;
}


