#include <bits/stdc++.h>
using namespace std;

int no_of_rotation(int arr[], int n) {
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    int index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If the array is already sorted, minimum element is at 'low'
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;  
        }

        // If left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            low = mid + 1; 
        }
        // If right half is sorted
        else {
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }
            high = mid - 1; 
        }
    }
    return index;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int result = no_of_rotation(arr, n);
    cout << "Number of rotations: " << result << endl;

    return 0;
}
