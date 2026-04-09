#include<iostream>
using namespace std;
int main(){
    for(int i=19; i<=190; i++) // use a for loop to iterate from 19 to 190 (inclusive)
    {
        if(i%19==0) // check if the current number i is divisible by 19 (i.e., if i is a multiple of 19)
        {
            cout<<i<<" "; // if i is a multiple of 19, print it followed by a space
        }
    }
    return 0; // return 0 to indicate that the program ended successfully

}