#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int first = -9999, second = -9999, third = -9999;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    cout << "Third Largest = " << third;
    return 0;
}
