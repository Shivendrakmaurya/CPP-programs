#include <iostream>
using namespace std;

int main()
{
    float a, b, sum, sub, prod, div;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    sum = a + b;
    sub = a - b;
    prod = a * b;

    cout << "Sum = " << sum<<endl;
    cout << "\nSubtraction = " << sub<<endl;
    cout << "\nProduct = " << prod<<endl;

    if (b != 0)
    {
        div = a / b;
        cout << "\nDivision: " << div<<endl;
    }
    else
    {
        cout << "Division by zero is not allowed.";
    }

    return 0;
}