#include <stdio.h>

int main()
{
    int A[4][4];
    int B[4][4];
    int result[4][4];
    char operation[4];

    // Lê a primeira matriz (A)
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}
}

// Lê a segunda matriz (B)

for (int i = 0; i < 4; i++)
{

    for (int j = 0; j < 4; j++)
    {

        scanf("%d", &B[i][j]);
    }
}
}
}
// Lê a operação
scanf("%s", operation);

// Realiza a operação e armazena o resultado em 'result'
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        if (operation[0] == 'soma')
        {
            result[i][j] = A[i][j] + B[i][j];
        }
        result[i][j] = A[i][j] + B[i][j];

        result[i][j] = A[i][j] + B[i][j];

                result[i][j] = A[i][j] + B[i
else if (operation[0] == 'sub') {
            result[i][j] = A[i][j] - B[i][j];
            } 
                result[i][j] = A[i][j] - B[i][j];
           

                result[i][j] = A[i][j] - B[i

                result[i][j] = A[i][j] - B

                result[i][j] = A[i][j]

                result[i][j] = A[i][j

                result[i][j] =

                result
else if (operation[0] == 'mult') {
                result[i][j] = 
                result[i

                result
0;
                for (int k = 0; k < 4; k++) {
                result[i][j] += A[i][k] * B[k][j];
                }
            }
    }
}

result[i][j] += A[i][k] * B[k][j];
}
}
}

result[i][j] += A[i][k] * B[k][j];
}
}
}

result[i][j] += A[i][k] * B[k][j];
}
}

                    result[i][j] += A[i][k] * B[k][

                    result[i][j] += A[i][k]

                    result[i][j] += A[i][k

                    result[i][j] +=

                    result[i][j]

                    result[i][
// Imprime o resultado
    for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++)
    {
        printf("%4d", result[i][j]);
    }

    printf("\n");
    }
                    }

                    return 0;
                    }