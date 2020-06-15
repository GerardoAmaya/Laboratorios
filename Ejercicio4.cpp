//dia despues
#include<iostream>

using namespace std;


int main(){
    //Declaro las variables
    int anio, anio_siguiente, dia, dia_siguiente, mes, mes_siguiente;

    cout<<"Que fecha sera maniana";
    cout<<"\n ingrese el valor del anio ";
    cin>>anio;
    
    cout<<"ingrese el valor del dia ";
    cin>>dia;
    
    cout<<"ingrese el valor del mes ";
    cin>>mes;


//condicional que compruebe si el dia digitado corresponde a un fin de mes(abril junio septiembre y noviembre, son meses de 30 dias)
//al digitar uno de estos dias, entra una condicion que hace que el mes cambie
//si el mes es 2, y el dia 29, sera un anio bisiesto, si el anio no es divisible por 4 o si el anio es divisible por 100 pero no por 400
    if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((anio % 4 != 0) || (anio % 100) == 0) && (anio % 400) != 0) || dia == 31)
            {
                //Si el mes no es bisiseto, al mes siguiente se le suma 1, y el valor del dia siguiente pasa a 1
                mes_siguiente = mes + 1;
                dia_siguiente = 1;
                cout<<"\n El dia siguiente seria "<< dia_siguiente;
                cout<<"\n El mes seria  "<< mes_siguiente;
            }
            else
            {
                // en caso contrario se le sumaria un 1 al dia, y el mes siguiente seria igual al mes
                dia_siguiente = dia + 1;
                mes_siguiente = mes;
                
                cout<<"\n El dia siguiente seria "<< dia_siguiente;
                cout<<"\n El mes seria  "<< mes_siguiente;
            }
            
            // si el dia siguiente es 1, y el mes es 13, pasaria porque el mes digitado fue diciembre, en este caso el mes siguiente seria 1, y seria anio nuevo
            if (dia_siguiente == 1 && mes_siguiente == 13)
            {
                mes_siguiente = 1;
                anio_siguiente = anio + 1;
            
                cout<<"\n El dia siguiente seria "<< dia_siguiente;
                cout<<"\n El mes seria  "<< mes_siguiente;
            }
            // en caso de que esto no sea asi, se mantiene el mismo anio
            else
                anio_siguiente = anio;
                cout<<"\n El anio seria "<< anio_siguiente;

}




           


