#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;  // Input the size of the vector

    vector<int> vec(n);  // Create a vector of size n

    // Input the elements of the vector
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    // Reverse the vector in-place
    for (int i = 0; i < n / 2; ++i) {
        swap(vec[i], vec[n - i - 1]);  // Swap elements from start and end
    }

    // Print the reversed vector
    cout << "Reversed vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}