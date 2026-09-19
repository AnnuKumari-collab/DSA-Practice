#include <iostream>
using namespace std;

void prime(int n) {
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;  
    } else {
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {   
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "This is a prime number" << endl;
    } else {
        cout << "This is not a prime number" << endl;
    }
}

int main() {
    int num;
    cout << "Enter number to check prime or not : ";
    cin >> num;
    prime(num);   
}
