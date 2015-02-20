#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int Magg;
    int indice=0;
    int p=5;
    int Persone[5];
    int Max=18;
    
    
    Magg=0;
    
    
    while (indice < p){
       
        printf("Inserisci l' eta' di ogni persona: ");
        scanf("%d", &Persone[indice]);
       
        indice = indice + 1;
        
    }
    indice=0;
    while (indice < p){
        while (indice > Max){
            Magg++;
            indice++;
            }
       
            
       printf("I maggiorenni sono: %d", &Magg);
        }
    
    

    return (EXIT_SUCCESS);
}

