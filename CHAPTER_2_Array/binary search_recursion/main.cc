#include <iostream>
#include <vector>
using namespace std;

int binary_search_recursion(vector<int>& array, int target, int st, int end)
{
    if(st > end)
        return -1;

    int mid = st + (end - st) / 2;

    if(target > array[mid])
        return binary_search_recursion(array, target, mid + 1, end); //2nd half

    else if(target < array[mid])
        return binary_search_recursion(array, target, st, mid - 1); //1st half

    else
        return mid;
}

int main()
{
    vector<int> array = {10,20,30,40,50,60,70};

    int target;

    cout << "Enter target: ";
    cin >> target;

    int index = binary_search_recursion(array, target, 0, array.size() - 1);

    if(index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found\n";

    return 0;
}
