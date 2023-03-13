#include <iostream>
using namespace std;
//Topic - Practical 01
/*
    write a class for students  with 
    1. Roll no      2. name     3. marks in 3 subjects
    functions for:-
    1. Total marks  2. Grade    3. and required method
*/

class student
{
    private:
    int rollno, marks1, marks2, marks3, total;

    public:
    student(int rollno, int marks1, int marks2, int marks3)
    {
        this->rollno = rollno;  //using  this  keyword here
        this->marks1 = marks1;
        this->marks2 = marks2; 
        this->marks3 = marks3;
    }
    
    //inline functions
    int totalmarks();   
    char percentage();
};

    int student::totalmarks() { return total = marks1 + marks2 + marks3; }
    char student::percentage()
    {
        char percentage = totalmarks() / 3;
        if(percentage >= 80) { return 'A' ;} else if (percentage >= 60) { return 'B';} else if (percentage >= 33) { return 'C';} else return 'F' ;
    }

int main()
{
    system("cls");
    cout<<"Practical 01 | C++ Programming\n";
    cout<<"------------------------------\n";
    string name;
    int rollno, marks1, marks2, marks3;
    cout<<"Enter your Name: "; getline(cin, name);
    cout<<"\nEnter Roll No: "; cin>>rollno;
    cout<<"\nEnter Marks Subject 1: "; cin>>marks1;
    cout<<"\nEnter Marks Subject 2: "; cin>>marks2;
    cout<<"\nEnter Marks Subject 3: "; cin>>marks3;

    student ob1(rollno, marks1, marks2, marks3);
    
    //call functions
    cout<<"\n\nTotal Marks: "<<ob1.totalmarks()<<endl;
    cout<<"\nGrade: "<<ob1.percentage();

    cout<<endl<<endl;
    return 0;        
}