#include <iostream>
#include <iomanip>
using namespace std;

void exch(int[], int);		//deklarasi fungsi
void tampilkan(int[], int);

int main()
{ 
	   int bil[9] = {7, 2, 5, 1, 4, 9, 6, 8, 3};
    cout<<"Bilangan yang tidak terurut: ";
    tampilkan(bil, 9);
	   cout<<endl;
	   
    exch(bil,9);
    cout<<endl<<"Bilangan yang sudah terurut: ";
    tampilkan(bil, 9);
    return 0;	
}

void exch(int data[], int n) // definisi fungsi
{ 					// exchange sort
   int temp;
   int k=1;
   for (int i=0 ; i<n-1 ; i++)
   {	
	    for (int j=i+1 ; j<n ; j++) {		
 	       if (data[i] > data[j])
	  	   {
		  	   	// tukar data
				temp = data[i];		
			 	data[i] = data [j];
			 	data[j] = temp;
		 	 
		   		cout<<"Array setelah loop ke " << setw(2) << k <<" adalah  "; 
		   		tampilkan(data,n);
		   		k++;
	  	   }		
   		}
   }	
   
}

void tampilkan(int data[], int n)  // definisi fungsi
{				      // untuk menampilkan isi array
   for(int i=0 ; i<n ; i++)
 	  cout<<data[i]<< "  ";
   cout<<endl;
}

