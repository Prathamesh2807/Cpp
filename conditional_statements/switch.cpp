#include <iostream>
using namespace std ;

int main(){
    int num ;
    cout<<"enter the num : "<<endl;
    cin>>num ;

    switch(num){
        case 1 :
            cout<<"hello katto"<<endl;
            break;

        case 2  : 
            cout<< "stamemt 2 "<<endl;
            break;
        

        default:
            cout<<"default";
    }
}