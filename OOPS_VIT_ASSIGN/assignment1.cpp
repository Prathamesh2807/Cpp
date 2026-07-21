#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Book{
    private :
        int book_id ;
        string book_name;
        string author;
        float price ;

    public : 
        void get_details(){
            cout<<"enter the book id : ";
            cin>>book_id ;
            cin.ignore();
            cout<<"enter the book name : ";
            getline(cin,book_name);
            cout<<"enter author name  : ";
            getline(cin,author);
            cout<<"enter the price : ";
            cin>>price ;
        }

        void print_details(){
            cout<<left << setw(10)<<book_id
                <<setw(25) << book_name
                <<setw(20) << author
                << setw(10)<<price <<endl ;
        }

        float getPrice(){
            return price ;
        }
};

int main(){
    int n;
    float total =0 ;

    cout<<"enter the number of books :" ;
    cin>> n;

    Book b[n];
    for (int i =0 ; i<n ; i++){
        cout << "\n enter the details of book : " << i+1 <<endl ;
        b[i].get_details();
    }

    cout << "\n\n================ BOOK DETAILS ================\n";
    cout << left << setw(10)<<"book id"
        << setw(25) << "book name "
         <<setw(25) << "author name"
         << setw(10) << "Price" << endl;

    cout << "---------------------------------------------------------------\n";


    for (int i=0 ; i<n ;i++){
        b[i].print_details();
        total += b[i].getPrice();
    }

    cout << "---------------------------------------------------------------\n";
    cout << "Total Price of All Books = " << total << endl;
    return 0;
}