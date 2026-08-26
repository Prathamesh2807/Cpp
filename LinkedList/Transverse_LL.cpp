#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

int main(){
    node* head = new node(100);
    node* second = new node(200);
    node* third = new node(300);
    node* fourth = new node(400);
    node* fifth = new node(500);

    head->next = second ;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    node* temp = head ;
    while(temp->next != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }

    return 0;

}