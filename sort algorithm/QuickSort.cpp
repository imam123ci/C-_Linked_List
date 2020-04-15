/* C implementation QuickSort */
#include<stdio.h>
#include<iostream>
#include "../ll.h"
using namespace std;
 
// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (LinkedList* arr, int low, int high)
{
    int pivot = arr->dapat(high);    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr->dapat(j) <= pivot)
        {
            i++;    // increment index of smaller element
            arr->tukar(i,j);
            //swap(&arr[i], &arr[j]);
        }
    }
    arr->tukar(i+1, high);
    //swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(LinkedList * arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    LinkedList *arrl = new LinkedList();
    arrl->tambah_banyak(arr,n);   
    cout << "Array : ";
    arrl->cetak();
	quickSort(arrl, 0, arrl->length - 1);
    
	cout << "\nSorted array: ";
    arrl->cetak();
	return 0;
}
