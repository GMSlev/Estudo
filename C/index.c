#include <stdio.h>
#include <stdbool.h>



int main()
{
    /*
    Exercício 1.1: Cadastro Simples
    Declare variáveis para armazenar o nome, idade, altura e se uma pessoa possui carteira de motorista
    (  verdadeiro/falso). Atribua valores a elas e exiba no console de forma formatada.
    Exemplo de saída: "Nome: Ana, Idade: 25, Altura: 1.68m, CNH: true"
    */
    
    printf("====ENTRADA DE DADOS====");
    char nome[30] = "Ana Cleuza da Silva";
    float altura = 1.68;
    int idade;
    printf("\n Digite a sua idade: ");
    scanf("%i", &idade);
    
    printf("\n====SAIDA DE DADOS====");
    printf("\nNome: %s", nome);
    printf("\nIdade: %i", idade);
    printf("\nAltura: %.2f", altura);
    
    if(idade >= 18){
        printf("\nCNH:True");
    }else{
        printf("\nCNH: False");
    }
    
    /*
    Exercício 1.2: Troca de Valores
    Crie duas variáveis A = 5 e B = 10 . Faça a troca dos valores entre elas de modo que A passe a valer
    10 e B passe a valer 5 .
    Dica: Utilize uma terceira variável temporária para armazenar um dos valores durante a troca.
    */
    int A = 5;
    int B = 10;
    int C;

    C = A;
    A = B;
    B = C;

    printf("\nA: %d", A);
    printf("\nB: %d", B);


    
    
    /*
    Exercício 2.1: Cálculo de Compra e Troco
    Escreva um programa que receba o preço unitário de um produto e a quantidade comprada. Calcule o valor
    total da compra. Em seguida, receba o valor pago pelo cliente e calcule o troco a ser devolvido.
    */
    
    
    float preco;
    int quantidade;
    float valorPago;
    
    printf("\n\n====ENTRADA DE DADOS====");
    printf("\nDigite o preço do produto: ");
    scanf("%f", &preco);
    printf("\nDigite a quantidade da compra:");
    scanf("%i", &quantidade);
    
    printf("\n====SAIDA DE DADOS====");
    float compra = quantidade * preco;
    printf("\nValor total da compra: R$ %.2f", compra);
    
    printf("\nValor pago: R$");
    scanf("%f", &valorPago);
    
    float troco = compra - valorPago;
    printf("\nTroco: %.2f", troco);
    
    /*
    Crie um programa que determine se uma pessoa pode entrar em uma atração de parque de diversões. As
    regras requerem idade maior ou igual a 12 anos E altura maior ou igual a 1.40m. Exiba um resultado
    booleano ( true ou false ).
    */
    
    int idade;
    float altura;
    
    printf("\n====ENTRADA DE DADOS====");
    
    printf("\nDigite a idade: ");
    scanf("%i", &idade);
    
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    
    bool booleano = (idade >= 12) && (altura >= 1.40);
        printf("\nEntrada: %d", booleano);
    
    /*
    Exercício 3.1: Par ou Ímpar
    Leia um número inteiro e exiba se ele é Par ou Ímpar.
    Dica: Utilize o operador de resto da divisão ( % ).
    */
    
    int numero;
    
    printf("\n====ENTRADA DE DADOS====");
    
    printf("\nDigite um número inteiro: ");
    scanf("%i", &numero);
    if(numero%2){
        printf("\nImpar");
    }else{
        printf("\nPar");
    }
    
    /*
    Exercício 3.2: Classificação de Notas
    Receba a nota de um aluno (0 a 10) e informe a situação acadêmica:
    Nota ≥ 7.0: "Aprovado"
    Nota entre 5.0 e 6.9: "Recuperação"
    Nota < 5.0: "Reprovado"
    */
    
    float nota;
    
    printf("\n====ENTRADA DE DADOS====");
    
    printf("\nDigite a nota do aluno: ");
    scanf("%f", &nota);
    
    if(nota >=7 && nota <=10){
        printf("\nAprovado!!");
    }else if(nota >=5 && nota <=6.9){
        printf("\nRecuperação!!");
    }else if(nota <= 5 && nota >=0){
        printf("\nReprovado!!");
    }else{
        printf("\nNota inválida!");
    }
    
    /*
    Exercício 4.1: Dias da Semana
    Escreva um programa que receba um número de 1 a 7 e imprima o dia da semana correspondente (1 =
    Domingo, 2 = Segunda-feira, etc.). Trate o caso padrão ( default ) para entradas inválidas.
    */
    
    int diaDaSemana;
    printf("\nDigite um valor de 1 a 7:");
    scanf("%i", &diaDaSemana);
    switch(diaDaSemana){
        case 1:
            printf("Domingo");
        break;
        case 2:
            printf("Segunda-feira");
        break;
        case 3:
            printf("Terça-feira");
        break;
        case 4:
            printf("Quarta-feira");
        break;
        case 5:
            printf("Quinta-feira");
        break;
        case 6:
            printf("Sexta-feira");
        break;
        case 7:
            printf("Sábado");
        break;
        default:
            printf("Valor inválido!");
    }
    /*
    Receba dois números e um caractere representando uma operação matemática ( + , - , * , / ). Utilize a
    estrutura switch/case para executar e exibir o resultado da operação.
    */
    
        int valor1;
        int valor2;
        char operador;
        
        printf("\nDigite o primeiro valor: ");
        scanf("%d", &valor1);
        printf("\nDigite o segundo valor: ");
        scanf("%d", &valor2);
        
        printf("\nEscolha o operador aritmético para executar uma operação matemática: ");
        scanf(" %c", &operador);
        
        switch(operador){
            case '+':
                printf("Resultado: %d", valor1 + valor2);
                break;
            case '-':
                printf("Resultado: %d", valor1 - valor2);
                break;
            case '*':
                printf("Resultado: %d", valor1 * valor2);
                break;
            case '/':
                if (valor2 != 0) {
                    printf("Resultado: %.2f", valor1 / valor2);
                } else {
                    printf("Erro: divisão por zero!");
                }
                break;
            default:
                printf("Operador inválido!");
        }
    
    /*Solicite um número ao usuário e, utilizando o laço for , imprima a tabuada completa desse número (de 1 a
    10).
    */
    
    int numero;
    
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    
    for (int i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d", numero, i, numero * i);
    }
    

    /*Exercício 5.2: Soma de Números Pares
    Calcule e exiba a soma de todos os números pares no intervalo de 1 a 100 utilizando a estrutura for .*/
    
    int soma = 0;
    for (int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            soma +=i;
        }
    }
    printf("A soma dos números pares de 1 a 100 é: %d", soma);
    
    /*
    Exercício 6.1: Validação de Senha
    Faça um programa que solicite uma senha ao usuário. Enquanto a senha digitada for incorreta (ex: diferente
    de "1234" ), continue solicitando a senha e exibindo uma mensagem de alerta.
    */
    printf("\n\n===ENTRADA DE DADOS===");
    char senha[10];
    int tentativas = 3;
    do {
        printf("\nDigite a senha: ");
        scanf("%s", senha);

        if (strcmp(senha, "admin5678") != 0) {
            printf("Senha incorreta! Tente novamente.\n");
            tentativas--;
        } else {
            printf("Senha correta! Acesso concedido.\n");   
        }
        
    } while (strcmp(senha, "admin5678") != 0 && tentativas > 0);


    /*
    Exercício 6.2: Contagem Regressiva
    Crie um programa que realize uma contagem regressiva de 10 até 0 usando while e, ao final, imprima
    "Lançamento!".
    */
    
    int contador = 10;
    while (contador >= 0 ){
        printf("%d\n", contador);
        contador--;
        if(contador < 0){
            printf("Lançamento!");
        }
    }

    /*
    Exercício 7.1: Menu Interativo de Bando
    Construa um menu interativo com as opções: (1) Ver Saldo, (2)   Fazer Depósito, (3) Sair. O programa deve
    executar ao menos uma vez e continuar mostrando o menu até que o usuário escolha a opção 3.    
    */

    int opcao;
    float saldo = 0.0;
    do {
        printf("\n===Menu-Interativo===\n");
        printf("1. Ver Saldo");
        printf("\n2. Fazer Depósito");
        printf("\n3. Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);
    } while (opcao != 3);
        printf("Saindo do programa. Obrigado!\n");

    /*
        Exercício 7.2: Jogo de Adivinhação
    Defina um número secreto predeterminado. Peça para o usuário tentar adivinhar. O laço do while deve
    repetir até que o usuário acerte o número, informando uma mensagem de vitória ao final.
    */

        int numeroSecreto = 7;
        int tentativa = 3;
        int palpite;

        do {
            printf("\nDigite seu palpite (1 a 10): ");
            scanf("%d", &palpite);

            if (palpite == numeroSecreto) {
                printf("Parabéns! Você acertou o número secreto!\n");
                break;
            } else {
                printf("Número incorreto! Tente novamente.\n");
                tentativa--;
            }
        } while (tentativa > 0);
            printf("Fim do jogo! O número secreto era: %d\n", numeroSecreto);


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}