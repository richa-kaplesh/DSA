#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

// Class to handle array operations
class ArrayOperations {
public:
    // ✅ **Optimal Iterative Approach** - O(N) Time, O(1) Space
    int findLargestElementIterative(const vector<int>& arr) {
        int maxElement = arr[0]; // Assume the first element is the largest

        // Traverse the array to find the maximum element
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxElement) { // If current element is greater, update maxElement
                maxElement = arr[i];
            }
        }
        return maxElement; // Return the largest element
    }

    // ✅ **Recursive Approach** - O(N) Time, O(N) Stack Space
    int findLargestElementRecursive(const vector<int>& arr, int index = 0, int maxElement = INT_MIN) {
        // Base Case: If we reached the end of the array, return maxElement
        if (index == arr.size()) {
            return maxElement;
        }

        // Update maxElement if the current element is greater
        maxElement = max(maxElement, arr[index]);

        // Recursive Call: Move to the next element
        return findLargestElementRecursive(arr, index + 1, maxElement);
    }
};

int main() {
    int n;
    
    // User Input for Array Size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);  // Declare dynamic array using vector

    // User Input for Array Elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create an object of the class
    ArrayOperations obj;

    // Call the Iterative function
    int largestIterative = obj.findLargestElementIterative(arr);
    cout << "🔹 Largest element (Iterative): " << largestIterative << endl;

    // Call the Recursive function
    int largestRecursive = obj.findLargestElementRecursive(arr);
    cout << "🔹 Largest element (Recursive): " << largestRecursive << endl;

    return 0;  // Successful execution
}
