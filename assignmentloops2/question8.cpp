#include <iostream>
using namespace std;
int main() {

    int n,x=1,y=1;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<x<<" "<<y<<" ";

    for (int i=1; i<=n-2; i++) {

        int sum = x+y;
        cout<<sum<<" ";
        x = y;
        y = sum;
    }
}