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
// Write C++ Program to convert a decimal number to binary number

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

///////////////////////////////////////////////////////////////////

// problem #10
// Write program to display number in hexadecimal form

/*
int main()
{
    int x;
    cout << "Enter an integer : " << endl;
    cin >>x;
    // hex keyword displays a number in hexadecimal form.
    cout << "x=" << hex << x << endl;
    cin.get();
    return 0;
}

*/

///////////////////////////////////////////////////////////////////

// problem #11
// Write a program to swap to numbers using a third variable called temp

/*

void swap(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}

int main(){
    int num1 =5;
    int num2=10;
    cout<<"num1 :"<<num1<<", num2: "<<num2<<endl;
    swap(num1,num2);
    cout<<"num1 :"<<num1<<", num2: "<<num2<<endl;
}

*/

// problem #12
// Write a c++ Program to print ODD numbers from 1 to 10

/*
void printOddNumber(){
    for (int i = 0; i < 10; i++)
    {
        if(i%2!=0 ){
            cout<<i<<endl;
        }
    }
}


int main(){
    printOddNumber();
}

*/

///////////////////////////////////////////////////////////////////

// problem #13
// Write a c++ Program to print natural numbers from 1 to 10 in Reverse

/*
int main(){
    for (int i = 10; i>0; i--)
    {
        cout<<i<<endl;
    }

}

*/

///////////////////////////////////////////////////////////////////

// problem #14
// Write a c++ Program to accept a string in any case and print it by another case.

/*

int main()
{
    char s[30]="AHMED SAAD";

    for (int i = 0; i <= strlen(s); i++)
    {

        if (s[i] >= 65 && s[i] <= 92)
        {
            s[i] = s[i] + 32;
        }




        //if you need to convert from lower case to upper case you can use it
        //if (s[i] >= 97 && s[i] <= 122)
        //{
        //    s[i] = s[i] - 32;
        //}


    }
    cout << "The entered string in uppercase: " << s;
    return 0;
}

*/

///////////////////////////////////////////////////////////////////

// problem #15
// Write C++ Program to check whether a given number is perfect or not

/*
int main()
{
    int i, num, div, sum = 0;
    cout << "Enter the number to be checked : ";
    cin >> num;
    for (i = 1; i < num; i++)
    {
        div = num % i;
        if (div == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout << "\n"
             << num << " is a perfect number.";
    else
        cout << "\n"
             << num << " is not a perfect number.";
    return 0;
}


*/

////////////////////////////////////////////////////////////

// problem #16
// Write C++ Program to print table of any number

/*

void printTableOf(int number){
    for (int i = 1; i <= 10; i++)
    {
        cout<<number<<"*"<<i<<"= "<<(number*i)<<endl;
    }

}

int main(){
    printTableOf(5);
}

*/

//////////////////////////////////////////////////////////////////

// problem #17
// Write C++ Program to read ‘n’ number and print them in matrix terms in all orders.



// problem #18
// Write C++ Program to accept two numbers and print the sum of given two numbers by using pointers

/*

void printSumOfTwoNumbersUsingPointers(int* num1,int* num2){
    cout<<(*num1 + *num2)<<endl;
}


int main(){
    int num1=5;
    int num2=8;

    printSumOfTwoNumbersUsingPointers(&num1,&num2);

}

*/

// problem #19
// Write a c++ Program to accept a string in upper case and print it by lower case

/*
void EnterAnUpperString(string text){
    for (int i = 0; i <= text.length(); i++)
    {
        if(text[i]>= 65 &&text[i]<= 92){
            text[i] +=32;
        }
    }
    cout<<text<<endl;

}

int main(){
    EnterAnUpperString("AHMED SAAD");
}


*/

// problem #20
// Write a c++ Program to accept any single digit number and print it in words.


/*
void EnterANumber(int number)
{

    switch (number)
    {
    case 0:
    {
        cout << "ZERO" << endl;
        break;
    }

    case 1:
    {
        cout << "One" << endl;
        break;
    }

    case 2:
    {
        cout << "Two" << endl;
        break;
    }
    case 3:
    {
        cout << "Three" << endl;
        break;
    }
    case 4:
    {
        cout << "Four" << endl;
        break;
    }
    }
}

int main()
{
    EnterANumber(3);
}


*/