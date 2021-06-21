#include <iostream>
using namespace std;

int loopOverArray(int a[], int n)
{ // pointer to a is passed so its pointing to array of main function
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
};

int loopOverArray2(int *a, int n) // use this syntax its latest
{                                 // generic pointer could be used to point to array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
};

int * returnArray()
{
    int* p = new int[5];
    for(int i=0; i<5; i++){
        p[i] = i;
    }
    return p;
}

//we need to dynamically allocate the array if we want to return array from function

int main()
{
    cout << "hello world" << endl;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    cout << arr << ' ' << &arr[0] << endl;
    cout << sizeof(arr) << ' ' << sizeof(arr[0]) << endl;

    int arr2[2] = {2, 3};

    for (int i = 0; i < 2; i++)
    {
        cout << arr2[i] << endl;
    }

    // foreach loop in cpp

    for (int x : arr2)
    {
        cout << x << ' ' << endl;
    }

    loopOverArray(arr, 5);
    cout << endl;
    loopOverArray2(arr, 5);

    int* A = returnArray();
    cout << "array returend from returnArray";
    for(int i=0; i<5; i++){
        cout << A[i] << " ";
    }

    return 0;
}
