#include <iostream>
using namespace std ;

int main(){
    int age ;
    cout<< "enter your age : ";
    cin>>age ;
    if (age >= 18){
        cout<<"you are eleigible to vote"<<endl ;
    }
    else if (age<=60 && age>=19){
        cout<<"you are gentleman"<<endl ;
    }
    else cout<<"you are child";
    return 0; 
}