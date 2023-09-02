// DATE: 02/09/2023, 08:48:50
// PROBLEM NAME: Superheroes and villains
// PROBLEM URL: https://www.codechef.com/problems/SUPVIL
// PROBLEM DIFFICULTY RATTING: 1446
// STATUS: accepted
// TIME: 0.07
// MEMORY: 1.5M

#include <stdio.h>
#include <string.h>

int is_superhero(char *name){
    int size = strlen(name);
    if (name[size-1] == 'n' && name[size-2] == 'a' && name[size-3] == 'm')
        return 1;
    return 0;
}

int main(void) {
    int t, n, superheroes, villains, fight;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char name[16];
        superheroes = 0, villains = 0, fight = 1;

        for (int i=0; i<n; i++){
            scanf("%s", name);
            
            if (fight == 1){
                if (is_superhero(name))
                    superheroes++;
                else
                    villains++;

                if (superheroes - villains >= 2)
                    fight = 2;
                else if (villains - superheroes >= 3)
                    fight = 0;
            }
        }
        
        if (fight == 1)
            printf("draw\n");
        else if (fight == 2)
            printf("superheroes\n");
        else
            printf("villains\n");
        
    }
    
	return 0;
}



