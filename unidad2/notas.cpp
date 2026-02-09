#include <iostream>
using namespace std;

void leer(string mensaje, int& nota) {
    cout << mensaje << endl;
    cin >> nota;
}


float promedio(int nota1, int nota2, int nota3) {
    
    return 0;
}

int main() {
    


    int cantNotas;
    leer ("ingrese la cantidad de notas: ", cantNotas);
    
    int notas[cantNotas];
    if (cantNotas > 3)
    {
        return 0;
    }
    

   
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese una nota: ";
        cin >> notas[i];
    }

    
    int nota;
    for (int i = 0; i < 3; i++) {
        leer("Ingrese una nota:", nota);
       
    }


    system ("pause");
    return 0;
}