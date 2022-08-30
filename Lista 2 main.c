#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()

   {
    setlocale(LC_ALL,"Portuguese");
    int opcao = 99;
    while (opcao > 0)
    {
        printf("\nAluno:Joao Gabriel Perez Monteiro");
        printf("\nDigite o exercicio desejado:");
        printf("\n(Ao final digite 0 para encerrar)\n");
        scanf ("%d",&opcao);
        printf("\n");
       if (opcao == 1)
            ex1();
        else if (opcao == 2)
            ex2();
        else if (opcao == 3)
            ex3();
        else if (opcao == 4)
            ex4();
        else if (opcao == 5)
            ex5();
        else if (opcao == 6)
            ex6();
        else if (opcao == 7)
            ex7();
        else if (opcao == 8)
            ex8();
        else if (opcao == 9)
            ex9();
        else if (opcao == 10)
            ex10();
        printf("\n--------------\n");
    }
    return 0;
}

void ex1(){

{
    /* 1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar. */

    int num, par, impar;

    printf("Digite um numero:");
    scanf ("%d", &num);

    if (num % 2 == 0){
        printf("\nO numero %d é par", num);
    } 
    else {
        printf("\nO numero %d é impar", num);
    }
}
}

void ex2(){

    /* 2. Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da media do aluno, 
uma mensagem de "Aprovado", caso a media seja igual ou superior a 6, ou a mensagem "reprovado", caso 
contrario. */


     //declarar variaveis
   char nome[20];
   float n1, n2, n3, media;

   printf("Digite seu nome:");
   fgets(nome, 20, stdin);

   printf("\n Digite sua primeira nota:");
   scanf ("%f", &n1);

   printf("\n Digite sua segunda nota:");
   scanf ("%f", &n2);

   printf("\n Digite sua terceira nota:");
   scanf ("%f", &n3);

   media = (n1 + n2 + n3) / 3;


   if (media >= 6) {
    printf("\nParabens %s sua media foi: %f Aprovado", nome, media);
   }
   else {
    printf("%s, sua media foi: %f Reprovado", nome, media);
   }

}

void ex3(){
 /*3. Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso. */

    int temp;

    printf("\nInforme a temperatura da agua:");
    scanf ("%d", &temp);

    if( temp >= 100){
         printf("\nA agua esta em estado gasoso");
    }
   if(temp < 100 && temp > 0){
    printf("\nA agua esta em estado liquido");
}
   if(temp <= 0){
    printf("\nA agua esta em estado solido");
}   
    
}

void ex4(){
/* 4. Leia um valor X e se ele for menor que 0 avalie Y = x2+ 4. Se ele for maior que 0 avalie x3-3 e se ele for igual a 0 de 
uma mensagem de erro. */

int x;
int y;

printf("\nDigite um numero:");
scanf ("%d", &x);

if(x < 0){
    y = x * x + 4;
    printf("\nsendo X = %d, y = %d", x, y);
}

if (x > 0){
    y = x * x * x - 3;
    printf("\nSendo x = %d y = %d",x, y);
}
if (x == 0) {
    printf("\nERRO");
}

}

void ex5(){
   /* 5. Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor 
deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C.*/

int a, b, c, maior, menor, meio;

printf ("Digite um valor para A\n");
scanf ("%d ",&a);

printf ("Digite um valor para B\n");
scanf ("%d ",&b);

printf ("Digite um valor para C\n");
scanf ("%d ",&c);


if(a < b && a < c){
    menor = a;
   }
if(b < a && b < c){
     menor = b;
} 
if(a > b && a > c){
    menor = a;
   }
if(b > a && b > c){
     menor = b;
} 

printf(" \nA:%d \nB:%d \nC:%d", menor, meio, maior);

   
}

void ex6(){
   /* 6. Desenvolver um algoritmo que leia três números inteiros: X, Y, Z  e verifique se o número X é divisível por Y e por Z. 
O algoritmo deverá mostrar as possíveis mensagens:
- o número é divisível por Y e Z.
- o número é divisível por Y mas não por Z
- o número é divisível por Z mas não por Y.
- o número não é divisível nem Y nem por Z. */

int x, y, z;

printf("Digite tres numeros:\n");
scanf ("%d %d %d", &x, &y, &z);

if(x % y == 0 && x % z == 0){
    printf("o numero %d é divisivel por Y e Z", x, y, z);
}

if(x % y == 0 && x % z != 0){
    printf("o numero %d é divisivel por %d mas não por %d", x, y, z);
}

if(x % y != 0 && x % z == 0){
    printf("o numero %d é divisivel por %d mas não por %d",x, z, y);
}
else x % y != 0 && x % z != 0;{
    printf("o numero %d não é divisivel nem %d nem por %d", x, y, z);
}
   
}

void ex7(){
    /* 7. O numero 3025 possui a seguinte característica:
30 + 25 = 55
552= 3025
Fazer um algoritmo que dado um numero de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele 
possui ou não esta característica.*/

 int i,i2,i3,i4,i5, i6;
  i = 1000;

  while (i <=9999){  
    i2 = i / 10000;
    i3 = i % 10;
    i4 = (i / 1000) % 10;
    i5 = (i % 1000) / 10;
    i6 = (i % 1000) / 10;
    i++;

    if(i2 == i3 && i4 == i5){
      printf("Numero palindromo %d\n",i);
        }
      }    
}

void ex8(){
    /* 8. - ler um código do teclado e  mostrar o nome correspondente, de acordo com a lista : 
221 Bernardo 
211 Eustáquio 
311 Luiz 
312 Mário 
332 Artur*/

int codigo;

printf ("Digite o codigo:\n");
scanf ("%d", &codigo);

switch (codigo)
{
case 221:
    printf("Bernardo");
    break;

case 211:
    printf("Eustaquio");
    break;

case 311:
    printf("Luiz");
    break;

case 312:
    printf("Mario");
    break;

case 332:
    printf("Arthur");
    break;

default: printf("ERRO");
    break;
}
    
}

void ex9(){
    /* 9. Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. 
Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este e ou não palíndromo. */


 int i, sorteio, numSorte, acerto = 0;
  i = 1;

  srand(time(NULL));

  printf("Digite seus numeros da sorte:\n");
  while ( i <= 10 ) {

      sorteio = rand() % 2;

      scanf("%d", &numSorte);
      if (sorteio == numSorte)
        acerto = acerto + 1;

      i = i + 1;

    }

    printf("voce acertou %d vezes",acerto);
    
}

void ex10(){
    /* 10. Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do 
consumidor - residencial, comercial ou industrial. A regra para calcular a conta e:
•Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3gastos;
•Comercial: R$ 500,00 para os primeiros 80 m3gastos mais R$ 5,50 por m3gastos acima dos 80 m3;
•Industrial: R$ 800,00 para os primeiros 100 m3gastos mas R$ 8,00 por m3gastos acima dos 100 m3;
O algoritmo devera ler a conta do cliente,  seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos. 
Como resultado imprimir o valor a ser pago pelo mesmo. */


int i, n, sorteado;
    printf("Gerando 10 valores aleatórios:\n");
    srand(time(NULL));
    sorteado = rand() % 1000 + 1;
    printf("\n(dica %d)",sorteado);

    i = 1;
    while ( i <= 10) {

        printf("\ndigite seu numero da sorte");
        scanf("%d",&n);

        if (n < sorteado)
          printf("\ntente um numero maior");
        if (n > sorteado)
          printf("\ntente um numero menor");

        if ( n == sorteado)
            printf("\nvoce ganhou!");

        i = i + 1;
    }
 
}


