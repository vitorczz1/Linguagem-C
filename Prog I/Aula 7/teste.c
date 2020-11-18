#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,k1,k2;
    int linA,colA,linB,colB;
    printf("PRODUTO DE MATRIZES A X B \n \n");
    printf("Quantidade de linhas da Matriz A = ");
    scanf("%d",&linA);
    printf("Quantidade de colunas da Matriz A = ");
    scanf("%d",&colA);
    printf("Quantidade de linhas da Matriz B = ");
    scanf("%d",&linB);
    printf("Quantidade de colunas da Matriz B = ");
    scanf("%d",&colB);

    float A[linA][colA];
    float B[linB][colB];
    float C[linA][colB];
    float temp;

    if(colA!=linB)
    {
        printf("A multiplicacao nao pode ser realizada.\n");
        printf("A quantidade de colunas de A e diferente do numero de linhas de B.\n");
        return 0;
    }



    // Carregando matriz A
    printf(" \n CARREGAMENTO DA MATRIZ A \n \n");
    for(i=0;i<linA;i++)
    {
        for(j=0;j<colA;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%f",&A[i][j]);
        }
    }

    // Carregando matriz B
    printf(" \n CARREGAMENTO DA MATRIZ B \n \n");
    for(i=0;i<linB;i++)
    {
        for(j=0;j<colB;j++)
        {
            printf("B[%d][%d] = ",i+1,j+1);
            scanf("%f",&B[i][j]);
        }
    }

    // Imprimindo a matriz A

    printf("\n MATRIZ A \n \n");
    for(i=0;i<linA;i++)
    {
        for(j=0;j<colA;j++)
        {
            if(j!=(colA-1))
                printf("%.2f \t",A[i][j]);

            else
                printf("%.2f \n",A[i][j]);
        }
    }
    printf("\n \n");
    system("pause");

    // Imprimindo a matriz B

    printf("\n MATRIZ B \n \n");
    for(i=0;i<linB;i++)
    {
        for(j=0;j<colB;j++)
        {
            if(j!=(colB-1))
                printf("%.2f \t",B[i][j]);

            else
                printf("%.2f \n",B[i][j]);
        }
    }

    for(k1=0;k1<linA;k1++)
    {
        for(k2=0;k2<colB;k2++)
        {
            temp=0.0;
            for(i=0;i<colA;i++)
            {
                temp=temp+A[k1][i]*B[i][k2];
            }
            C[k1][k2]=temp;
        }
    }

    printf("\n \n");
    system("pause");

    printf("\n MATRIZ C = A x B \n \n");

    for(i=0;i<linA;i++)
    {
        for(j=0;j<colB;j++)
        {
            if(j!=(colB-1))
            {
                printf("%.2f \t",C[i][j]);
            }
            else
            {
                printf("%.2f \n",C[i][j]);
            }
        }
    }

    return 0;

}

