#include <bits/stdc++.h>
using namespace std;
int main()
{
    float num, sqroot;
    cout << "\nEnter the value of your number : ";
    cin >> num;
    if (num < 0)
    {
        cout << "We can't use a negative number to find square root" << endl;
    }
    else
    {
        sqroot = sqrt(num);
        cout << "The square root of " << num << " is : " << sqroot;
    }
    return 0;
}