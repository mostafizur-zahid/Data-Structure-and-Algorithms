// Binary search using Bubble Sort algorithm

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number Of Array:";
    cin >> n;
    int array[n];
    cout << "Enter array:";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    //  Bobble Sort

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "After Sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Binary Search Algorithm

    int key;
    cout << "Enter Finding Array:";
    cin >> key;
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (array[mid] == key)
        {
            cout << "Found " << key << " in " << mid + 1 << " th postition" << endl;
            break;
        }
        else if (array[mid] < key)
            left = mid + 1;

        else
            right = mid - 1;
    }
    if (left > right)
        cout << "Not Found" << endl;
        return 0;
}