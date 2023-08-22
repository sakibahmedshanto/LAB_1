#include<iostream>
#include<string>
using namespace std;

class Book{

    private:
    string title;
    string author;
    int year=0;
    string availability;
    
 
    public:
    void setDetails(string _title, string _author, int _year)
    {
     title=_title;
    author=_author;
    year=_year;
    }
    void checkOut(){
        availability="Not available";
    }
    void checkIn(){
        availability="Available";
    }
    void displayStatus(){
        cout<<"Title :"<<title<<endl;
        cout<<"Author :"<<author<<endl;
        cout<<"Title :"<<title<<endl;
        cout<<"Publication year  "<<year<<endl;

        
    }
    bool isClassic(){
        if((2023-year)>50){
            return true;
        }
        else{
            return false;
        }
    }


};

Book book1;


int main(void){
book1.setDetails("The Brief history of time","Stephen Hawkins",1940);
book1.checkIn();
book1.displayStatus();
int a=book1.isClassic();

if(a==true){
    cout<<"This Book IS Classic"<<endl;

}else{
    cout<<"This Book IS NOT Classic"<<endl;
    
}



    return 0;
}