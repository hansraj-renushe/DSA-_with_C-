#include <iostream>
#include <utility>

using namespace std;


void insertionSort(int array[], int size) {
    for(int i =0; i<size ; i++)
    {
        int curr = array[i];
        int prev = i- 1;

      while(prev>= 0 && array[prev] >= curr)
      {
          array[prev+1]=array[prev];

                 prev--;

      }
      array[prev+1]=curr;

        
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

    insertionSort(array, size);

    cout << "After sorting: ";
    printArray(array, size);

    return 0;
}
