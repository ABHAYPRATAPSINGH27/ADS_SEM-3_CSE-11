// Merge Sort

#include <iostream>
using namespace std;
#define INF 999999

void mergesort(int A[], int p, int q, int r)
{
    int N1 = q - p - 1;
    int N2 = r - q;
    int L[N1 + 1], R[N2 + 2];
    int i, j, k;                                     // index variable i,j,k for left traverse ,right traverse and original array traverse 

    for (i = 0; i < N1; i++)
    {
        L[i] = A[p + i];
    }
    for (j = 0; j < N2; j++)
    {
        R[j] = A[q + j];
    }

    L[N2] = INF;
    R[N2] = INF;
    i = 0;
    j = 0;
    for (k = p; k < r; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(A, p, q);
        mergeSort(A, q + 1, r);
        mergesort(A, p, q, r);
    }
}

int main()
{
    int A[] = {10, 3, 12, 5, 8, 4};
    int n = 6;                                                   // sizeof(A) / sizeof(A[0])
    mergeSort(A, 0, n - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}