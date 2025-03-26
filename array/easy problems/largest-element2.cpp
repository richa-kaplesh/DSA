#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

// Function to remove duplicates using two-pointer technique (O(N) time, O(1) space)
int removeDuplicates(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;  // Edge case: empty array

    int i = 0;  // Pointer for unique elements

    // Iterate through the array with pointer j
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {  // If new unique element found
            i++;  // Move i to the next position
            arr[i] = arr[j];  // Update the unique position
        }
    }

    return i + 1;  // Return new size of the array
}

int main() {
    int n;
    
    // Taking input for size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);  // Declare dynamic array using vector

    // Taking input for array elements
    cout << "Enter " << n << " elements (sorted order required): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Remove duplicates and get the new size
    int k = removeDuplicates(arr);

    // Print the modified array
    cout << "The array after removing duplicate elements is: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;  // Successful execution
}
