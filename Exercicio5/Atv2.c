/*Com o programa anterior, é possível dizer quais notas são iguais ou maiores que a média? Altere o
programa para que isso aconteça. Que estrutura de dados deve ser usada nesse caso?
Dica: usar 2 vetores de no máximo M posições, sendo n<M. Cada vetor armazena as notas de uma
disciplina na posição i, que vai de 0 a n-1, sendo n a quantidade de notas de cada disciplina. Declare
M como constante, a qual deve ser declarada com a diretiva de compilação #define, portanto antes
da main. Gere o programa exer5_prog2.c.*/

#include <stdio.h>
#define M 60

int media(int a)
{
   

    if (a > M)
    {
        printf("acima da media");
    }
    else if (a == M)
    {
       printf("na media");
    }
    else printf("abaixo da media"); 
    
}


int main()
{
    int num; 
    printf("programa para ler n notas de 2 materias:\n");

    printf("Digite a quantidade de notas a ser recebido: ");
    scanf("%d", &num);

    int nota1[num], nota2[num];

    for (int i = 0; i < num; i++)
    {
        printf("\nDigite a nota do aluno %d de lab.pc1 e pc1: ", i+1);
        scanf("%d %d", &nota1[i], &nota2[i]);

        while (nota1[i] < 0 || nota1[i] >100 || nota2[i] <0 || nota2[i] >100)
        {
            printf("\nDigite novamente o valor das notas: ");
            scanf("%d %d", &nota1[i], &nota2[i]);
        }
        
       printf("\nO aluno %d esta com a nota de lab.pc1 ", i+1);
       media(nota1[i]);
       printf(" e com a nota de pc1 ");
       media(nota2[i]);
       printf(".\n");
    }
    

}