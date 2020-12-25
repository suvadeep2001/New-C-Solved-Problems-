#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "Enter the value of the number : ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "The number " << number << " is Even";
    }
    else
    {
        cout << "The number " << number << " is Odd";
    }

    return 0;
}