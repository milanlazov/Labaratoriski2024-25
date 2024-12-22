#include <stdio.h>

void f(int arr[], int n)
{
    int *start = arr;
    int *end = arr + n - 1;

    int pom;
    while (start < end)
    {
        pom = *start;
        *start = *end;
        *end = pom;
        start++;
        end--;
    }

    /*
    printf("\nNacin B, Prevrtenata niza e: ");
    for (int *p = arr; p < arr + n; p++)
        printf("%d ", *p);
        */
}

int main()
{
    int n;
    printf("Vnesi dolzina na niza: ");
    scanf("%d", &n);

    int arr[100];
    printf("Vnesi ja nizata: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    f(arr, n);
    printf("Nacin A, Prevrtena niza e: ");
    for (int *p = arr; p < arr + n; p++)
        printf("%d ", *p);

    return 0;
}