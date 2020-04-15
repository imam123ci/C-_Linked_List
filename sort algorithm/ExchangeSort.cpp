#include <iostream>
#include <iomanip>
#include "../ll.h"
using namespace std;

void exch(LinkedList * data);		//deklarasi fungsi

int main()
{ 
	int bil[9] = {7, 2, 5, 1, 4, 9, 6, 8, 3};
	LinkedList * bilangan = new LinkedList();
	bilangan->tambah_banyak(bil,9);
    cout<<"Bilangan yang tidak terurut: ";
    bilangan->cetak();
	cout<<endl;
	   
    exch(bilangan);
    cout<<endl<<"Bilangan yang sudah terurut: ";
	bilangan->cetak();
    return 0;	
}

void exch(LinkedList *data) // definisi fungsi
{ 					// exchange sort
   int temp;
   int k=1;
   int n = data->length;
   for (int i=0 ; i<n-1 ; i++)
   {	
	    for (int j=i+1 ; j<n ; j++) {		
 	       if (data->dapat(i) > data->dapat(j))
	  	   {
		  	   	// tukar data
				data->tukar(i,j);
			 	
		   		cout<<"Array setelah loop ke " << setw(2) << k <<" adalah  "; 
		   		data->cetak();
		   		k++;
	  	   }		
   		}
   }	
   
}

