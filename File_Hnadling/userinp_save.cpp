#include <iostream>
#include <string>
#include <fstream>

using namespace std ;

int main(){

    string name ;
    int age ;

    cout<<"enter your name ";
    getline(cin,name);

    cout<<"enter your age";
    cin>>age ;

    ofstream fout;
    fout.open("students.txt");

    if(!fout.is_open()){
        cout<<"could not open the file";
        return 1;
    }

    fout<<"Name : "<<name <<endl;
    fout<<"age : "<<age <<endl;

    fout.close();

    return 0;
}