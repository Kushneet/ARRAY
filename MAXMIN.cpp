#include <iostream>
using namespace std;  
int getMAX(int num[],int size)  // num is the name of the array
{
 int max= INT_MIN; // INT_MIN gives the smallest element of the array
 for(int i=0;i<size;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
       
    }
    return max;
}
int getMIN(int num[],int size)
{
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if( num[i] < min)
        {
            min=num[i];
        }
    }
    return min;
}
int main() {
    int size;
    cout << "size of array: "; // size of an array can be decided however upper limit 100 is already given
    cin >> size;
    
    int num[100];
    
    for(int i=0;i<size;i++)
    {
        cout << "Element at index: " << i ;
        cin >> num[i];
        
    }
    cout << "min value: " << getMIN(num,size) << endl;
    cout << "max value: " << getMAX(num,size) << endl;
}