# Algoritmo de Ordenação Bubble Sort e Busca Binária em linguagem C

Este repositório contém implementações de dois algoritmos fundamentais em ciência da computação: Bubble Sort e busca binária, em linguagem C. Abaixo, uma breve descrição de cada algoritmo e como eles funcionam.

### Bubble Sort
O Bubble Sort é um algoritmo de ordenação simples que compara repetidamente pares de elementos adjacentes em um array e os troca se estiverem fora de ordem. O processo é repetido até que nenhum par de elementos precise ser trocado.

```ruby
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
```

### Busca Binária
A busca binária é um algoritmo de busca eficiente que opera em arrays ordenados. Ela divide o array pela metade e compara o elemento do meio com o valor desejado, ajustando o intervalo de busca de acordo com o resultado da comparação. O processo é repetido até encontrar o elemento ou determinar que ele está ausente. 

```ruby
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
```
