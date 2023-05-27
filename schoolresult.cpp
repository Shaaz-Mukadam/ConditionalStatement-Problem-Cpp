//Write a C++ program for school grade system.
#include<iostream>
using namespace std;
int main() {
 int marks;
 cin>>marks;

    if(marks<25){
        cout<<"You're fail\n";
    }
    else if(marks>25 && marks<45){
        cout<<"You got E grade\n";
    }
    else if(marks>=45 && marks<50){
        cout<<"You got D grade";
    }
    else if(marks>=50 && marks<60){
        cout<<"You Got C Grade";
    }
    else if(marks>=60 && marks<80){
        cout<<"You got B Grade";
    }
    else if(marks>=80 && marks<90){
        cout<<"You got A Grade";
    }
    else if(marks>=90 && marks<100){
        cout<<"Congrats you scored A+ Grade";
    }
    else{
        cout<<"Invalid input";
    }
}
