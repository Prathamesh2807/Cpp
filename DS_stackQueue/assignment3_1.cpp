#include <iostream>
using namespace std ;

struct Node {
    int price ;
    Node* next ;

};

class Stocks{

    public :
    Node* top = NULL;


    void record(int price){
        Node* newNode = new Node ;
        newNode->price = price ;
        newNode->next = top ;
        top = newNode;
        cout<<"stock price recorded : "<<price<<endl;
        
    }

    int remove(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return -1 ;
        }

        Node* temp = top ;
        int price = top->price ;
        top = top->next ;
        delete temp ;

        return price ;

    }

    int latest(){
        if(isEmpty()){
            cout<< "stack in empty"<<endl;
        }

        return top->price ;
    }



    bool isEmpty(){
        if(top == NULL){return true ;}
        else{return false;}
    }
} ;

int main(){

    Stocks s ;
    s.record(10);
    s.record(12);
    s.record(6);
    s.record(22);

    cout<<"recent price of removing last stock : "<<s.remove()<<endl ;
    //s.record(22);
    cout<<"recent price after removing the last stock : "<<s.latest()<<endl;

    return 0;
}