#include <iostream>
#include <vector>
using namespace std;

// Function to check if the array is sorted from a given index considering it as rotated array
bool is_sorted_from_index(const vector<int>& arr, int start) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        if (arr[(start + i) % n] > arr[(start + i + 1) % n]) {
            return false;
        }
    }
    return true;
}

bool can_be_sorted_by_rotations(const vector<int>& arr) {
    int n = arr.size();
    int break_point = -1;
    
    // Find the point where the array order breaks
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            break_point = i + 1;
            break;
        }
    }
    
    // If no break point is found, the array is already sorted
    if (break_point == -1) {
        return true;
    }
    
    // Check if the array can be considered sorted starting from the break point
    return is_sorted_from_index(arr, break_point);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (can_be_sorted_by_rotations(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
