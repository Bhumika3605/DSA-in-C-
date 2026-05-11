#include <iostream>
using namespace std;

// Bubble Sort : O(n^2)

int main() 
{
    int arr[5] = {1, 2, 5, 3, 4};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
