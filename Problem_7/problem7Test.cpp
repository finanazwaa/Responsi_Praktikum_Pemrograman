#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n;
    
    cout << "=============================" << endl;
    cout << "Find The Second Largest Number" << endl;
    cout << "=============================" << endl;
    
    int arr[8] = {1, 2, 3, 19, 5, 6, 7, 8};
    
    cout << "Numbers inputed: ";
    
    for (int i = 0; i < 8; i++) {
    cout << arr[i] << " ";
    }
    cout << endl;
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for (int i =0; i < 8; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    
    cout << "The second largest number is: " << secondLargest << endl;

    int expectedSecondLargest = 8;
    
    bool testPassed = true;
    
    if (secondLargest != expectedSecondLargest) {
        testPassed = false;
    }
    
    if (testPassed = true) {
        cout << "Test passed." << endl;
    }
    else {
        cout << "Test not passed." << endl;
    }
    return 0;
}