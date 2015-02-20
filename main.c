    #include <stdio.h>
    #include <stdlib.h>

    const int N=5;

    int main(int argc, char** argv) {
        int vet[N];
        int i;
        int numeroMaggiorenni;

        i=1;
        while(i<=5) {
        printf("Inserisci l' eta' della %da persona: ", i);
        scanf("%d", &vet[i-1]);   
        i=i+1;
        }
        i=0;
        numeroMaggiorenni=0;
        while(i<=5) {
            if(vet[i-1]>17) {
                numeroMaggiorenni=numeroMaggiorenni+1;
            }
            i=i+1;
        }
        printf("I maggiorenni sono: %d", numeroMaggiorenni);

        return (numeroMaggiorenni);
    }
