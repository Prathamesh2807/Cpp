#include <iostream>
#include <fstream>
using namespace std ;

int main(){

    // writing the file ;

    //file ko open kara
    ofstream fout ;
    fout.open("greetings.txt");

    if(!fout.is_open()){
        cout<<"file could not be opened";
        return 1;
    }

    fout<<"hello india "<<endl ;
    fout<<"i am learning cpp file handling"<<endl;

    fout.close();


    return 0;
}