#include <stdio.h>

// nizata da bide float
void f(int arr[], int n)
{
    float sr_vrednost = 0;
    int *start = arr;
    int *boundary = arr + (3 - 1);
    while (start < arr + n)
    {
        sr_vrednost += *start;
        
        if (start == boundary)
        {
            for (int *p = start; p > boundary - 3; p--)
                *p = sr_vrednost / 3;
            sr_vrednost = 0;
            boundary += 3;
        }

        else if (start == arr + (n - 1))
        {
            for (int *p = start; p > boundary - 3; p--)
                *p = sr_vrednost / (n % 3);
        }

        start++;
    }
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

    printf("Niza na pocetok: ");
    for (int *p = arr; p < arr + n; p++)
        printf("%d ", *p);

    f(arr, n);
    printf("\nNiza po transformacija: ");
    for (int *p = arr; p < arr + n; p++)
        printf("%d ", *p);

    return 0;
}