#include <stdio.h>

/*Questão 01 — Monitoramento de Temperatura Agrícola

Uma estufa inteligente registra a temperatura ambiente a cada 3 horas, totalizando 8 medições diárias
armazenadas em um vetor. Para evitar danos às culturas, a equipe técnica precisa identificar dias com
variações críticas.

Requisitos do Programa:
Crie uma função float calcularMedia(float temps[], int tam) para retornar a média diária.
Crie uma função int contarAcima(float temps[], int tam, float limite) para retornar quantos
registros superaram um limite fornecido.
No main , leia os 8 valores, exiba a média e avise se mais de 3 medições ficaram acima de 35.0°C.*/
float calcularMedia(float temps[], int tam){
    float soma = 0;
    for(int i = 0; i < tam; i++){
        soma += temps[i];
    }
    return soma / tam;
}

int contarAcima(float temps[], int tam, float limite){
    int contador = 0;
    for(int i = 0; i < limite; i++){
        if(temps[i] > limite){
            contador++;
        }
    }
    return contador;
}
int main(){
     float temps[8];
     for(int i = 0; i < 8; i++){
        printf("Temperatura: ", i + 1);
        scanf("%f", &temps[i]);
     }
     
     printf("Média diária: %.2f\n", calcularMedia(temps, 8));

     if(contarAcima(temps, 8, 35.0) > 3){
        printf("ALERTA! Mais de 3 medições acima de 35.0 Cº!\n");
     }

    return 0;
}

/*Questão 02 — Controle de Estoque Logístico

Um centro de distribuição armazena a quantidade de unidades de 10 produtos em um vetor. Quando um pedido
chega, é necessário verificar rapidamente se o produto solicitado tem estoque e em qual posição do vetor ele
se encontra.

Requisitos do Programa:
Escreva a função int buscarProduto(int estoque[], int tam, int codigo) que recebe o código
(índice do produto de 0 a 9) e retorna a quantidade disponível. Se o código for inválido, retorne -1 .
Escreva a função int verificarBaixoEstoque(int estoque[], int tam, int limiteMinimo) que
retorna a quantidade de produtos com estoque abaixo do limite.
*/
int buscarProduto(int estoque[], int tam, int codigo){
  if(codigo < 0 || codigo >= tam){
    return -1;
  }
  return estoque[codigo];
}

int verificarBaixoEstoque( int estoque[], int tam, int limite){
    int contador = 0;
    for(int i = 0; i < tam; i++){
        if(estoque[i] < limite){
            contador++;
        }
    }
    return contador;
}

int main(){

    int estoque[10];
    int tam = 10;
    int codigo = 9;

    for(int i = 0; i < tam; i++){
        printf("Digite o código do produto %d:", i + 1);
        scanf("%d", &estoque[i]);
    }
    int posicao = buscarProduto(estoque, tam, codigo);
    if(posicao != -1){
        printf("O produto possui %d\n", posicao);
    } else {
        printf("O produto não foi encontrado\n");
    }
    int baixoEstoque = verificarBaixoEstoque(estoque, tam, 10);
    printf("O número de produtos com estoque abaixo do limite é: %d\n", baixoEstoque);
}


/*
Questão 03 — Análise de Desempenho de Atletas Maior/Menor Valor
    Em uma competição de natação, os tempos de um atleta em 6 voltas são anotados em um vetor de números
    reais. O treinador deseja eliminar o pior e o melhor tempo para calcular a constância do atleta.
Requisitos do Programa:
Crie a função float obterMaiorTempo(float tempos[], int tam) que identifique o tempo mais lento.
Crie a função float obterMenorTempo(float tempos[], int tam) que retorne o tempo mais rápido.
No programa principal, leia os tempos e exiba a amplitude entre o melhor e o pior tempo (diferença entre maior e
menor)*/

float obterMaiorTempo( float tempos[], int tam){

    float maior = tempos[0];
    for(int i = 0; i < tam; i++){
        if(maior < tempos[i]){
            maior = tempos[i];
        }

    }
    return maior;
}

float obterMenorTempo(float tempos[], int tam){

    float menor = tempos[0];
    for (int i = 0; i < tam; i++){
        if(menor > tempos[0]){
            menor = tempos[i];
        }
    }
    return menor;
    
}

int main(){
    float tempos[6];
    int tam = 6;


    for(int i = 0; i < tam; i++){
        printf("Tempo de volta: %d", i +1);
        sacnf("%f", tempos[i]);
    }

    float maiorTempo = obterMaiorTempo(tempos, tam);
    float menorTempo = obterMenorTempo(tempos, tam);

    printf("Pior tempo: %.2f\n", maiorTempo);
    printf("Melhor tempo: %.2f\n", menorTempo);
    printf("Amplitude: %.2f", maiorTempo - menorTempo);

    return 0;

}