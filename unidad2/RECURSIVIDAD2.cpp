#include <iostream>
using namespace std;

void numberFunction(int valor);

double factorial(int n)
{
    if (n == 0) // Condiciones particulares: 0! = 1
        return 1;
    else
        return n * factorial(n - 1); // Ecuación de recurrencia: n! = n * (n-1)!
}

int main()
{
    int i = 0;
    numberFunction(i);
    return 0;
}

