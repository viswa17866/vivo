#include <iostream>
using namespace std;

void reverseString(string str, int n) {
    if (n < 0)
        return;

    cout << str[n];
    reverseString(str, n - 1);
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    reverseString(str, str.length() - 1);
    return 0;
}
