//declarar bibliotecas
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
//funcion del primer ejercicio(invertir en el banco)..

void inversion(){
	//declarar tipo de dato..
	double valor_a_invertir=0;
	double porcentaje_interes_mensual=0.0225;
	double valor_interes=0;
	double valor_total=0;
	
	//presentacion de programa....
	cout<<"---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR EL EL VALOR DE LA INVERCION DESPUES DE UN MES."<<endl;
	cout<<" INGRESE EL VALOR QUE DESEA INVERTIR: "<<endl; 
	cin>>valor_a_invertir;
	//ecuaciones para determinar el valor...
    valor_interes=valor_a_invertir*porcentaje_interes_mensual;
    valor_total = valor_a_invertir + valor_interes;
    //resultados del programa...
    cout << " EL PORCENTAJE DEL INTERES: "<<porcentaje_interes_mensual*100<<"%"<<endl;
    cout<< " EL VALOR GANADO EN EL PRIMER MES: "<<valor_interes<<endl;
    cout<<" EL VALOR TOTAL: "<<valor_total<<endl;
	
}

void bono_trabajo(){
	//declaracion de variables..
	double sueldo_tecnico=690;
	double sueldo_conserje=420;
	double sueldo_analista=760;
	double bono=0.16;
	double bono_tecnico=0;
	double bono_conserje=0;
	double bono_analista=0;
	int opcion;
	//formulas para determinar los resultados...
	bono_tecnico=sueldo_tecnico*bono;
	bono_conserje=sueldo_conserje*bono;
	bono_analista=sueldo_analista*bono;
	//presentacion del programa......
	cout<<"---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR LA CANTIDAD DE BONO RECIBIRA."<<endl;
	do {
        // MENU DE OPCIONES...
        cout << "\n ELIJA CUAL ES SU TRABAJO:" << endl;
        cout << " 1. TECNICO " << endl;
        cout << " 2. CONSERJE " << endl;
        cout << " 3. ANALISTA " << endl;
        cout << " 4. SALIR DEL PROGRAMA" << endl;
        cout << " SELECCIONE UN NUMERO DE LAS OPCIONES PRESENTADAS: "<<endl;
        cin >> opcion;

        // EJECUCION DE OPCIONES....Y RESULTADOS DEL PROGRAMA....
        switch (opcion) {
            case 1:
			cout<<" SALARIO: "<<sueldo_tecnico<<" $"<<endl;
			cout<<" PORCENTAJE DEL BONO: "<<bono*100<<" %"<<endl;
			cout<<" BONO: "<<bono_tecnico<<" $"<<endl;
			cout<<" TOTAL: "<<bono_tecnico+sueldo_tecnico<<" $"<<endl;
                break;
            case 2:
			cout<<" SALARIO: "<<sueldo_conserje<<" $"<<endl;
			cout<<" PORCENTAJE DEL BONO: "<<bono*100<<" %"<<endl;
			cout<<" BONO: "<<bono_conserje<<" $"<<endl;
			cout<<" TOTAL: "<<bono_conserje+sueldo_conserje<<" $"<<endl;
                break;
            case 3:
            cout<<" SALARIO: "<<sueldo_analista<<" $"<<endl;
			cout<<" PORCENTAJE DEL BONO: "<<bono*100<<" %"<<endl;
			cout<<" BONO: "<<bono_analista<<" $"<<endl;
			cout<<" TOTAL: "<<bono_analista+sueldo_analista<<" $"<<endl;
                break;
            case 4:
                cout << " GRACIAS POR UTILIZAR EL PROGRAMA......" << endl;
                break;
            default:
                cout << " OPCION NO VALIDAD. POR FAVOR, SELECCIONE OTRA OPCION......>-<......" << endl;
                break;
        }

    } while (opcion != 4);

}

void provedor_A_B(){
	float b_descuento=0.15;
	float a_descuento=0.125;
	int opcion=0;
	cout<<"---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<"\n Programa para determinar el descuento del proveedor a y b"<<endl;
	
	cout<<" Que proveedor desea:\n 1) A \n 2) B \n Ingrese el numero del proveedor:\n ";
	cin>>opcion;
	float enero=1250;
	float febrero=2560;
	float marzo=2300;
	
	if (opcion==1){
		cout<<"\n Enero: $"<<enero*(1+a_descuento)<<"\n Febrero: $"<<febrero*(1+a_descuento)<<"\n Marzo: $"<<marzo*(1+a_descuento)<<endl;
		cout<<" Ahorro: $"<<(enero*a_descuento)+(febrero*a_descuento)+(marzo*a_descuento)<<endl;
	}
	else if (opcion==2){
		cout<<"\n Enero: $"<<enero*(1+b_descuento)<<"\n Febrero: $"<<febrero*(1+b_descuento)<<"\n Marzo: $"<<marzo*(1+b_descuento)<<endl;
		cout<<" Ahorro: $"<<(enero*b_descuento)+(febrero*b_descuento)+(marzo*b_descuento)<<endl;
	}
	else if (opcion!= 1 and 2){
		cout<< "\n Opcion no validad.. \n Gracias por atencion...."<<endl;
	}
}

void calificacion(){
	float deber=7;
	float prueba=5;
	float examen=6;
	float deb=0.20;
	float prue=0.30;
	float exam=0.50;
	cout<<"---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<"\n Programa para determinar la nota final"<<endl;
	cout<<"\n Deberes: "<<deber<<"\n Pruebas: "<<prueba<<"\n examen: "<<examen<<endl;
	cout<<"\n Nota final: "<<(((deber*deb)/10)+((prueba*prue)/10)+((examen*exam)/10))*100<<endl;
	
	
}

