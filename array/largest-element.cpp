#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

// Class to handle array operations
class ArrayOperations {
public:
    // Function to find the largest element in an array
    int findLargestElement(int arr[], int n) {
        int maxElement = arr[0]; // Assume the first element is the largest

        // Traverse the array to find the maximum element
        for (int i = 1; i < n; i++) {
            if (arr[i] > maxElement) { // If current element is greater, update maxElement
                maxElement = arr[i];
            }
        }
        return maxElement; // Return the largest element
    }
};

int main() {
    // Initialize the array
    int arr[] = {10, 45, 2, 30, 50, 19};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Create an object of the class
    ArrayOperations obj;

    // Call the function using the object
    int largest = obj.findLargestElement(arr, n);

    // Output the result
    cout << "The largest element in the array is: " << largest << endl;

    return 0;  // Successful execution
}
