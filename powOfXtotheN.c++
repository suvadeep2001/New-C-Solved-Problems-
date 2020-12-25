#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, n;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Enter the value of n : ";
    cin >> n;
    int power;
    power = pow(num, n);
    cout << "The value of " << num << " to the power " << n << " is : " << power << endl;
    return 0;
}