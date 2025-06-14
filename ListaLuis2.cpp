
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main() {
    int vetor[50];
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    for(int i = 0; i < 50; i++) {
        vetor[i] = rand() % 101; // Gera valores de 0 a 100
    }

    int opcao = 3;
    cout << "Escolha uma opcao: \n";
    cout << "1-Ver o maior e menor valor do vetror:" << endl;
    cin >> opcao;
    switch (opcao){
        
        case 1:
    // Compara o maior e menor valor do vetor
    int maior = vetor[0];
    int menor = vetor[0];

    for(int i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

     for (int i = 1; i < 50; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
break;



    return 0;
}
}
