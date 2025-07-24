#include <iostream>
using namespace std;
void reverse(int arr[],int n) //top because array is to be reversed before printing
{    
    int start=0; // arr[i] not used	because reverse logic uses two-way swapping,
    int end=n-1; //  not one-way traversal
    while(start<=end){  //for(i=0;i<n;i+=2){ swap(arr[i],arr[i+1]);} for alternate swapping 
          swap(arr[start],arr[end]); // predefined fxn in C++
    start++; // start aage jaara h end peeche aara h 
    end--;
    }
}
void print(int arr[],int n) // use print fxn wherever you want change in main array
{
    cout << "The array is: ";
for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,10); // same reason
    print(arr,10);
} // 10 9 8 7 6 5 4 3 2 1 
