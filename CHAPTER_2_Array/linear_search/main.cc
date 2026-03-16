#include <iostream>
#include <algorithm>
using namespace std;


int find_traget(int array[], int size , int target)
{

    for(int i=0; i<size; i++)
    {
        if(target == array[i])
        {

            target = i;

            return 1;


        }


    }

    return -1;





}

// sentinelSearch topic for interviews

int sentinelSearch(int arr[], int size, int target)
{
    int last = arr[size - 1];   // Step 1: last element save
    arr[size - 1] = target;        // Step 2: key ko end me daal do

    int i = 0;

    // Step 3: sirf compare, boundary check nahi
    while (arr[i] != target)
    {
        i++;
    }

    arr[size - 1] = last;       // Step 4: original value wapas

    // Step 5: check real mila ya sentinel tha
    if (i < size - 1 || arr[size - 1] == target)

      target = i;
        return 1;

    return -1;
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

int target;

cout <<"Enter target element :";

cin >> target;

int find;

find =find_traget(arr,size,target);

if(find == 1)
{

     cout << "target element 11 number " << target << endl;

}
else{

     cout << "target element 11 not in th array  ";

}

int find2;

find2 = sentinelSearch(arr,size,target);

if(find2==1)
{

      cout << "target element n22 umber " << target << endl;

}
else{

     cout << "target element not in 22th array  ";

}
    return 0;
}