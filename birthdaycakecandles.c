#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++)
     {
        if (arr[i] > max) 
        {
            max = arr[i];
            count = 1;
        } 
        else if (arr[i] == max) 
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
