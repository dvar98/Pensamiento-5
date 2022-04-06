#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a,b,n,i,venta1,venta,vendedor,tnt;
    tnt = 0;
    for(i=1; i<=5; i++)
    {
        cout<<"Bienvenido"<<i<<endl;
        venta1=0;
        for(a=1;a<=3;a++)
        {
            cout<<"Cuantas ventas hizo el vendedor"<<endl;
            vendedor = 0;
            cin >> n;
            for(b=1; b<=n;b++)
            {
                cout<<"El costo de valor fue de: "<<b<<endl;
                cin >>venta;
                vendedor=vendedor+venta;
            }
            venta1=venta1+vendedor;
        }
        tnt=tnt+venta1;
    }
    cout<<"Se vendio en total :"<<tnt<<endl;
}
