#include <stdio.h>

int main()
{
    int mat[100][100];
    int N, M;
    scanf("%d %d", &N, &M);

    float sr_vrednost = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
            sr_vrednost += mat[i][j];
        }
    sr_vrednost /= (N * M);
    printf("Srednata vrednost e %f\n", sr_vrednost);

    int pogolemi = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (sr_vrednost < mat[i][j])
            {
                printf("%d ", mat[i][j]);
                pogolemi++;
            }
        }
    printf("\nPogolemi ima %d", pogolemi);

    return 0;
}