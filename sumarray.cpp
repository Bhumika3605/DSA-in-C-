#include <iostream>
using namespace std;

int main()
  
  {
    int sum=0;
    int arr[5];
    for(int i = 0; i <= 4; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}
