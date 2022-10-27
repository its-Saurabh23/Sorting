#include <iostream>
using namespace std;

// Find the minimun element in the unsorted aray and swap it with at begning..
int main()
{

    int n;
    int arr[10];
    cout << "Enter Number\n";
    cin >> n;
    cout << "Enter the unsorted array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // main sorting process
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    // printing
    for (int i = 0; i <= n; i++)
    {
        cout << "\n " << arr[i];
    }

    return 0;
}
// 12,6,2,1,5