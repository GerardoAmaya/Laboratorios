//dia despues
#include<iostream>

using namespace std;


int main(){
    int anio, anio_siguiente, dia, dia_siguiente, mes, mes_siguiente;

    cout<<"El dia siguiente";
    cout<<"\n ingrese el valor del anio ";
    cin>>anio;
    
    cout<<"ingrese el valor del dia ";
    cin>>dia;
    
    cout<<"ingrese el valor del mes ";
    cin>>mes;

    if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((anio % 4 != 0) || (anio % 100) == 0) && (anio % 400) != 0) || dia == 31)
            {
                mes_siguiente = mes + 1;
                dia_siguiente = 1;
                cout<<"el anio seria "<< anio_siguiente;
                cout<<"el dia siguiente seria "<< dia_siguiente;
                cout<<"el mes seria  "<< mes_siguiente;
            }
            else
            {
                dia_siguiente = dia + 1;
                mes_siguiente = mes;
                cout<<"el anio seria "<< anio_siguiente;
                cout<<"el dia siguiente seria "<< dia_siguiente;
                cout<<"el mes seria  "<< mes_siguiente;
            }

            if (dia_siguiente == 1 && mes_siguiente == 13)
            {
                mes_siguiente = 1;
                anio_siguiente = anio + 1;
                cout<<"el anio seria "<< anio_siguiente;
                cout<<"el dia siguiente seria "<< dia_siguiente;
                cout<<"el mes seria  "<< mes_siguiente;
            }
            else
                anio_siguiente = anio;
                cout<<"el anio seria "<< anio_siguiente;
                cout<<"el dia siguiente seria "<< dia_siguiente;
                cout<<"el mes seria  "<< mes_siguiente;

}
