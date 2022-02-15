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

///////////////////////////////////////////////////////////////////

// problem #5
// Write C++ Program To Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Print it

/*
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

*/

///////////////////////////////////////////////////////////////////

// problem #6
// Write C++ Program to Read Three Numbers And Print The Biggest Of Given Three Numbers

/*
void printBig(int x, int y, int z)
{
    if (x > y && x > z)
    {
        cout << "X" << endl;
    }
    else if (y > x && y > z)
    {
        cout << "y" << endl;
    }
    else
    {
        cout << "z" << endl;
    }
}

int main()
{
    printBig(3,5,7);
    return 0;
}

*/

///////////////////////////////////////////////////////////////////

// problem #7
// Write C++ Program to print numeric pyramid

/*
void printNumericPyramid(int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<""<< endl;;
    }
}

int main()
{
    printNumericPyramid(10);
}

*/

///////////////////////////////////////////////////////////////////

// problem #8
// Write C++ Program to convert binary number to decimal number

/*

int convert(long long n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int main()
{
    cout << convert(1101L) << endl;

    return 0;
}





// suppose we have -> 1101

// in loop
// rem=n%10   -> 1101%10=1
// n=n/10     -> 1101/10=110.1   n is int so  ->n=110
// dec =dec+rem*pow(2, i)    -> 0+1*pow(2,0)=1

// rem=n%10   -> 110%10=0
// n=n/10     -> 1101/10=11.0   n is int so  ->n=11
// dec =dec+rem*pow(2, i)    -> 1+0*pow(2,1)=1

// rem=n%10   -> 11%10=1
// n=n/10     -> 11/10=1.1   n is int so  ->n=1
// dec =dec+rem*pow(2, i)    -> 1+1*pow(2,2)=5

// rem=n%10   -> 1%10=1
// n=n/10     -> 1/10=0.1   n is int so  ->n=0
// dec =dec+rem*pow(2, i)    -> 5+1*pow(2,3)=13

// result of 1101    is->13


*/


// problem #9
//Write C++ Program to convert a decimal number to binary number


/*

long long convert(int n)
{
    long long bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}

int main()
{
    int n, bin;
    cout << "Enter a decimal number: ";
    n=58;
    bin = convert(n);
    cout << n << " in decimal = " << bin << " in binary" << endl;
    return 0;
}


*/




