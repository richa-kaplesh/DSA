#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

// Class to handle array operations
class ArrayOperations {
public:
    // ✅ **Optimal Iterative Approach** - O(N) Time, O(1) Space
    int findLargestElementIterative(int arr[], int n) {
        int maxElement = arr[0]; // Assume the first element is the largest

        // Traverse the array to find the maximum element
        for (int i = 1; i < n; i++) {
            if (arr[i] > maxElement) { // If current element is greater, update maxElement
                maxElement = arr[i];
            }
        }
        return maxElement; // Return the largest element
    }

    // ✅ **Recursive Approach** - O(N) Time, O(N) Stack Space
    int findLargestElementRecursive(int arr[], int n, int index = 0, int maxElement = INT_MIN) {
        // Base Case: If we reached the end of the array, return maxElement
        if (index == n) {
            return maxElement;
        }

        // Update maxElement if the current element is greater
        maxElement = max(maxElement, arr[index]);

        // Recursive Call: Move to the next element
        return findLargestElementRecursive(arr, n, index + 1, maxElement);
    }
};

int main() {
    // Initialize the array
    int arr[] = {10, 45, 2, 30, 50, 19};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Create an object of the class
    ArrayOperations obj;

    // Call the Iterative function
    int largestIterative = obj.findLargestElementIterative(arr, n);
    cout << "Largest element (Iterative): " << largestIterative << endl;

    // Call the Recursive function
    int largestRecursive = obj.findLargestElementRecursive(arr, n);
    cout << "Largest element (Recursive): " << largestRecursive << endl;

    return 0;  // Successful execution
}
