#include <iostream>
using namespace std;
int main(){
    int marks; // declare an integer variable marks to store the marks entered by the user 
    cout<<"Enter your marks : "; // prompt the user to enter their marks
    cin>>marks; // read the marks entered by the user and store it in variable marks 
    if(marks>=81 && marks<=100) // check if marks are between 81 and 100 (inclusive)
    {
        cout<<"Very Good"<<endl; // if marks are between 81 and 100, print "Very Good"
    }
    else if(marks>=61 && marks<=80) // check if marks are between 61 and 80 (inclusive)
    {
        cout<<"Good"<<endl; // if marks are between 61 and 80, print "Good"
    }
    else if(marks>=41 && marks<=60) // check if marks are between 41 and 60 (inclusive)
    {
        cout<<"Average"<<endl; // if marks are between 41 and 60, print "Average"
    }
    else // if marks are less than 41
    {
        cout<<"Fail"<<endl; // print "Fail"
    }
    return 0; // return 0 to indicate that the program ended successfully
}