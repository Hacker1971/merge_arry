#include <stdio.h>
void Print_Arry(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
}

void marge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while ((i < n) && (j < m))
    {
        if (arr1[i] < arr2[i])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        /* code */
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        /* code */
        arr3[k++] = arr2[j++];
    }
}
int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n + m];
    marge(arr1, n, arr2, m, arr3);
    Print_Arry(arr3, n + m);

    return 0;
}