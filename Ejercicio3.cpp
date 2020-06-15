//Anio Bisiesto
#include<iostream>

using namespace std;


bool anio_bisiesto(int anio);

int main()
{
    cout<<"Ingrese el anio ";
    int anio;
    cin>>anio;

    if (anio_bisiesto (anio) ) cout<<"el anio es bisiesto";

        else cout<<"El anio no es bisiesto";

    }
       
    bool anio_bisiesto(int anio) {
        if (anio%4 !=0) return false;
        else if (anio%100 != 0) return true;
        else if(anio%400 != 0) return false;
        return true;
      
    }

