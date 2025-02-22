#include <bits/stdc++.h>
using namespace std;

int lower_bound(int arr[], int m, int x) {  
    int ans = m;
    int low = 0, high = m - 1;
    while (low <= high) {
        int mid =  (high + low) / 2;
        if (x <= arr[mid]) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMax(int arr[][100], int n, int m) { 
    int cnt_max = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
        int cnt_ones = m - lower_bound(arr[i], m, 1); 
        if (cnt_ones > cnt_max) {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    
    int arr[100][100]; 
    
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int result = rowWithMax(arr, n, m);
    cout << "Row with maximum 1s: " << result << endl;
    
    return 0;
}
