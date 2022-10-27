//                                          Bubble sort

// Swap the adjecent Element  of any  an unsorted array if they are in wrong order.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter unsorted number:" << endl;
    cin >> n;
    cout << " " << endl;
    int arr[n];
    // Taking the input From user
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sorting

    // 4 3 2 1
    // 3 4 1 2  first itration
    // 3 1 4 2 second itr..
    // 1 3  2 4 third itr..
    // 1 2 3 4 fifth itr..

    cout << "sorted List" << endl;
    int counter = 0;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    // Printing
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}