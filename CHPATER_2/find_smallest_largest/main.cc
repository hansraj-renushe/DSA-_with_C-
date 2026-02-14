  #include <iostream>
using namespace std;


void find_smallest_number(int array[],int size)
{

    int samllest = array[0];

    for (int i = 0; i<size ; i++)

    {

   if(samllest> array[i])
   {

             samllest = array[i];
   }


    }


 cout <<" samllest number :"<<samllest <<endl;


}

void find_largest_number(int array[],int size)
{

    int largest = array[0];

    for (int i = 0; i<size ; i++)

    {

   if(largest <array[i])
   {

             largest = array[i];
   }


    }


 cout <<" largest number :"<<largest <<endl;


}



int main(){

    int size;

    cout <<"Enter the size of the array: \n";
    cin >> size;

    int array[size];

    cout <<"Enter the elements of the array: \n";

    for(int  i=0; i<size; i++)
    {
        cin >>array[i];
        
    }

    find_smallest_number(array,size);
    find_largest_number(array,size);

    return 0;
}