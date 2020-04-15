/*selection Sort*/
#include <iostream>
#include <iomanip>
#include "../ll.h"
using namespace std;

int selectionsort (LinkedList*array)
{
	int i, j, kecil, temp;
	int size = array->length;
	for (i=0; i<size; i++)
	{
		kecil=i;
		for (j=i; j<size; j++)
		{
		 	if (array->dapat(kecil)>array->dapat(j))
		 	{
		 		kecil = j;
			}
		}
		array->tukar(i,kecil);
	}
}

int main()
{
	int NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
	LinkedList * arrl = new LinkedList();
	arrl->tambah_banyak(NumList, 8);

	cout<<"Data sebelum diurutkan: \n";
	arrl->cetak();

	cout<<"\n\n";
	selectionsort(arrl);
	
	cout<<"Data setelah diurutkan:\n";
	arrl->cetak();
	//<< endl<< endl
	cout << endl;
	
}
