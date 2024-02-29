#include <iostream>
using namespace std;
int main() {

    int x,sum=0;
    cout<<"Enter a number : ";
    cin>>x;

    while (x>0) {

        int digit = x%10;
        if (digit%2==0) {
            sum += digit;
        }
        x /= 10;
    }

    cout<<"The sum of even digits : "<<sum<<endl;
}