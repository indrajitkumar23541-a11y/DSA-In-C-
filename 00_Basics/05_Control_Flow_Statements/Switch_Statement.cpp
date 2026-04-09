#include <iostream>
using namespace std;
int main(){
    int n1; // declare an integer variable n1 to store the number entered by the user 
    cout<<"Enter 1st number : "; // prompt the user to enter the first number
    cin>>n1; // read the first number entered by the user and store it in variable n1
    char op; // declare a char variable op to store the operator entered by the user
    cout<<"Enter an operator : "; // prompt the user to enter an operator
    cin>>op; // read the operator entered by the user and store it in variable op
    int n2; // declare an integer variable n2 to store the second number entered by the user
    cout<<"Enter 2nd number : "; // prompt the user to enter the second number
    cin>>n2; // read the second number entered by the user and store it in variable n2
    switch(op) // use a switch statement to perform the appropriate operation based on the operator entered by the user
    {
        case '+': // if the operator is '+', perform addition
            cout<<"Result : "<<n1+n2<<endl;
            break;
        case '-': // if the operator is '-', perform subtraction
            cout<<"Result : "<<n1-n2<<endl;
            break;
        case '*': // if the operator is '*', perform multiplication
            cout<<"Result : "<<n1*n2<<endl;
            break;
        case '/': // if the operator is '/', perform division
            cout<<"Result : "<<n1/n2<<endl;
            break;
        default: // if the operator is not recognized
            cout<<"Invalid operator!"<<endl;
    }
    return 0; // return 0 to indicate that the program ended successfully

}