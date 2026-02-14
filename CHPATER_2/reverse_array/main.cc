#include <iostream>
#include <algorithm>
using namespace std;


void reverse_arry(int array[], int size)
{


    int left = 0;
    int right = size -1;

    while(left<right)
    {

         swap(array[left], array[right]);
        left++;
        right--;

    }


}
int main()
{

    int size ;

    cout << "Enter size of array :";
    cin>>size;

   
    int arr[size];

    cout << "Enter element of array :";

    

    for (int i = 0; i<size ; i++)
    {
        cin>>arr[i];
    }

   
    cout << "Original array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    reverse_arry(arr,size);

    cout << "\nReversed array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;




}

