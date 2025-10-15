#include<iostream>
using namespace std;
int main(){
    //Typecasting-->
    int a= 97;
    char b = 'b';
    int c = 'c';
    float d = 12.3;
    double e = 1.23;

    cout<<"The value of a is "<<char(a)<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of f is "<<c<<endl;
    cout<<"The value of c is "<<int(d)<<endl;
    cout<<"The value of c is "<<int(e)<<endl;

    char ch = 12345;
    cout<<"the value of ch is "<<ch<<endl;
    // logic-->
    /* You assign 12345 to a char variable. char can only store values from -128 to 127 (signed) or 0 to 255 (unsigned).
     Assigning 12345 causes integer overflow. Only the lowest 8 bits are stored, so ch gets a value of 12345 % 256 = 57.
     When printed, ch is shown as the ASCII character for 57, which is '9'.  */
    
    return 0;
}