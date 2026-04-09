#include <iostream>
using namespace std;
int main(){
    int n; // declare an integer variable n to store the number entered by the user 
    cout<<"Enter a number : "; // prompt the user to enter a number 
    cin>>n; // read the number entered by the user and store it in variable n
    if(n%2==0) // check if n is divisible by 2 (i.e., if n is even)
    {
        cout<<n<<" is an even number."<<endl; // if n is even, print that it is an even number 
    }
    if(n%2!=0) // check if n is not divisible by 2 (i.e., if n is odd)
    {
        cout<<n<<" is an odd number."<<endl; // if n is odd print that it is an odd number 

    }
    return 0; // return 0 to indicate that the program ended successfully

}
     