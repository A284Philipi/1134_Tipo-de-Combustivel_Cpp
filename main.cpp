#include <iostream>

using namespace std;

int main()
{
    int gasolina = 0, alcool = 0, diesel = 0, numero, cont = 0;
    while (cont == 0){
        cin >> numero;
        if (numero == 4){
            cont = 1;
        }else{
            if (numero <= 0 || numero > 4){
                cont = 0;
            }else{
                if (numero == 1){
                    alcool++;
                }else{
                    if (numero == 2){
                        gasolina++;
                    }else{
                        diesel++;
                    }
                }
            }
        }
    }
    cout << "MUITO OBRIGADO" <<endl;
    cout << "Alcool: " << alcool <<endl;
    cout << "Gasolina: " << gasolina <<endl;
    cout << "Diesel: " << diesel <<endl;
    return 0;
}
