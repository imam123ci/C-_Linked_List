# LINKED LIST C++

Sebuah contoh implementasi linked list di c++. File ll.h merupakan header yang berisi codingan linked list. Folder sort algorithm merupakan modifikasi beberapa algoritma sorting menggunakan linked list.

An implementation of linked list in  c++. Linked list code is inside ll.h file. Any function inside ll.h is using Indonesia language

##  Cara Pemakaian

1. Download atau copy file "ll.h"
2. Letakan pada folder yang sama dengan kodingan
3. Tambahkan header (**'#include ll.h'**) di kodingan
4. Deklarasi kelas dan gunakan

## Contoh
```
#include "ll.h"
#include <iostream>

int main(void){
  LinkedList* list = new LinkedList();
  list -> tambah_awal(5);
  list -> tambah_akhir(6)
  list -> cetak();
  list -> tukar(0,2);
  list->cetak();

  delete list;
  return 0;
}

```

  
