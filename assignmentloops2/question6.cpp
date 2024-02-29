#include <iostream>
using namespace std;
int main() {

    int x,revx=0,sum;
    cout<<"Enter a number : ";
    cin>>x;
    int store = x;            
   
    while (x>0) {

        int lastdigit = x%10;
        revx *= 10;
        x /= 10;
        revx += lastdigit;
    }

    cout<<"The sum is : "<<store+revx<<endl;
}