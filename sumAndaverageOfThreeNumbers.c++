#include <bits/stdc++.h>
using namespace std;
int main()
{
    float num1, num2, num3, sum;
    float average;
    cout << "\nEnter the first number : ";
    cin >> num1;
    cout << "\nEnter the second number : ";
    cin >> num2;
    cout << "\nEnter the third number : ";
    cin >> num3;
    sum = num1 + num2 + num3;
    cout << "\nThe sum of three numbers is : " << sum << endl;
    average = (num1 + num2 + num3) / 3;
    cout << "\nThe average of three numbers is : " << average << endl;
}