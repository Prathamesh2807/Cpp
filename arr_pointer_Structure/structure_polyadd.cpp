#include <iostream>
using namespace std ;
struct polynomial {
    int coeff , expo ;
};

int main(){
    int m , n ;
    cout<<"enter the no.of temrs of poly 1 : " <<endl;
    cin>>m;
    cout<<"enter the no.of terms of  poly 2 : " <<endl;
    cin>>n;

    struct polynomial p[5], q[5], r[5] ;
    cout<<"put entries for poly 1 : "<<endl;
    for (int i =0 ; i<m ; i++){
        cout<<"enter the expo : " ;
        cin>>p[i].expo ;
        cout<<"enter the coeff : " ;
        cin>>p[i].coeff ;
    }
    cout<<"put entries for poly 2 : "<<endl ;
    for (int i = 0 ; i < n ; i++){
        cout<<"enter the expo : ";
        cin>>q[i].expo;
        cout<<"enter the coeff : ";
        cin>>q[i].coeff;
    }
    int i=0 , j=0 , k=0 ;
    while((i<m ) && (j<n)){
    
            if(p[i].expo == q[j].expo){
                r[k].expo = p[i].expo;
                r[k].coeff = p[i].coeff + q[j].coeff;
                i++;
                j++;
            }
            else if (p[i].expo>q[j].expo){ 
                r[k].expo = p[i].expo;
                r[k].coeff = p[i].coeff;
                i++;
            }
            else if (p[i].expo<q[j].expo) {
                r[k].expo = q[j].expo;
                r[k].coeff = q[j].coeff;
                j++;
            }
            
            k++;
    }

    while(i<m) {
        r[k].expo = p[i].expo;
        r[k].coeff = p[i].coeff;
        i++;
        k++;
    }
    while(j<n) {
        r[k].expo = q[j].expo;
            r[k].coeff = q[j].coeff;
            j++;
            k++;
    }

    for (int s = 0 ; s<k ; s++){
        cout<<r[s].coeff<<" x^ "<<r[s].expo<< " + " ;
    }

    return 0;
}