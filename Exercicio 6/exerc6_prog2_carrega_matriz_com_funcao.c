/*Agora refaça o programa anterior para que a matriz seja preenchida com números aleatórios da
mesma forma, mas por meio de uma função. Assim, a matriz sem dados deve ser passada com
parâmetro para a função, a qual se encarregará de fazer o seu preenchimento. A função deve ser
declarada com um protótipo e depois definida completamente após a main(). Nomeie o programa
com exerc6_prog2_carrega_matriz_com_funcao.c*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 3
#define N 5

int preeche_matriz(int mat[M][N], int M, int N);

int main()
{
    int num[M][N];
    srand( time(NULL));

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            num[i][j]=rand()%100;

            printf("%d ", num[i][j]);
        }

        printf("\n");
        
    }
    
}

int preeche_matriz(int mat[M][N], int M, int N)
{
    
}