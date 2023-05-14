#include <iostream> // Header file for input/output stream operations
#include <set> // Header file for set container

using namespace std; // Use the standard namespace

int checkConditions(int array[][4], int rowSize, int colSize, set<int> conditions) {
    // Function to check if all elements in the 2D array are in the set
    for (int i = 0; i < rowSize; ++i) { // Loop over the rows of the array
        for (int j = 0; j < colSize; ++j) { // Loop over the columns of the array
            if (conditions.find(array[i][j]) == conditions.end()) { // If the element is not in the set
                return -1; // Return -1 to indicate failure
            }
        }
    }
    return 0; // If all elements in the array are in the set, return 0 to indicate success
}

int main() {
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; // 2D array with 3 rows and 4 columns
    set<int> conditions; // Initialize an empty set of integers
    int condArr[] = {1,2,3,6,7,8}; // Array of integers to add to the set
    for (int i = 0; i < 6; ++i) { // Loop over the elements of the integer array
        conditions.insert(condArr[i]); // Add each integer to the set
    }
    int result = checkConditions(arr, 3, 4, conditions); // Call the checkConditions function
    cout << "Result: " << result << endl; // Print the result
    return 0; // Exit the program with status 0
}

// used a for loop to insert integers from an array into an empty set
// becuase initializes the set with the integers directly using an initializer list kept giving an error