void porcentaje_de_estudiante(){
	double alumnos=59;
	double alumnas=73;
	double aluna=0;
	double aluno=0;
	int opcion=0;
	cout<<"---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<"\n Programa para determinar el porcentaje de alumnos y alumnas.."<<endl;
	cout<<" \n el numero total de alumnos: "<<alumnos+alumnas<<"\n El numero de alumnos: "<<alumnos<<"\n El numero de alumnas: "<<alumnas;
	cout<<"\n El porcetaje es:\n Alumnos: "<<(alumnos*100)/(alumnos+alumnas)<<" %\n Alumnas: "<<(alumnas*100)/(alumnos+alumnas)<<" %"<<endl;
	cout<<"\n ¿El numero de estudiantes cambio? \n 1) si\n 2) no\n Ingrese el numero correspondiente: ";cin>>opcion;
	if (opcion== 1){
		cout<<"\n Por favor ingrese la cantidad de alumnos y alumnos correspondiente..."<<endl;
		cout<<"\n Ingrese el valor de alumnos actual: ";cin>>aluno;
		cout<<"\n Ingrese el valor de alumnas actual: ";cin>>aluna;
		cout<<"\n El porcetaje es:\n \n Alumnos: "<<(aluno*100)/(aluno+aluna)<<" %\n Alumnas: "<<(aluna*100)/(aluno+aluna)<<" %"<<endl;
	}
	else if (opcion== 2){
		cout<<"\n Okey >-<... \n Gracias por su atencion...\n QUE TENGA UN LINDO DIA.."<<endl;
	}
	else if (opcion != 1 and 2) {
		cout<<"\n Opcion no valida...\n Gracias por su atencion...\n QUE TENGA UN LINDO DIA.."<<endl;
	}
	
}

void hora_segundo(){
	int hora=0;
	int segundo=60;
	cout<<"---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<"\n Programa para tranformar de horas a segundos...."<<endl;
	cout<<" \n Ingrese el valor en horas: ";cin>>hora;
	cout<<" El valor de las horas en segundos es: "<<hora*segundo<<" segundos"<<endl;
	
}

void semana(){
	double pasaje_1=0.35;
	double tiempo_1=35;
	double pasaje_2=0.45;
	double tiempo_2=20;
	cout<<"\n---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<"\n Programa para determinar cuánto dinero y cuánto tiempo\n se gasta a la semana al ir de su casa a la Universidad...."<<endl;
	cout<<" \n RUTA 1 \n"<<endl;
	cout<<"\n Dinero gastado en el paseaje por dia(ruta 1): $"<<pasaje_1<<"\n Tiempo de duracion (ruta 1): "<<tiempo_1<<" minutos"<<endl;
	cout<<"\n Total de dinero gastado a la semana (ruta 1): $"<<pasaje_1*5<<endl;
	cout<<"\n Total de tiempo por el viaje (ruta 1): "<<tiempo_1*6<<" minutos\n En hora es: "<<(tiempo_1*6)/60<<" horas"<<endl;
	cout<<" \n RUTA 2 \n"<<endl;
	cout<<"\n Dinero gastado en el paseaje por dia(ruta 2): $"<<pasaje_2<<"\n Tiempo de duracion (ruta 2): "<<tiempo_2<<" minutos"<<endl;
	cout<<"\n Total de dinero gastado a la semana (ruta 2): $"<<pasaje_2*5<<endl;
	cout<<"\n Total de tiempo por el viaje (ruta 2): "<<tiempo_2*6<<" minutos\n En hora es: "<<(tiempo_2*6)/60<<" horas"<<endl;
	
}

void logaritmo(){
	double numero=0;
	cout<<"\n---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<"\n Programa para determinar el logaritmo de un numero positivo...."<<endl;
	cout<<"\n Ingrese el numero ( tiene que ser positivo ): \n ";cin>>numero;
	if (numero>0){
		
		cout<<"\n El logaritmo del numero "<<numero<<" es: "<<log10(numero)<<endl;
		
	}
	else {
		cout<<"\n Numero incorrecto..\n El numero tiene que ser positivo....\n Gracias por atencion...."<<endl;
	}
	
}

void piedra(){
	double altura=0;
	double gravedad=9.8;
	cout<<"\n---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<"\n Programa para determinar el tiempo al caer para una roca que parte del reposo...."<<endl;
	cout<<"\n Ingrese la altura en metros: ";cin>>altura;
	cout<<" \n El tiempo que demora en caer la roca que parte del reposo es: "<<sqrt((2*altura)/(gravedad))<<" segundos"<<endl;	
}

void pulso(){
	double edad=0;
	double tiempo=0;
	cout<<"\n---------BUENOS DIAS/NOCHES QUERIDO USUARIO---------"<<endl;
	cout<<"\n Programa para determinar el numero de pulsaciones..."<<endl;
	cout<<" \n Ingrese su edad:\n "<<endl;
	cin>>edad;
	cout<<" \n Ingrese el tiempo en segundos:\n "<<endl;
	cin>>tiempo;
	cout<<" \n Las pulsaciones q ud debe tener son: "<<(220-edad)/(tiempo)<<" pulsaciones"<<endl;
}

int main (){
	//inversion();
	//bono_trabajo();
	//provedor_A_B();
	//calificacion();
	//porcentaje_de_estudiante();
	//hora_segundo();
	//semana();
	//logaritmo();
	//piedra();
	//pulso();
	return 0;
} 
