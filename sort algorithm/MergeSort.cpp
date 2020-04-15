#include<iostream>
#include "../ll.h"

using namespace std;
 
void merge(LinkedList * arr, int start, int middle, int end)
{
   int i, j, k;
    int n1 = middle - start + 1;
    int n2 =  end - middle;
    LinkedList *Ll = new LinkedList();
    Ll->isi(0, (arr->length/2)+10);
    LinkedList *Rl = new LinkedList();
    Rl->isi(0, (arr->length/2)+10);
 
    for (i = 0; i < n1; i++)
        Ll->ganti(arr->dapat(start + i),i);
    for (j = 0; j < n2; j++)
    	Rl->ganti(arr->dapat(middle + 1+ j),j);
 
    i = 0;
    j = 0;
    k = start;
    while (i < n1 && j < n2)
    {
	    if(Ll->dapat(i) <= Rl->dapat(j))
        {
	        arr->ganti(Ll->dapat(i),k);
	        i++;
	    }
	    else
	    {
	        arr->ganti(Rl->dapat(j), k);
	        j++;
	    }
	    k++;
    }
 
    while (i < n1)
    {
        arr->ganti(Ll->dapat(i),k);
	    i++;
	    k++;
    }
 
    while (j < n2)
    {
        arr->ganti(Rl->dapat(j),k);
	    j++;
	    k++;
    }
}
 
void mergeSort(LinkedList *arr,int end, int start)
{
    if (start < end)
    {
	    int middle =start+(end-start)/2;
	 
	    mergeSort(arr, middle, start);
	    mergeSort(arr, end, middle+1);
	 
	    merge(arr, start, middle, end);
    }
}
 
 
int main()
{
    int array[50],n;
    LinkedList *arrl = new LinkedList();
    // I don't change input method
    // if you wamt to change use this    
    /*
    int in;
    while(in != -1){
        cin >> in;
        arrl ->tambah_belakang(in)
    }
    */

    cout<<"Enter the number of elements (MAX 50): "; cin>>n;
 
    for(int i=0;i<n;i++) { 
		cin>>array[i];
    } 
    
    arrl->tambah_banyak(array,n);
    arrl->cetak();
    mergeSort(arrl,n-1,0);
 
    cout<<"\n Array after sorting : ";
    arrl->cetak();
    //for(int i=0;i<n;i++)
	//	cout<<array[i]<<" ";
 
 
}
