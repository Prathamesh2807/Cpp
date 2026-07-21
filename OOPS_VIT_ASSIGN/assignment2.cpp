#include <iostream>
using namespace std ;
class Demo{
    protected : 
        string name ;
    public :
        void greet(string n){
            name = n;
            cout<<"hello "<<name<<" welcome to SY CS G BATCH 2 "<<endl ;
        }                                          
};

class GetName : public Demo {
    public:
        string getNames(){
            return name;
        }
};

int main(){
    GetName pvk ;
    pvk.greet("prathamesh vishal kulkarni");
    cout<<pvk.getNames();
    return 0;

}