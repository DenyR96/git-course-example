/*
- fix warning and errors
- fix the code
- make N dynamic, let the user choose N
- remove unused 
- make some improvements on your own
*/

#include <iostream>
using namespace std;

int main()
{
  int n, i, j, temp;

  cout << "Insert the number of elements:\n";
  cin >> n;
  int a[n];

  cout << "Insert array elements:\n";
  for (i = 0; i < n; i++)
    cin >> a[i];

  for (j = 0; j < n - 1; j++)
    for (i = 0; i < n - 1; i++)
      if (a[i] > a[i + 1])
      {
        temp = a[i];
        a[i] = a[i + 1];
	a[i + 1] = temp;
      }

  cout << "Sorted array by bubble sort: ";
  for (i = 0; i < n; i++)
    cout << a[i] << " ";

  cout << endl;

  return 0;
}
