#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main(){

    // read karna hai toh input karna padega 

    ifstream fin ;
    fin.open("greetings.txt");

    string line ;

    /*while(getline(fin , line)){
        cout<<line<<endl;
    }*/
    getline(fin , line);

    cout<<line<<endl ;
    getline(fin,line);
    cout<<line;
    fin.close();



    return 0 ;
}