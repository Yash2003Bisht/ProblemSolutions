// DATE: 06/02/2024, 06:15:27
// PROBLEM NAME: Id and Ship
// PROBLEM URL: https://www.codechef.com/problems/FLOW010
// PROBLEM DIFFICULTY RATTING: 847
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t;
    char id;

    scanf("%d\n", &t);

    while(t--){
        scanf("%c\n", &id);

        if (id == 'B' || id == 'b')
            printf("BattleShip");
        else if (id == 'C' || id == 'c')
            printf("Cruiser");
        else if (id == 'D' || id == 'd')
            printf("Destroyer");
        else
            printf("Frigate");

        printf("\n");
        
    }

}



