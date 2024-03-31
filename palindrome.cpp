#include <iostream>

using namespace std;

bool isPalindrome(int number) {
    int originalNumber = number, reversedNumber = 0;
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }
    return originalNumber == reversedNumber;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isPalindrome(num) ? num + " is a palindrome." : to_string(num) + " is not a palindrome.") << endl;
    return 0;
}

