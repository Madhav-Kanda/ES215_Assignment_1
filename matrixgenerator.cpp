#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << "{";
        for (int j = 0; j < n / 2; j++)
        {
            cout << 1;
            cout << ",";
            cout << 2;
            if (j < (n / 2) - 1)
            {
                cout << ",";
            }
        }
        if (i < n - 1)
        {
            cout << "},";
        }
        else
        {
            cout << "}";
        }
    }
    cout << "}";
}