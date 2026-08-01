#include <iostream>
using namespace std;

class BankAccount{
private :
    int accountNumber;
    string name;
    float balance;

    static int totalAccounts;
    static float totalBalance;

public :
    BankAccount(int accNo , string n,float bal){
        accountNumber = accNo;
        name = n;
        balance = bal;

        totalAccounts ++;
        totalBalance += balance;

    }

    static void displayStatistics(){
        cout<<"total accounts = "<<totalAccounts<<endl;
        cout<<"total balance = "<<totalBalance<<endl;
    }

    void displayAscending(BankAccount &other){
        cout<<"function called "<<endl;
        if(balance<other.balance){
            cout<<balance<<endl;
            cout<<other.balance<<endl;
        }
        else{
            cout<<other.balance<<endl;
            cout<<balance<<endl;
        }
    }

};
int BankAccount::totalAccounts =0;
float BankAccount :: totalBalance = 0;

int main() {
    BankAccount a1(101,"prathamesh",5000);
    BankAccount a2(102, "Rahul", 3000);
    BankAccount a3(103, "Amit", 7000);

    BankAccount::displayStatistics();
    cout<<endl;
    a1.displayAscending(a2);
    
    
    return 0;
}