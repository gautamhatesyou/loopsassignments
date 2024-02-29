#include <iostream>
using namespace std;
int main() {

    for (int i=1; i<=500; i++) {
        int sum = 0;
        int num = i;

        while (num>0) {                         
 
            int digit = num%10;
            sum += digit*digit*digit;
            num /= 10;
        }

        if (sum==i) {
            cout<<i<<endl;
        }
    }
}
