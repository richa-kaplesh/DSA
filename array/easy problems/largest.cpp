#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

// Function to find the second smallest and second largest elements in an array
void getElements(int arr[], int n) {
    // If there are less than 2 elements, we can't find second smallest/largest
    if (n < 2) {
        cout << "-1 -1" << endl;  // Edge case: Not enough elements
        return;
    }

    // Initialize smallest and second smallest as very large numbers (INT_MAX)
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    // Initialize largest and second largest as very small numbers (INT_MIN)
    int largest = INT_MIN, secondLargest = INT_MIN;

    // ✅ First pass: Find the smallest and largest elements
    for (int i = 0; i < n; i++) {
        // 🔹 Update smallest and second smallest
        if (arr[i] < smallest) { 
            secondSmallest = smallest;  // Previous smallest becomes second smallest
            smallest = arr[i];          // Update smallest
        } 
        else if (arr[i] > smallest && arr[i] < secondSmallest) { 
            secondSmallest = arr[i];  // Update second smallest if it's greater than smallest
        }

        // 🔹 Update largest and second largest
        if (arr[i] > largest) { 
            secondLargest = largest;  // Previous largest becomes second largest
            largest = arr[i];         // Update largest
        } 
        else if (arr[i] < largest && arr[i] > secondLargest) { 
            secondLargest = arr[i];  // Update second largest if it's smaller than largest
        }
    }

    // ✅ Handle cases where second smallest or second largest doesn't exist
    if (secondSmallest == INT_MAX) secondSmallest = -1;
    if (secondLargest == INT_MIN) secondLargest = -1;

    // Output the results
    cout << "Second smallest: " << secondSmallest << endl;
    cout << "Second largest: " << secondLargest << endl;
}

int main() {
    // Sample input array
    int arr[] = {1, 2, 4, 6, 7, 5};  
    int n = sizeof(arr) / sizeof(arr[0]); // Get the size of the array

    // Call the function to find second smallest and second largest
    getElements(arr, n);

    return 0;  // Successful execution
}
