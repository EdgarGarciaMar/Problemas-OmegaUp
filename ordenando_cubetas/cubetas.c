#include <stdio.h>
#include <stdlib.h>

void merge(short arr[], short l, short m, short r)
{
    short i, j, k;
    short n1 = m - l + 1;
    short n2 = r - m;

    /* create temp arrays */
    short L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(short arr[], short l, short r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        short m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    short n, m, i, x;
    scanf("%hd", &n);
    scanf("%hd", &m);

    short arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%hd", &x);
        arr[i] = x;
    }

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);

    short count = 0;
    short p_m = 1;
    while (p_m <= m)
    {
        for (i = 0; i < n; i++)
        {
            if (p_m == arr[i])
            {
                count += 1;
            }
        }

        printf("%hd: %hd\n", p_m, count);
        p_m += 1;
        count = 0;
    }

    return 0;
}