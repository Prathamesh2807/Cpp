#include <iostream>
using namespace std ;

struct node{
    int data ;
    node* next ;
    node(int x){
        data = x;
        next = NULL;
    }
};

int main(){
    node* head = new node(100);
    node* second = new node(200);
    node* third = new node(300);
    node* four = new node(400);
    node* five = new node(500);

    head->next = second;
    second->next = third;
    third->next = four;
    four->next = five;

    node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<<" "<<endl;

    node* newnode = new node(250);

    //second->next = newnode;
    //newnode->next = third;

    newnode->next = second->next;
    second->next = newnode ;

    node* temp1 = head ;
    while(temp1 != NULL){
        cout<<temp1->data<<" " ;
        temp1 = temp1->next ;
    }

    return 0;

}