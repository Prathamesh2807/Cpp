#include <iostream>
using namespace std ;

int main(){
    int num ;
    int count = 0;
    cout<<"enter num to reverse : ";
    cin>>num ;

    while(num>0){
        int last_dig = num % 10 ;
        count = count * 10 + last_dig ;
        num = num / 10 ;
    }
    cout << count ;
    return 0;
}