#include <iostream>
#include <string>
using namespace std;

class Student{
    private :
        int roll ;
        string name;
        float marks[5];
        float percentage;
        string grade;
    
    public : 
        Student(int r,string n,float m[5]){
            roll = r;
            name = n ;
            for(int i=0 ;i<5 ;i++){
                marks[i] = m[i];
            }
            percentage = 0.0;
            grade = "";
        }

        ~Student(){
            cout<<"destructor called for "<< name <<"\n destroyed \n"<<endl ;
        }

        void Calculate_percentage(){
            int sum =0 ;
            float max_total ;
            for(int i=0 ; i<5 ; i++){
                sum = sum + marks[i];
            }
            cout<<"enter the total max marks possible : "<<endl;
            cin>>max_total;
            percentage = sum / max_total * 100 ;
        }
        void Calculate_Grade(){
            if(percentage >= 75) grade = "distinction";
            else if(percentage >= 60) grade = "First Class";
            else if (percentage >= 45) grade = "Second Class";
            else if (percentage >= 33) grade = "Third Class";
            else grade = "Fail";
        }

        void Display(){
            cout<< "\n --------------STUDENT DETAILS---------------\n"<<endl;
            cout<< "ROLL NO :    " << roll << endl ;
            cout<< "NAME    :    " << name <<endl ;
            cout<< "MARKS   :    " ;
            for(int i=0 ;i<5 ;i++){ 
                cout<<marks[i]<<" ";
            }
            cout<<endl;
            cout<< "PERCENTAGE : " << percentage <<endl;
            cout<<"------------------------------------------------"<<endl;


        }


};

int main(){
    float marks1[5] = {85 , 50 ,70 ,68 ,96};
    float marks2[5] = {40, 55, 30, 60, 45};

    Student kulkarni(2070704,"PRATHAMESH VISHAL KULKARNI",marks1);
    kulkarni.Calculate_percentage();
    kulkarni.Calculate_Grade();
    kulkarni.Display();

    Student joshi(207284 ,"VEDANT JOSHI",marks2);
    joshi.Calculate_percentage();
    joshi.Calculate_Grade();
    kulkarni.Display();


    return 0;
}