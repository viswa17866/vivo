#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 89, 45};
    int size = 5;
    int max = arr[0];   
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum element is: " << max;          
    return 0;
}
