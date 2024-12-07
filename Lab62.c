#include <stdio.h>

int main()
{
    int mat1[100][100];
    int mat2[100][100];
    int N, M;
    scanf("%d %d", &N, &M);

    printf("Vnesi gi elementite na mat1\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &mat1[i][j]);

    printf("Vnesi gi elementite na mat2\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &mat2[i][j]);

    int takvi_elem = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (mat1[i][j] == mat2[i][j])
            {
                printf("[%d, %d] ", i, j);
                takvi_elem++;
            }
        }
    printf("\nTakvi elementi ima %d", takvi_elem);

    return 0;
}