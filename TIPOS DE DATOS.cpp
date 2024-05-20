#include <iostream>
#include <cmath>
using namespace std;

void dato_int (){
	int numero_1=0;
	int numero_2=0;
	int suma=0;
	int producto=0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO--------- \n PROGRAMA PARA CALCULAR SUMA Y PRODUCTO \n INGRESE EL PRIMER NUEMRO: "<<endl;
	cin>>numero_1;
	cout<<" INGRESE EL SEGUNDO NUEMRO: "<<endl;
	cin>>numero_2;
	suma=numero_1+numero_2;
	producto=numero_1*numero_2;
	cout<<" EL CALCULO \n PARA LA SUMA EL RESULTADO ES: "<<suma<<"\n PARA EL PRODUCTO EL RESULTADO ES: "<<producto<<endl; 
}

void dato_int_unsigned (){
	int unsigned p_numero=0;
	int unsigned s_numero=0;
	int unsigned r_numero=0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO--------- \n INGRESE EL NUMERO DE LIBROS QUE DISPONE: "<<endl;
	cin>>p_numero;
	cout<<" INGRESE EL NUMERO DE LIBRO QUE COMPRO: "<<endl;
	cin>>s_numero;
	r_numero=p_numero+s_numero;
	cout<<" EL NUMERO ACTUAL QUE DISPONE EL USUARIO ES DE: "<<r_numero<<" LIBROS"<<endl;
}

void dato_short (){
	short n_1=0;
	short n_2=0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO--------- \n PROGRAMA PARA DETERMINAR LA CANTIDAD DE TV EN UN CONTENEDORES"<<endl;
	cout<<" \n INGRESE LA CANTIDAD DE CONTENENDORES: "<<endl;
	cin>>n_1;
	n_2=n_1*300;  //LA CANTIDAD DE TV QUE PUEDE TENER UN CONTENEDORES ES DE 300 TV... 
	cout<<"LA CANTIDAD DE TV QUE EL USUARIO POSEE ES DE: "<<n_2<<" TV"<<endl;
	
}

void dato_short_unsigned (){
	short unsigned n1=0;
	short unsigned n2=0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO--------- \n PROGRAMA PARA DETERMINAR LA EDAD EN 30 AÑOS EN EL FUTURO"<<endl;
	cout<<" \n INGRESE SU EDAD ACTUAL: "<<endl;
	cin>>n1;
	n2=n1+30; 
	cout<<" SU EDAD EN EL FUTURO DE 30 AÑOS ES DE: "<<n2<<" AÑOS"<<endl;
	
}

void dato_long (){
	long n1=0;
	long n2=0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO--------- \n PROGRAMA PARA DETERMINAR LA CANTIDAD DE CALCULADORAS EXITEN EN UNA CAJA"<<endl;
	cout<<" \n INGRESE LA CANTIDAD DE CAJAS: "<<endl;
	cin>>n1;
	n2=n1*40; // en una caja ahi 40 calculadoras.
	if (n2>0){
	cout<<" LA CANTIDAD DE CALCULADORAS QUE AHI ENN EL ALMACEN ES: "<<n2<<" CALCULADORAS"<<endl;	
	} else{
		cout<<" LA CANTIDAD DE CALCULADORA QUE FALTAN EN EL ALMACEN ES: "<<n2<<" CALCULADORAS"<<endl;
	}
	
}

void dato_long_unsigned (){
	long unsigned n1=0;
	long unsigned n2=0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<"PROGRAMA PARA DETERMINAR LAS HORAS DE ESTUDIO DE UN ESTUDIANTE EN UN AÑO"<<endl;
	cout<<" \n INGRESE LA CANTIDAD DE HORAS QUE ESTUDIA AL DIA: "<<endl;
	cin>>n1;
	n2=n1*365;
	cout<<" LA CANTIDAD DE HORAS QUE ESTUDIASTE EN EL AÑO SON: "<<n2<<" HORAS"<<endl;
}

void dato_long_long (){
	long long n1=0;
	long long n2=0;
	long long n3=0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR LA CANTIDAD DE ESTUDIANTE QUE UTILIZAN EL PLANTEL EDUCATIVO"<<endl; 
	cout<<" INGRESE LA CANTIDAD DE GRUPOS DE ESTUDIOS QUE EXISTEN EN EL PLANTEL: "<<endl;
	cin>>n1;
	cout<<"LA CANTIDAD DE ESTUDIANTES QUE EXITEN EN CADA GRUPO DE ESTUDIO: "<<endl;
	cin>>n2;
	n3=n1*n2; 
	cout<<" LA CANTIDAD DE ESTUDIANTES EN EL PLANTEL EDUCATIVO SON DE: "<<n3<<" ESTUDIANTES"<<endl;
}

void dato_long_long_unsigned (){
	long long unsigned n1=0;
	long long unsigned n2=0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR LA CANTIDAD DE DULCES M&M QUE EXISTEN EN CADA FRASCO"<<endl; 
	cout<<" INGRESE LA CANTIDAD DE FRASCOS: "<<endl;
	cin>>n1;
	n2=n1*32000; // EN CADA FRASCO PUEDE ALMACENAR 32000 DULCES M&M
	cout<<" LA CANTIDAD DE DULCES QUE EXISTEN EN CADA FRASCO ES DE: "<<n2<<" DULSES M&M"<<endl;
}

