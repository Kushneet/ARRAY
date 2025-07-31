#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,4> a={1,2,3,5}; // fixed-size array (int=data type 4=size)
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout << a[i] << endl; // 1 2 3 5
    }
    cout << "element at 2nd index: " << a.at(2) << endl; // 3
    cout << "empty or not: " << a.empty() << endl; // 0 (false)
    cout << "1st element: " << a.front() << endl; // 1
    cout << "last element: " << a.back() << endl; // 5
}
