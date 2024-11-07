#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int o = 0;
        int e = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    e++;
                }

                else
                {
                    o++;
                }
            }
        }

        if (e > o)
        {
            cout << "1" << endl;
        }

        else if (e < o)
        {
            cout << "-1" << endl;
        }

        else
        {
            cout << "0" << endl;
        }
    }
}
