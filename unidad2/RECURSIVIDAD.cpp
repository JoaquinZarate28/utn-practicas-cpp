#include <iostream>
using namespace std;

void numberFunction(int i)
{
    cout << "El número es: " << i << endl;
    i++;
    if (i < 10)
    {
        numberFunction(i);
    }
}

int main()
{
    int i = 0;
    numberFunction(i);
    return 0;
}                                                 // es recursiva ya que se llama a si misma

main -> numberFunction (0)
                    -> numberFunction(1)                              // desde el main se llama a la funcion NumberFunction 
                                            ...             
                                                      //corta cuando i sea mayor que el numero seleccionado