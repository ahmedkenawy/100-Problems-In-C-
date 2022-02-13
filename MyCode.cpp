#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// problem #1
// Write a simple program to print your name, class
/*

int main(){
    string name="Ahmed Kenawy";
    cout<<"My Name Is:"<<name<<endl;

    return 0;
}

*/

///////////////////////////////////////////////////////////////////

// problem #2
// Write C++ program to calculate sum of two numbers

/*

int main(){
    int x=5,y=4;
    cout<<(x+y)<< endl;

    return 0;
}

*/

///////////////////////////////////////////////////////////////////

// problem #3
// Write C++ Program to print your name 100 times.

/*
int main(){

    for (int i = 0; i < 100; i++)
    {
        cout<<"Ahmed Kenawy"<<endl;
    }

    return 0;
}

*/

///////////////////////////////////////////////////////////////////

// problem #4
// Write C++ program to swap two numbers using macros

/*
int main(){

    int x=5,y=7;
    swap(x,y);
    cout<<"x:"<<x<<" y:"<<y<<endl;

    return 0;
}

*/

// problem #5
// Write C++ Program To Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Print it

int main()
{

    int roll_num, deg1, deg2, deg3, total, avg;

    cout << "ENTER STUDENT ROLL NO : " << endl;
    cin >> roll_num;
    cout << "ENTER FIRST SUBJECT MARKS :" << endl;
    cin >> deg1;
    cout << "ENTER SECOND SUBJECT MARKS :" << endl;
    cin >> deg2;
    cout << "ENTER THIRD SUBJECT MARKS :" << endl;
    cin >> deg3;


    total=deg1+deg2+deg3;
    avg=(total)/3;

    cout << "Total :" <<total<<endl;
    cout << "Average :" <<avg<<endl;

    return 0;

}