void dato_float (){
	float n1=0.0;
	float n2=0.0;
	float n3=0.0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR ELPRECIO FINAL DE LA COMPRA"<<endl; 
	cout<<" PORFAVOR UTILICE EL PUNTO(.) PARA DETERMINAR PRECIOS CON DECIMALES"<<endl;
	cout<<" INGRESE EL PRECIO DE UNIDAD POR EL PRODUCTO: "<<endl;
	cin>>n1;
	cout<<" INGRESE LA CANTIDAD DE PRODUCTOS QUE LLEVO: "<<endl;
	cin>>n2;
	n3=n1*n2; 
	cout<<" EL PRECIO FINAL POR LA COMPRA ES DE: "<<n3<<" DOLARES"<<endl;
}

void dato_double (){
	double n1=0.0;
	double n2=0.0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR LA CANTIDAD DE METROS EN KILOMETROS "<<endl; 
	cout<<" PORFAVOR UTILICE EL PUNTO(.) PARA DETERMINAR PRECIOS CON DECIMALES"<<endl;
	cout<<" INGRESE LA CANTIDAD DE METROS: "<<endl;
	cin>>n1;
	n2=(n1*1)/1000; 
	cout<<" LA CANTIDAD DE M EN KILOMETROS ES DE: "<<n2<<" KILOMETROS"<<endl;
}

void dato_long_double (){
	long double n1=0.0;
	long double n2=0.0;
	long double n3=0.0;
	long double na=0.0;
	long double angulo_radianes=0.0;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR EL CATETO OPUESTO DE UN TRIANGULO REACTANGULO CON EL ANGULO Y HIPOTENUSA  "<<endl; 
	cout<<" PORFAVOR UTILICE EL PUNTO(.) PARA DETERMINAR PRECIOS CON DECIMALES"<<endl;
	cout<<" INGRESE EL VALOR DE LA HIPOTENUSA: "<<endl;
	cin>>n1;
	cout<<" INGRESE EL VALOR DEL ANGULO EN GRADOS: "<<endl;
	cin>>n2;
    angulo_radianes = n2 * M_PI / 180.0;
    na = sin(angulo_radianes);
    n3 = n1 * na;
	cout<<" EL ANGULO DEL TRIANGULO RECTANGULO ES DE: "<<n3<<endl;
}

void dato_char (){
	char c1='A';
	char c2='A';
	char c3='A';
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA CREAR CONTRASEÑAS CORTAS"<<endl; 
	cout<<" INGRESE UNA LETRA DE SU PREFERENCIA: "<<endl;
	cin>>c1;
	cout<<" INGRESE UN NUMERO DEL 1 AL 10 DE SU PREFERENCIA: "<<endl;
	cin>>c2;
	cout<< " INGRESE UN SIGNO DE SU PREFERENCIA: "<<endl;
	cin>>c3;
	cout<<" SU CONTRASEÑA ES: "<<c1<<c2<<c3<<endl;
}


void dato_unsigned_char (){
	unsigned char c1='A';
	unsigned char c2='A';
	unsigned char c3='A';
	unsigned char c4='A';
	unsigned char c5='A';
	unsigned char c6='A';
	unsigned char c7='A';
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR EL NUEMRO DE PLACA"<<endl; 
	cout<<" INGRESE LA PRIMERA LETRA DE SU PLACA: "<<endl;
	cin>>c1;
	cout<<" INGRESE LA SEGUNDA LETRA DE SU PLACA: "<<endl;
	cin>>c2;
	cout<<" INGRESE LA TERCERA LETRA DE SU PLACA: "<<endl;
	cin>>c3;
	cout<<" INGRESE EL PRIMERO NUMEROS DESPUES DE LAS LETRAS DE SU PLACA: "<<endl;
	cin>>c4;
	cout<< " INGRESE EL SEGUNDO NUMEROS DESPUES DE LAS LETRAS DE SU PLACA: "<<endl;
	cin>>c5;
	cout<< " INGRESE EL TERCER NUMEROS DESPUES DE LAS LETRAS DE SU PLACA: "<<endl;
	cin>>c6;
	cout<< " INGRESE EL CUARTO NUMEROS DESPUES DE LAS LETRAS DE SU PLACA: "<<endl;
	cin>>c7;
	cout<<" SU PLACA ES: "<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<endl;
}



void dato_bool(){
	bool verd=true;
	cout<<"---------BUENOS DIAS QUERIDO USUARIO---------"<<endl;
	cout<<" PROGRAMA PARA DETERMINAR ACCION PARA EL CUIDADO DEL USUARIO DEPENDIENDO DEL CLIMA"<<endl; 
	cout<<" EL CLIMA ESTA LLUVIENDO, ESCRIBA TRUE(verdadero) O FALSE(falso): "<<endl;
	cin>>verd;
	if (verd=true){
		cout<<" UTILICE UN PARAGUAS Y ABRIGO PORFAVOR"<<endl;
	}else{
		cout<<"UTILICE UNA GORRA Y PROTECTOR SOLAR"<<endl;
	}
}

main(){
	//dato_int_unsigned ();
	//dato_int();
	//dato_short ();
	//dato_short_unsigned ();
	//dato_long ();
	//dato_long_unsigned ();
	//dato_long_long ();
	//dato_long_long_unsigned ();
	//dato_float ();
	//dato_double ();
	//dato_long_double();
	//dato_char ();
	//dato_unsigned_char ();
	dato_bool();
	return 0;
}
