#include <iostream>
using namespace std;

int main () {
    int n;
    int oddNum = 0;
    int evenNum = 0;
    cout << "=============================" << endl;
    cout << "Counting Odd and Even Numbers" << endl;
    cout << "=============================" << endl;
    
    cout << "How many numbers do you want to input: ";
    cin >> n;
    cout << endl;
    int arr[n];
    
    cout << "Input " << n << " numbers: ";
    
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenNum++;
        }
        else {
            oddNum++;
        }
    }
    
    cout << "The total of Even Numbers: " << evenNum << endl;
    cout << "The total of Odd Numbers: " << oddNum << endl;
    return 0;
}