#include <stdio.h>
int B[100];
void merge(int A[], int mid, int low, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high)
	{
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    int i,A[100],key,index,n;
	puts("enter the number of elements in the array");
	scanf("%d",&n);
	puts("enter elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	mergeSort(A,0,n);
	puts("sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",B[i]);
	}
	return 0;
}
