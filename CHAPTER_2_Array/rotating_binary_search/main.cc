#include <iostream>
using namespace std;

int rotated_binary_search(int array[], int size, int target)
{
    int st = 0;
    int end = size - 1;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(target == array[mid])
            return mid;

        // LEFT HALF SORTED
        if(array[st] <= array[mid])
        {
            if(array[st] <= target && target < array[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }
        // RIGHT HALF SORTED
        else
        {
            if(array[mid] < target && target <= array[end])
                st = mid + 1;
                
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int array[] = {90,100,110,10,20,30,40,50,60,70,80};
    int size = sizeof(array)/sizeof(array[0]);

    int target;

    cout << "Enter target: ";
    cin >> target;

    int index = rotated_binary_search(array, size, target);

    if(index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found\n";

    return 0;
}
