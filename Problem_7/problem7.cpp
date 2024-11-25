#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n;
    
    cout << "=============================" << endl;
    cout << "Find The Second Largest Number" << endl;
    cout << "=============================" << endl;
    
    cout << "How many numbers do you want to input: ";
    cin >> n;
    cout << endl;
    int arr[n];
    
    cout << "Input " << n << " numbers: ";
    
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for (int i =0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    
    cout << "The second largest number is: " << secondLargest << endl;

    return 0;
}