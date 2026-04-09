#include <iostream>
using namespace std;
int main(){
    int n; // declare an integer variable n to store the nimber entered by the user
    cout<<"Enter a number : "; // prompt the user to enter a number 
    cin>>n; // read the number entered by the user and store it in variable n
    if(n%5==0) // check if n is divisible by 5 (i.e., if n is a multiple of 5)
    {
        cout<<n<<" is a multiple of 5."<<endl; // if n is a multiple of 5, print that it is a multiple of 5
    }
    else // if n is not a multiple of 5
    {
        cout<<n<<" is not a multiple of 5."<<endl; // print that n is not a multiple of 5
    }
    return 0; // return 0 to indicate that the program ended successfully
}