#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Input a three-digit number:";
    cin >> num;
    int third_digit, second_digit, number, first_digit, res;
    third_digit = num % 10;
    number = num / 10;
    second_digit = number % 10;
    first_digit = num / 100;
    res = first_digit * second_digit * third_digit;

    if ((res <= 100) || (res >= 1000))
    {
        cout << "False, because your result: " << res;
    }
    else
    {
        cout << "True, your result is a three-digit number: " << res;
    }
    return 0;
}

