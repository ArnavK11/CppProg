#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long prod = 1;

    while (n != 0)
    {
        prod *= n;
        n--;
    }

    return prod;
}

long long nCr(int n, int r)
{
    long long ans;
    ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

void spacing(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " ";
    }
}
int main()
{
    int rows, n;
    cout << "Enter no. of rows you want to print Pascal Triangle of: ";
    cin >> rows;

    n = rows;

    for (int i = 0; i < rows; i++)
    {
        spacing(n);
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }

        cout << endl;
        n--;
    }

    return 0;
}