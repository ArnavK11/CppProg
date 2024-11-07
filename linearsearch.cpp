#include <iostream>
using namespace std;
int main()
{
    int arr[5], n, j;
    int x = -1;

    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
  for ( j = 0; j < 5; j++)
  {
    if (n == arr[j])
    {
        x = 1;
        break;
    } 
  }

    if (x == 0)
    {
        cout << "-1";
    }
    else if (x == 1)
    {
        cout << "The index is " << j;
    }
    

    return 0;
}