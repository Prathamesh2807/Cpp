#include <iostream>
using namespace std;
struct node{
    int data;
    node* next ;
    node(int x){
        data = x;
        next = NULL ;
    }
};

int main(){
    
    node* first = new node(10);
    node* second = new node(20);
    first -> next = second;
    node* third = new node(30);
    
    second->next = third ;
    node* head = first;

    node* temp = first;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }


    return 0;
}