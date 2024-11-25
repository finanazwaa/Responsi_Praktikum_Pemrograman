#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n;
    int oddNum = 0;
    int evenNum = 0;
    
    cout << "=============================" << endl;
    cout << "Counting Odd and Even Numbers" << endl;
    cout << "=============================" << endl;
 
    int arr[8] = {1, 2, 3, 19, 5, 6, 7, 8};
    
    cout << "Numbers inputed: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
        for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0) {
            evenNum++;
        }
        else {
            oddNum++;
        }
    }
    
    cout << "The total of Even Numbers: " << evenNum << endl;
    cout << "The total of Odd Numbers: " << oddNum << endl;
    
    int expectedOdd = 5;
    int expectedEven = 3;
    
    bool testPassed = true;
    
    if (evenNum != expectedEven || oddNum != expectedOdd) {
        testPassed = false;
    }
    
    if (testPassed == true) {
        cout << "Test passed." << endl;
    }
    else {
        cout << "Test not passed." << endl;
    }

    return 0;
}