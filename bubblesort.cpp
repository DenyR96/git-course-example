/*
- fix warning and errors
- fix the code
- make N dynamic, let the user choose N
- remove unused 
- make some improvements on your own
*/

#include <iostream>
using namespace std;

void bubblesort(int arr[], int num)
{
    int i, j, temp;
    for (j = 0; j < num - 1; j++)
    for (i = 0; i < num - 1; i++)
      if (arr[i] > arr[i + 1])
      {
        temp = arr[i];
        arr[i] = arr[i + 1];
	arr[i + 1] = temp;
      }

    cout << "Sorted array by bubble sort: ";
    for (i = 0; i < num; i++)
      cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int n;
    cout << "Insert the number of elements:\n";
    cin >> n;
    int a[n];

    cout << "Insert array elements:\n";
    for (int i = 0; i < n; i++)
      cin >> a[i];

    bubblesort(a, n);
  return 0;
}
