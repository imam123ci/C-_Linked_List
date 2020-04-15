/*selection Sort*/
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int selectionsort (int array[], const int size)
{
	int i, j, kecil, temp;
	for (i=0; i<size; i++)
	{
		kecil=i;
		for (j=i; j<size; j++)
		{
		 	if (array[kecil]>array[j])
		 	{
		 		kecil = j;
			}
		}
		temp = array [i];
		array[i] = array[kecil];
		array[kecil] = temp;	 
	}
}

int main()
{
	int NumList[8] = {5, 34, 32, 25, 75, 42, 22, 2};
	int temp;
	cout<<"Data sebelum diurutkan: \n";
	for (int d=0; d<8; d++)
	{
		cout<<setw(3)<<NumList[d];
	}
	
	cout<<"\n\n";
	selectionsort(NumList,8);
	
	cout<<"Data setelah diurutkan:\n";
	for (int i=0; i<8; i++)
		cout<<setw(3)<<NumList[i]<<endl<<endl;
	
	getche ();
}
