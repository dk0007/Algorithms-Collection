#include<bits/stdc++.h>
#include <algorithm>


using namespace std;

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << " ";
}

int main()
{
    int N;
    cout << "Size of Array: " << endl;
    cin>>N;
    int arr[N];
    cout<<"Elements of the Array: "<<endl;
    int x;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        arr[i] = x;
    }
    int n;
    sort(arr, arr + N); //sort the array
    cout<<"Elements of array after sorting: "<<endl;
    show(arr,N);
    cout << "\n\nNow, we do the binary search\n";
    cout<<"Enter Element to be searched: "<<endl;
    cin>>n;
    if (binary_search(arr, arr + N, n))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    return 0;
}
