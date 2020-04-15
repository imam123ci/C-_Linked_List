
#include <iostream>
#ifndef ll_H
#define  ll_H
/*
Here we go again with linked list
*/

class Node
{
public:
    Node* next;
    int data;
};


class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList();
    ~LinkedList();
    void isi(int data, int banyak);
    void tambah_belakang(int data);
    void tambah_depan(int data);
    void tambah_posisi(int data, int posisi);
    void tambah_banyak(int data[], int panjang);
    void cetak(int posisi, int nilai);
    void hapus_posisi(int posisi);
    void tukar(int px, int py);
    void ganti(int data, int posisi);
    int cari_nilai(int nilai);
    int dapat(int posisi);
};

LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}

LinkedList::~LinkedList(){
    std::cout << "LIST DELETED";
}

void LinkedList::isi(int data, int banyak){
    for(int i=0; i< banyak; i++){
        LinkedList::tambah_belakang(data);
    }
    
}

void LinkedList::tambah_belakang(int data){
    if(this->length == 0){
        LinkedList::tambah_depan(data);
        return;
    }
    Node * node_baru = new Node();
    Node * node_akhir = this->head;
    node_baru->data = data;
    node_baru->next = NULL;
    while (node_akhir->next != NULL)
    {
        node_akhir = node_akhir->next;
    }
    node_akhir->next = node_baru; 
    this->length ++;
}

void LinkedList::tambah_depan(int data){
    Node * node_baru = new Node();
    node_baru -> data = data;
    node_baru -> next = this->head;
    this->head = node_baru;
    this->length ++;
}

void LinkedList::tambah_posisi(int data, int posisi){
    if(posisi == 0){
        LinkedList::tambah_depan(data);
        return;
    }
    int i = 1;
    Node* head = this->head;
    while(i < posisi and head->next!= NULL){
        head = head->next;
        i++;
    }
    
    Node * node_baru = new Node();
    node_baru ->data = data;
    node_baru -> next = head->next;
    head -> next = node_baru;
    this->length ++;
}

void LinkedList::tambah_banyak(int data[], int panjang){
    if(this->length != 0)
        return;
    for(int i = 0; i< panjang; i++){
        tambah_belakang(data[i]);
    }
}

void LinkedList::cetak(int posisi = -1, int nilai = -1){
    Node* head = this->head;
    int i =0;
    while(head){
        if(posisi == -1 && nilai == -1)
            std::cout << head->data << " ";
        else if(posisi != -1 && nilai != -1 && i == posisi && head->data == nilai)
            std::cout << head->data << " ";
        else if(posisi != -1 && i == posisi)
            std::cout << head->data << " ";
        else if (nilai != -1 && head->data == nilai)
            std::cout << head->data << " ";

        head = head->next;
        i++;
    }
    std::cout << std::endl;
}

void LinkedList::ganti(int data, int posisi){
    if(posisi >= this->length)
    {
        std::cout << "segmentation error(ganti) : position is longer thar linked list length" << std::endl;
        return ;
    }

    Node* head = this->head;
    int i =0;
    while(head){
        if (posisi == i){
            head->data = data;
            return;
        }
            

        head = head->next;
        i++;
    }
}

void LinkedList::tukar(int px, int py){
  int temp = this->dapat(py);
  this->ganti(this->dapat(px), py);
  this->ganti(temp,px);
}

int LinkedList::cari_nilai(int nilai){
    Node* head = this->head;
    int i =0;
    while(head){
        if (head->data == nilai)
            return(i);

        head = head->next;
        i++;
    }
    return -1;
}

int LinkedList::dapat(int posisi){
    if(posisi >= this->length)
    {
        std::cout << "segmentation error (dapat): position is longer thar linked list length" << std::endl;
        return -1;
    }

    Node* head = this->head;
    int i =0;
    while(head){
        if (posisi == i)
            return(head->data);

        head = head->next;
        i++;
    }

}

void LinkedList::hapus_posisi( int posisi){
    if(this->head == NULL)
        return;
    if(this->length <= posisi)
        return;
    Node * temp = this->head;
   this->length = this->length - 1;
 
    if(posisi == 0){
        this->head = temp->next;
        free(temp);
        return;
    }

    for (int i=0; temp!=NULL && i<posisi-1; i++) 
         temp = temp->next; 
  
    if (temp == NULL || temp->next == NULL) 
         return; 

    Node *node_akhir = temp->next->next;
    free (temp->next);
    temp->next = node_akhir;
 
}




#endif