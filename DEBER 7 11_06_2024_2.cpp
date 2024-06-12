#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

//función para generar el encabezado de la factura
string generarEncabezadoFactura(const string& nombre, const string& apellido, const string& ruc, int dia, const string& mes, int ano, int numeroFactura){
    string encabezado;
    cout<<""<<endl;
    cout<<"---------------------------------------------"<< endl;
    cout<<"                  FACTURA                    "<< endl;
    cout<<"---------------------------------------------"<< endl;
    cout<<" N° de Factura:       ["<< numeroFactura <<"]"<< endl;//número de factura
    cout<<" Fecha de Emision:    ["<<dia<<" de "<<mes<<" del "<<ano<<"]"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"              DATOS DEL CLIENTE              "<<endl;
	cout<<"---------------------------------------------"<<endl;
    cout<<" Nombre del Cliente:   ["<<nombre<<" "<<apellido<<"]"<<endl;
    cout<<" RUC:                  ["<<ruc<<"]"<<endl;
    return encabezado;
}

//función para generar los detalles de los productos y calcular el subtotal, IVA y total
string generarDetallesProductos(const vector<string>& productos, const vector<double>& importes, double& subtotal, double& iva, double& total){
    string detalles;
    cout<<"---------------------------------------------"<<endl;
    cout<<"             DETALLES DE PRODUCTOS           "<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<fixed<<setprecision(2); //establecemos el formato de salida para los números

    subtotal=0.0;
    for (size_t i=0;i<productos.size();++i) {
    	cout<<" "<<productos[i]<<"                     $"<<importes[i]<<endl;
        subtotal+=importes[i];
    }
    iva=subtotal*0.12; //calculamos el IVA
    total=subtotal+iva; //total
    cout<<"                     ------------------------" <<endl;
    cout<<"                            Subtotal: $" <<subtotal<<endl;
    cout<<"                           IVA (12%): $" <<iva<<endl;
    cout<<"                       Total a pagar: $" <<total<<endl;
    cout<<"                     ------------------------"<<endl;
    return detalles;
}

int main(){
    //variables para los datos del cliente y la fecha
    string nombre,apellido,ruc,mes;
    int dia,ano;
    //variable para el número de factura
    int numeroFactura=1;
    //buecle para seguir haciendo mas facturas...
    while (true){
    	cout<<"---------------------------------------------------------" <<endl;
    	cout<<"         BIENVENIDO AL PROGRAMA DE FACTURACION           "<<endl;
    	cout<<"---------------------------------------------------------" <<endl;
        cout<<" Ingrese solo el Nombre del cliente: ";cin>>nombre;
        cout<<" Ingrese solo el Apellido del cliente: ";cin>>apellido;
        cout<<" Ingrese el RUC: ";cin>>ruc;
        cout<<" Ingrese el numero del dia: ";cin>>dia;
        cout<<" Ingrese el mes en palabras: ";cin>>mes;
        cout<<" Ingrese el año: ";cin>>ano;
        //variables para los detalles de los productos
        int numProductos;
        cout<<" Ingrese el numero de productos/servicios: ";cin>>numProductos;
        vector<string>productos(numProductos);
        vector<double>importes(numProductos);
        for (int i=0;i<numProductos;++i){//preguntas para los productos/servicios comprados
            cout<<" Ingrese el nombre del producto/servicios(si los productos o servicios tienen dos o mas palabras separarlas por un _ ) "<<i+1<<": ";cin>>productos[i];
            cout<<" Ingrese el precio del producto/servicios(el valor decimal debe ingresar con punto . ) "<<i+1<<": ";cin>> importes[i];
        }
        //generamos el encabezado y los detalles de la factura
        double subtotal,iva,total;
        string encabezadoFactura=generarEncabezadoFactura(nombre, apellido, ruc, dia, mes, ano, numeroFactura);
        string detallesProductos=generarDetallesProductos(productos, importes, subtotal, iva, total);
        //mostramos la factura
        cout<<encabezadoFactura<<endl;
        cout<<detallesProductos<<endl;
        //incrementamos el número de factura para la próxima iteración
        numeroFactura++;
        //preguntamos al usuario si desea continuar
        string continuar;
        cout << " ¿Desea generar otra factura? (si o no): "; cin >> continuar;
        if (continuar != "si" && continuar != "Si") {
        	cout<<" Que tengan un lindo dia/noche..>-<"<<endl;
            break; //salimos del bucle si el usuario no desea continuar
        }
    }
    return 0;
}

