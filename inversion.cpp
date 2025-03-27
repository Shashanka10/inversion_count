#include <iostream>
using namespace std;

//counts the number of inversions
int countInv(int arr[], int n)
{
    int i, j;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int i, n;
    cout << "Enter the no of elements: \n";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements with space: \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array entered by the user: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The total inversion of an array is: \n" << countInv(arr,n) << endl;
    return 0;
}