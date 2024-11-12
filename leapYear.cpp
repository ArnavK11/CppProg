#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 4==0)
    {
        if (year % 100==0)
        {
            if (year % 400==0)
            {
                cout << "It IS a leap year1" << endl;
            }

            else
            {
                cout << "NOT a leap year2" << endl;
            }
        }

        else
        {
            cout << "It IS a leap year3" << endl;
        }
    }

    else
    {
        cout << "NOT a leap year4" << endl;
    }

    return 0;
}