#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int partition(vector<int>& arr, int st, int end) {
    int idx = st - 1;
    int pivot = arr[end];

    for (int j = st; j < end; j++) {
        if (arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quick_sort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int pivot_idx = partition(arr, st, end);

        quick_sort(arr, st, pivot_idx - 1);
        quick_sort(arr, pivot_idx + 1, end);
    }
}

void printArray(const vector<int>& arr) {
    for (int value : arr) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 6, 4, 3, 2, 1};

    cout << "Before sorting: ";
    printArray(arr);

    quick_sort(arr, 0, arr.size() - 1);

    cout << "After sorting: ";
    printArray(arr);

    return 0;
}
