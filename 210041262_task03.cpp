#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string first_name, last_name, course;
    int marks = 0, birth_year = 0,id=0;

public:
    void displayDetails(string _first_name, string _last_name,int _id, int _birth_year, string _course, int _marks)
    {
        first_name = _first_name;
        last_name = _last_name;
        birth_year = _birth_year;
        course = _course;
        marks = _marks;
        id=_id;
    }

    int displayAge()
    {
        return 2023 - birth_year + 1;
    }

    float displayGPA()
    {
        if (marks >= 80)
        {
            return 4.00;
        }
        if (marks >= 70)
        {
            return 3.5;
        }
        if (marks >= 60)
        {
            return 3.0;
        }
        if (marks >= 50)
        {
            return 2.5;
        }
        if (marks >= 40)
        {
            return 2.0;
        }
        if (marks < 40)
        {
            return 0.00;
        }
    }

    void willGraduate(){
        if(marks>40){
            cout<<"The student will graduate"<<endl;
            
        }
        else{
            cout<<"The student will not graduate at this mark"<<endl;
            
        }
    }


    float updatedGPA(){
        marks=marks+marks*.10;
        displayGPA();
    }

    void printTranscript(){
        cout<<"FUll name:  "<<first_name<<" "<<last_name<<endl;
        cout<<"ID:  "<<id<<endl;
        cout<<"Current age:  "<<displayAge()<<endl;
        cout<<"Updated gpa:  "<<displayGPA()<<endl;
    }


};

Student student1;

int main(void)
{
    student1.displayDetails("Sakib", "Ahmed",210041262, 2001, "CSE", 90);
    student1.updatedGPA();
    student1.printTranscript();

    return 0;
}