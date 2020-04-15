// C program for implementation of Bubble sort
#include <iostream>
// include my own linked list library
#include "../ll.h"

using namespace std;
 


// A function to implement bubble sort
void bubbleSort(LinkedList* arr)
{
   int i, j;
   int n = arr->length;
   for (i = 0; i < n-1; i++){
   	// Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) {
	   		if ( arr->dapat(j) > arr->dapat(j+1))
              arr->tukar(j, j+1); // Fungsi swap pada library
	   }
   }
}
 
 
// Driver program to test above functions
int main()
{
    LinkedList* arrl = new LinkedList();
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    arrl->tambah_banyak(arr, n);

    cout << "Array : \n";
	arrl->cetak();
	bubbleSort(arrl);
    
	cout << endl << "Sorted array: \n";
    arrl->cetak();
    return 0;
}
