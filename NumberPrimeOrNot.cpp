#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, i;
    cout << "\nEnter the value of your number : ";
    cin >> number;
    if (number == 1)
    {
        cout << "1 is not a prime number.The smallest prime nuber is 2" << endl;
    }

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << "The number is not a prime number" << endl;
            break;
        }
    }
    if (number == i)
    {
        cout << "The number is a prime number" << endl;
    }
    return 0;
}