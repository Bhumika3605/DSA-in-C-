#include <iostream>
using namespace std;

// Bubble Sort : O(n^2)

int main() 
{
    int arr[5] = {5, 4, 3, 2, 1, };
    int n = 5;

    for(int i = 1; i < n; i++) {
        for(int j = 1; j>0; j--) {
            if(arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
