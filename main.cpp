#include <iostream>

using namespace std;

double my_pow(double num, int power)
{
    double result = num;

    if (power == 0)
        return 1;
    else
    {
        for (int i = 1; i < abs(power); ++i)
        {
            result = result * num;
        }
    }
    return result;
}

int main()
{
    double num;
    int power;
    cout << "Insert a number: ";
    cin >> num;
    cout << endl << "Insert a power: ";
    cin >> power;

    cout << endl << "Result = " << my_pow(num, power);

    return 0;
}