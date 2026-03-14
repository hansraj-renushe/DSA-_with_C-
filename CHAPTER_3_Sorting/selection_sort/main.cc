#include <iostream>
#include <utility>

using namespace std;

void selectionSort(int array[], int size) {
    for(int i =0; i<size -1 ; i++)
    {
        int selectionIdx = i;

        for(j =i+1 ; j<size ; j++)

        {

            if(array[i]<array[selectionIdx])
            {

                selectionIdx = j;
            }
        }
       swap(array[j],array[selectionIdx]);
        
    }
    
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {5,6, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Before sorting: ";
    printArray(array, size);

    selectionSort(array, size);

    cout << "After sorting: ";
    printArray(array, size);

    return 0;
}
