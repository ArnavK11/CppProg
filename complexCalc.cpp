#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many numbers does your calculations involve?" << endl;
    cin >> n;

    vector<int> Num(n, 0);
    cout << "Enter the numbers you want to do the calculations with: ";
    for (int i = 0; i < n; i++)
    {
        cin >> Num.at(i);
    }

    vector<int> oper(n - 1, 0);
    cout << "Enter " << n - 1 << " operators: \n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> oper[i];
    }

    for (int i = 0; i < oper.size(); i++)
    {
        if (oper[i] == 4)
        {
            Num[i] /= Num[i + 1];

            Num.erase(Num.begin() + i + 1);
            oper.erase(oper.begin() + i);
        }

        else if (oper[i] == 3)
        {
            Num[i] *= Num[i + 1];

            Num.erase(Num.begin() + i + 1);
            oper.erase(oper.begin() + i);
        }
    }

    for (int i = 0; i < oper.size(); i++)
    {
        if (oper[i] == 1)
        {
            Num[i] += Num[i + 1];

            Num.erase(Num.begin() + i + 1);
            oper.erase(oper.begin() + i);
        }

        else if (oper[i] == 2)
        {
            Num[i] -= Num[i + 1];

            Num.erase(Num.begin() + i + 1);
            oper.erase(oper.begin() + i);
        }
    }

    cout << "Your answer is: " << Num[0] << endl;

    return 0;
}