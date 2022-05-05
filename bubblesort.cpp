/*
- fix warning and errors
- fix the code
- make N dynamic, let the user choose N
- remove unused 
- make some improvements on your own
*/

#include <iostream>
#define N 10
using namespace std;

int main()
{
  int a[N], i, j, temp;

  cout << "Insert array elements:\n";
  for (i = 0; i < N; i++)
  {
    cin >> a[i];
  }

  for (j = 0; j < N - 1; j++)
  {
    for (i = 0; i < N - 1; i++)
    {
      if (a[i] > a[i + 1])
      {
        temp = a[i];
        a[i] = a[i + 1];
	a[i + 1] = temp;
      }
    }
  }

  cout << "Sorted array by bubble sort: ";
  for (i = 0; i < N; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
