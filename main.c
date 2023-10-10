#include <stdio.h>

/* O Bubble Sort é um algoritmo de ordenação simples que funciona comparando repetidamente pares de elementos 
adjacentes em um array e trocando-os se estiverem na ordem errada. 

1 - Começa com o primeiro elemento do array e compara-o com o próximo elemento.
2 - Se o primeiro elemento for maior que o próximo elemento, os dois elementos são trocados.
3 - Esse processo de comparação e troca é repetido para cada par de elementos adjacentes no array, 
avançando de um extremo ao outro.
4 - Após a primeira passagem completa pelo array, o maior elemento estará na última posição.
5 - Em seguida, o processo é repetido para o subarray restante (todos os elementos, exceto o último) 
para colocar o segundo maior elemento em sua posição correta.
6 - O processo continua até que nenhum par de elementos precise ser trocado em uma passagem completa pelo array.
7 - O array está agora ordenado, com os elementos em ordem crescente (ou decrescente, dependendo da implementação). */

// Definindo o Bubble Sort
void bubbleSort (int lista[], int tamanho){
  for (int i = 0; i < tamanho; i++){ // Loop externo para passar por todos os elementos
    for (int j = 0; j < tamanho - i - 1; j++){ // Loop interno para passar por todos os elementos menos o último
      if(lista[j] > lista[j + 1]) { // Comparando elementos adjacentes e trocando se estiverem na ordem errada
        int temp = lista[j]; // Troca o elemento com o posterior
        lista[j] = lista[j + 1]; // Troca o elemento com o posterior
        lista[j + 1] = temp; // Troca o elemento com o posterior
      }
    }
  }
}

/* A busca binária é um algoritmo de busca eficiente que opera em arrays ordenados. 
Ela divide repetidamente o array pela metade e compara o elemento do meio com o valor desejado, 
ajustando o intervalo de busca de acordo com o resultado da comparação. 

Esse processo de divisão e conquista é repetido até que o elemento seja encontrado ou determinado como ausente.*/

// Definindo a busca binária
int buscaBinaria(int lista[], int tamanho, int numero) {
    int inicio = 0; // Índice inicial
    int fim = tamanho - 1; // Índice final

    // Loop enquanto a busca não estiver completa
    while (inicio <= fim) { // Continua enquanto o início for menor ou igual ao fim.
        int meio = (fim + inicio) / 2; // Calcula o índice do meio

        // Retorna o índice se o elemento for encontrado
        if (lista[meio] == numero)
            return meio; 

        if (lista[meio] < numero)
            inicio = meio + 1; // Busca na parte direita do vetor
        else
            fim = meio - 1; // Busca na parte esquerda do vetor
    }

    return -1; // O elemento não for encontrado
}

// Implementando na função principal
int main() { 
  int vetor[] = {4, 3, 5, 1, 2, 7, 6};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
  int alvo; // Elemento a ser buscado

  printf("Vetor original: ");
  for (int i = 0; i < tamanho; i++) { // Imprime o vetor original
       printf("%d ", vetor[i]);
  }
  printf("\n");

  bubbleSort(vetor, tamanho); // Ordena o vetor

  printf("Vetor ordenado: ");
  for (int i = 0; i < tamanho; i++) { // Imprime o vetor ordenado
      printf("%d ", vetor[i]);
  }
  printf("\n");

  printf("\nDigite o número que deseja procurar: ");
  scanf("%d", &alvo); // Lê o valor a ser procurado

  int indice = buscaBinaria(vetor, tamanho, alvo); // Chama a função de busca

  if (indice != -1) // Se o elemento for encontrado
      printf("Elemento encontrado no índice %d.\n", indice); 
  else
      printf("Elemento não encontrado.\n");

  return 0; // Finaliza o programa
}