#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number :"; // prompt the user to enter a number 
    cin>>a; // read the number entered by the user and store it in variable a
    cout<<"you entered a : "<<a<<endl; // display the value of a entered by the user
    int b; //
    cout<<"Enetr another number : ";
    cin>>b;
    cout<<"you entered b : "<<b<<endl;
    cout<<"sum of a and b is : "<<a+b<<endl;
    cout<<"product of a and b is : "<<a*b<<endl;
    cout<<"difference of a and b is : "<<a-b<<endl;
    cout<<"quotient of a and b is : "<<a/b<<endl;
    return 0;
}