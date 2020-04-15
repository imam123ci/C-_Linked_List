// C program for insertion sort
#include <stdio.h>
#include <math.h>
#include <iostream>
#include "../ll.h"

using namespace std;
int ct = 0;
/* Function to sort an array using insertion sort*/
void insertionSort(LinkedList * arr)
{
   int i, key, j;
   int n = arr->length;
   for (i = 1; i < n; i++)
   {
       key = arr->dapat(i);
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr->dapat(j) > key)
       {
           arr->ganti(arr->dapat(j), j+1);
           j = j-1;
           ct++;
       }
       arr->ganti(key,j+1);
   }
}
 
/* Driver program to test insertion sort */
int main()
{
    int arr[] = {1,1,1,3,56,67,45,56,2,2,1,2,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    LinkedList * arrl = new LinkedList();
    arrl->tambah_banyak(arr,n);

    cout << "Array sebelum sorting : " << endl;
    arrl->cetak();
	insertionSort(arrl);
    
    cout << endl << endl << "Array setelah sorting : " << endl;
    arrl->cetak();
    return 0;
}

