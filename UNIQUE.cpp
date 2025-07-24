#include <iostream>
using namespace std;
int FindUnique (int arr[],int size)
{
   int ans=0;
   for(int i=0;i<size;i++)
   {
    ans=ans^arr[i];
   }
 return ans;
}
int main() {
int arr[5]={1,3,3,45,1};
cout << "unique element is: " << FindUnique(arr, 5);
}