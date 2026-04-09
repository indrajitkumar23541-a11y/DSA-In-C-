#include <iostream>
using namespace std;
int main(){
    int n; // declare an integer variable n to store the number entered by the user 
    cout<<"Enter a number : "; // prompt the user to enter a number
    cin>>n; // read the number entered by the user aand store it in variable n
    (n%2==0) ? cout<<n<<" is an even number."<<endl : cout<<n<<" is an odd number."<<endl; // use the ternary operator to check if n is even or odd and print the appropriate message
    return 0; // return 0 to indicate that the program ended successfully
}