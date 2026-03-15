#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int array[], int size ,int target)
{

    int st = 0;
    int end =size -1;

    while(st<=end)
    {
       
       
       int mid = st +(end-st)/2;


       if(target>array[mid])
       {

        st = mid+1;    //2nd half

       }
       else if(target<array[mid])
       {

        end = mid-1;  //first half

       }else{

          return mid;

       }

    }

    return -1;

}


int main()
{

    int size = 5;
    int array[size] = {10,20,30,40,50};

    int target;

   cout << "Enter target: ";
    cin >> target;

    int index;

index = binary_search(array,size,target);

if(index != -1)
{

 cout << "Target found at index: " << index << endl;
}
else
{

        cout << "Target not found\n";


}
    return 0;
}