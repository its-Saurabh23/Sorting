// Insertion sort  - Insert an element from the unsorted array to it's correct positon in the sorted array..

// eg 6,2,4,1 we have to sort this

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting
    // Insertion sort  - Insert an element from the unsorted array to it's correct positon in the sorted array..

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[ j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    // printing the element
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}