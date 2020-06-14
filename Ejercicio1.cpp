#include <iostream>

using namespace std;

main(){

    int a, b, c, r;

    cout<<"\n Ingrese el primer numero: ";
    cin>>a;
    cout<<"\n Ingrese el primer numero: ";
    cin>>b;
    c=a/b;
    r=a%b;

    while(r!=0){

        a=b;
        b=r;
    }
    if (a>b)
    {
        c=a/b;
        r=a%b;

    }

    cout<<"El MCD es: "<<b;


}