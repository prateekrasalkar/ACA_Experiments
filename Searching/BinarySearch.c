Time Complexity :- 
Best Case: O(1)
Average Case: O(log N)
Worst Case: O(log N)

Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space
will be O(logN).

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int low = 0, high = n - 1, mid;
    int result = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            break;
        }
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    if (result != -1)
        cout << "Element found at index = " << result;
    else
        cout << "Element not found";

    return 0;
}
