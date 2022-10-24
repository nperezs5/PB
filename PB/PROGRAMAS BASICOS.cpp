#include <iostream>
using namespace std;
int main () {
	/*
	 int opcion;
float primero=1;
float segundo=1;
float resultado;
int main(){
cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]." << endl;
cin >> opcion;
cout << "Ingrese un numero: ";
cin >> primero;
cout << "Ingrese un numero: ";
cin >> segundo;
if (opcion==1){
    resultado = primero+segundo;
}
if (opcion==2){
    resultado = primero-segundo;
}
if (opcion==3){
    resultado = primero*segundo;
}
if (opcion==4){
    resultado = primero/segundo;
}
cout << resultado;
*/
/*
int numero=200;
int main(){
div_t resultado;
resultado=div(numero,2);
if (resultado.rem>0)
{
cout << numero << " es impar" << endl;
}
else {
    cout << numero << " es par" << endl;
}
cin.get();
}
*/
/*
  int i=0,j=0;
    string palabra=" ";
    cout<<"ingrese palabra "<<endl;
    cin >> palabra;
    for(i=0;i<palabra.length();i++){
        for(j=palabra.length()-1;j>=0;j--){
            if(palabra[i]==palabra[j]){
                cout<<"es palindroma "<<endl;
            }
            else{
                cout<<"no lo es "<<endl;
            }
        }
    }   
}
*/
/*
int main(){
	while(1){
		int numero,unidades,decenas,centenas,millares;
		
		cout << "\nIngresa un numero entre [1-3999] para convertirlo a romano: ";
		cin >> numero;
		
		unidades = numero%10; numero /= 10;
		decenas = numero%10; numero /= 10;
		centenas = numero%10; numero /= 10;
		millares = numero%10; numero /= 10;
		
		switch(millares){
			case 1: cout << "M"; break;
			case 2: cout << "MM"; break;
			case 3: cout << "MMM"; break;
		}
		
		switch(centenas){
			case 1: cout << "C"; break;
			case 2: cout << "CC"; break;
			case 3: cout << "CCC"; break;
			case 4: cout << "CD"; break;
			case 5: cout << "D"; break;
			case 6: cout << "DC"; break;
			case 7: cout << "DCC"; break;
			case 8: cout << "DCCC"; break;
			case 9: cout << "CM"; break;
		}
		
		switch(decenas){
			case 1: cout << "X"; break;
			case 2: cout << "XX"; break;
			case 3: cout << "XXX"; break;
			case 4: cout << "XL"; break;
			case 5: cout << "L"; break;
			case 6: cout << "LX"; break;
			case 7: cout << "LXX"; break;
			case 8: cout << "LXXX"; break;
			case 9: cout << "XC"; break;
		}
		
		switch(unidades){
			case 1: cout << "I"; break;
			case 2: cout << "II"; break;
			case 3: cout << "III"; break;
			case 4: cout << "IV"; break;
			case 5: cout << "V"; break;
			case 6: cout << "VI"; break;
			case 7: cout << "VII"; break;
			case 8: cout << "VIII"; break;
			case 9: cout << "IX"; break;
		}
		
	}
}
*/
/*
int main()
{
	int x;
	cout<<"ingrese un numero"<<endl;
	cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else

	{
		if(x>=900)	{cout<<"NOVECIENTOS "	;x=x-900;}
   	   else if(x>=800)	{cout<<"OCHOCIENTOS "	;x=x-800;}
	   else if(x>=700)	{cout<<"SETECIENTOS "	;x=x-700;}
	   else if(x>=600)	{cout<<"SEISCIENTOS "	;x=x-600;}
	   else if(x>=500)	{cout<<"QUINIENTOS "	;x=x-500;}
	   else if(x>=400)	{cout<<"CUATROCIENTOS "	;x=x-400;}
	   else if(x>=300)	{cout<<"TRESCIENTOS "	;x=x-300;}
	   else if(x>=200)	{cout<<"DOSCIENTOS "	;x=x-200;}
	   else if(x>100)	{cout<<"CIENTO "	;x=x-100;}
	   else if(x==100)	{cout<<"CIEN"		;x=x-100;}
		if(x>90)	{cout<<"NOVENTA Y "	;x=x-90; }
	    	if(x==90)	{cout<<"NOVENTA"	;x=x-90; }  
	    	if(x>80)	{cout<<"OCHENTA Y "	;x=x-80; }
	    	if(x==80)	{cout<<"OCHENTA"	;x=x-80; }
	    	if(x>70)	{cout<<"SETENTA Y "	;x=x-70; }
	    	if(x==70)	{cout<<"SETENTA"	;x=x-70; }
	    	if(x>60)	{cout<<"SESENTA Y "	;x=x-60; }
	    	if(x==60)	{cout<<"SESENTA"	;x=x-60; }
	    	if(x>50)	{cout<<"CINCUENTA Y "	;x=x-50; }
	    	if(x==50)	{cout<<"CINCUENTA"	;x=x-50; }
	    	if(x>40)	{cout<<"CUARENTA Y "	;x=x-40; }
	    	if(x==40)	{cout<<"CUARENTA"	;x=x-40; }
	    	if(x>30)	{cout<<"TREINTA Y "	;x=x-30; }
	    	if(x==30)	{cout<<"TREINTA"	;x=x-30; }
	    	if(x>20)	{cout<<"VEINTI"		;x=x-20; }
	    	if(x==20)	{cout<<"VEINTE"		;x=x-20; }
		if(x>=16)	{cout<<"DIECI"		;x=x-10; }
	   else if(x==15)	{cout<<"QUINCE"		;x=x-15; }
	   else if(x==14)	{cout<<"CATORCE"	;x=x-14; }
	   else if(x==13)	{cout<<"TRECE"		;x=x-13; } 
	   else if(x==12)	{cout<<"DOCE"		;x=x-12; }
	   else if(x==11)	{cout<<"ONCE"		;x=x-11; }
	   else if(x==10)	{cout<<"DIEZ"		;x=x-10; }		
		if(x==9)	{cout<<"NUEVE"		;x=x-9;  }
		if(x==8)	{cout<<"OCHO"		;x=x-8;  }
		if(x==7)	{cout<<"SIETE"		;x=x-7;  }
	    	if(x==6)	{cout<<"SEIS"		;x=x-6;  }
	   else if(x==5)	{cout<<"CINCO"		;x=x-5;  }
	   else if(x==4)	{cout<<"CUATRO"		;x=x-4;	 }
	   else if(x==3)	{cout<<"TRES"		;x=x-3;	 }
	   else if(x==2)	{cout<<"DOS"		;x=x-2;	 }
	   else if(x==1)	{cout<<"UNO"		;x=x-1;	 }
	   }
    cout<<endl;
cin.ignore();return 0;
}
*/
/*
#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2
#define CENTENAS 1
 
using namespace std;
 
void pausar()
{
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
}
 
int main(int argc, char* argv[])
{
    //Cadenas constantes
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenaDecenas[9][15]={"once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
 
    int parteEntera,parteDecimal;
    double num;
 
    //Pido un valor dentro del rango valido
    do{
        cout << "Introduce un numero (0 a 9999.99): ";
        cin >> num;
        if(num < LIMITE_INF || num >= LIMITE_SUP)
            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
    }while(num < LIMITE_INF || num >= LIMITE_SUP);
 
    //Separo la parte entera y la parte decimal truncando la decimal y quedandome solo con dos decimales
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
    string salida;
 
    //Separo los digitos enteros
    int digitos[N_DIGITOS_ENTERO];
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
        digitos[i]=parteEntera%10;
 
    //Concateno la cadena a partir de sus digitos
    bool termina=false;
    for(int i=0; i<N_DIGITOS_ENTERO && !termina; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: //Si es un cero no hacemos nada excepto que sea la unidad y el resto de posiciones tambien sea cero
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ //Busco para saber si hay algun digito diferente de 0
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) //Si no hay ningun digito diferente de 0 coloco 'cero' en la cadena de salida
                        salida += cadenas[i][digitos[i]];
                }
                break;
            default: //Si no es cero el digito
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ //Busco si despues de dicho digito hay algun digito diferente de 0
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ //Si existe algun digito diferente de 0 detras de en el que estoy ahora...
                    if(digitos[i]==1 && i == CENTENAS){ //Si es 1 y no son las unidades cojo del segundo array de cadenas para crear una cadena compuesta
                        salida += "ciento ";
                    }else if(i==DECENAS){ //Si la decena es 2 uso la cadena "veinti" para crear una cadena compuesta
                        switch(digitos[i]){
                            case 1: //Si es 1 uso las cadenas oportunas para las decenas compuestas
                                salida += cadenaDecenas[digitos[i+1]-1];
                                termina=true;
                                break;
                            case 2: //Si es 2 uso la cadena oportuna para las veintenas compuestas
                                salida += "veinti";
                                break;
                        }
                    }else{ //Para cualquier otro valor
                        salida += cadenas[i][digitos[i]]; //Inserto la cadena correspondiente
                        if(i==DECENAS) //Si es las decenas coloco la cadena "y "
                            salida += "y ";
                    }
                }else{ //Si no existe ningun digito diferente de 0 detras del actual
                    salida += cadenas[i][digitos[i]]; //Inserto la cadena que le corresponda
                }
        }
 
    }
    //En caso de añadir una parte a la cadena la cual tiene un espacio detras y luego no añadir nada despues
    //nos dejaria con una cadena terminada con un espacio asi que solo añado un espacio cuando esta no acabe
    //ya en espacio
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
    //Añado la cadena de la parte decimal
    cout << salida << parteDecimal << "/100"<< endl;
}
*/
/*
int main()
{
    unsigned int decimal = 65;
    const int n = 8;

    std::string binary = std::bitset<n>(decimal).to_string();

    std::cout << binary << std::endl;        // 01000001
 
}
*/
/*
int main()
{
 sf::Vector2f posicion = ball.getPosition();//posición actual  del circulo
  x = posicion.x; 
  y = posicion.y;
  if (x == max_x - r_ball * 2 || x < min_x)//r_ball*2 toma en cuenta el diámetro del circulo
   movx *= -1;
  if (y == max_y - r_ball * 2 || y < min_y)
   movy *= -1;
  ball.move(movx, movy);//mueve el circulo de su posición actual
        //de  acuerdo al valores de incremento movx y movy    
  window.clear();
  window.draw(ball);
  window.display();
 }//window.isOpen
}
*/
/*
double saldo(double retiro,double deposito,double saldot)
{
   system("clear");
    saldot=saldot+deposito-retiro;
    return saldot; 
} 
double deposit(double saldot)
{    
    double dep=0;
    char sn;
    do
    {
LDeposito:
    system("clear");
    cout<<"Ingrese cantidad a Depositar: ";
    cin>>dep;  
    while(dep<=0)
    {
        cout<<"Desea ingresar un valor valido s/S n/N: ";
        cin>>sn;
        if(sn=='S'||sn=='s')
            goto LDeposito;
        else
            exit(0);
    }
    saldot=saldo(0,dep,saldot);
    cout<<"Desea realizar otro deposito s/S n/N: ";cin>>sn;
    }while(sn=='s'||sn=='S');    
return saldot;
} 
double retiro(double saldot)
{
    double retir=0;
        char sn;
        system("clear");
        if (saldot==0)
        {cout<<"Ud. no cuenta con saldo \n";
            cout<<"Desea realizar otra operacion s/S n/N: ";cin>>sn;
            if(sn=='S'||sn=='s')
            {
            system("clear");
            main();
            }
            else
            exit(0);
         
        }
        do
        {
            LRetir:
            system("clear");
            cout<<"Ingrese cantidad a Retirar: ";
            cin>>retir;
 
            while(saldot<retir)
            {   
                cout<<"Ud. no cuenta con saldo suficiente para hacer ese retiro\n";
                goto reintentar;
            }
             
            while(retir<=0)
            {
            reintentar:
                cout<<"Desea ingresar un valor valido s/S n/N: ";
                cin>>sn;
                if(sn=='S'||sn=='s')
                    goto LRetir;
                else
                    exit(0);    
            }
            saldot=saldo(retir,0,saldot);
            cout<<"Desea realizar otro retiro s/S n/N: ";cin>>sn;
        }while(sn=='s'||sn=='S');
     
return saldot;
}
double Option(int option1,double saldot)
{
    switch(option1)
    {
    case 1:saldot=deposit(saldot);break;
    case 2:saldot=retiro(saldot);break;
    case 3: {
            saldot=saldo(0,0,saldot);
            cout<<"Usted cuenta con :"<<saldot<<" dolares\n";
            }break;
    case 4:{system("clear");cout<<"Cerrando Sistema...";exit(0);}break;
    }        
return saldot;
}
int main()
{
    int opt;
    char sn;
    double saldot=0;    
    do
    {
    system("clear");
    cout<<"\t\t\tOperaciones Bancarias\n";
    cout<<"1. Deposito\n";
    cout<<"2. Retiro\n";
    cout<<"3. Saldo\n";
    cout<<"4. Salir\n\n";
    cout<<"Elija el numero de la opcion: ";cin>>opt;
    saldot=Option(opt,saldot);
    cout<<"Desea continuar con otra operacion s/S n/N: ";cin>>sn;
    }while(sn=='s'||sn=='S');
    system("clear");
    cout<<"Cerrando Sistema...\n";exit(0);
}
*/
/*
int main() {
  float c1,c2,hipo=0; 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2; 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
  cout << "La hipotenusa es " << hipo << endl;
}
*/
		/*
	//i++;i+=1 para incrementar el valor 
	for(int i=0;i<10;i++){
		cout<<"ciclo: "<<i<<endl;
		}
		cout<<"_________________"<<endl;
	for(int i=10;i>=0;i--){ // 10 hasta 0
	cout<<"Ciclo : "<<i<< endl;
		
		}
	*/
	/*
	for(int i=0;i<=10;i++){ // 0 hasta 10
	if(i==5){
		cout<<"salga del ciclo"<<endl;
		break;
		
	}
cout<<"Ciclo : "<<i<< endl;
}
cout<<"Fuera del for"<<endl;
*/
/*
for(int i=0;i<=10;i++){ // 0 hasta 10
	if(i==5){
		cout<<"salga de la iteracion"<<endl;
		continue;
		
	}
cout<<"Ciclo : "<<i<< endl;
}
cout<<"Fuera del for"<<endl;
*/
/*
int tam=5;
int datos[tam] = {8,12,78,100,250};
 for (int i=0;i<tam;i++){
 	cout<<datos[i]<<endl;
 }
*/
/*
int tam=0;
int datos[] = {8,12,250,335,1000}; // sizeof determina el tamño en bytes del objeto
// int = 4 bytes 5 X 4 = 20 bytes
tam = sizeof(datos) / sizeof(datos[0]);
 for (int i=0;i<tam;i++){
 	cout<<datos[i]<<endl;
 }
*/
/*
int tam=5;
int datos[tam] = {8,12,78,100,250};
cout<<datos[0]<<endl;
cout<<datos[1]<<endl;
cout<<datos[2]<<endl;
cout<<datos[3]<<endl;
cout<<datos[4]<<endl;
}
*/
// Tool -> compiler options ->Settings -> Code Generation -> language standard (-std) : ISO c++ 11
/*
int datos[] = {8,12,250,335,1000}; 

 for (int i : datos){
 	cout<<i<<endl;
 }
 }
*/
/*
int tabla=0,res=0;
 cout<<"Ingrese tabla:";
 cin>>tabla;
 for (int i=1;i<=10;i++){
 	res = tabla*i;
 	cout<<tabla<< " X "<<i<<" = "<<res<<endl;
 	
 }
 */
 /*
 int inicio=0,fin=0,res=0;
 cout<<"Ingrese la tabla inicial:";
 cin>>inicio; //1
 cout<<"Ingrese la tabla final:";
 cin>>fin; // 10
 
 for (int tabla=inicio;tabla<=fin;tabla++){
 	cout<<"Esta es la Tabla del "<<tabla<<endl;
 	for (int i=1;i<=10;i++){
 	res = tabla*i;
 	cout<<tabla<< " X "<<i<<" = "<<res<<endl;
 	
 }
   }
*/
/*
int i=0;
 while(i<=10){ 
 cout<<"ciclo : "<<i<<endl;
 	i++;
 }
*/
/*
int i=10;
 while(i>=0){ 
 	cout<<"ciclo : "<<i<<endl;
 	i--;
 }
 */
 /*
 int i=11;
 do{ 
 	cout<<"ciclo do while : "<<i<<endl;
 	i++;
 }while(i<=10);
 
 cout<<"_______________"<<endl;
 int ii = 11;
 while(ii<=10){
 	cout<<"ciclo while: "<<ii<<endl;
 	ii++;
 }
*/
/*
char res;
 do{ 
 	cout<<"Desea ingresar otro valor (s/n):";
 	cin>>res;
 	
 }while(res=='s' || res=='S');
 */
 /*
 char res='s';
 while(res=='s'){ 
 	cout<<"Desea ingresar otro valor (s/n):";
 	cin>>res;
 	
 }
*/
/*
char res='s';
 while(res=='s' || res=='S'){ 
 	cout<<"Desea ingresar otro valor (s/n):";
 	cin>>res;
 }
 */
 /*
 int tabla=0,res=0, i=1;
 cout<<"Ingrese tabla:";
 cin>>tabla;
 cout<<"tabla con While"<<endl;
 while (i<=10){
 	res = tabla*i;
 	cout<<tabla<< " X "<<i<<" = "<<res<<endl;
 	i++;
 }
 */
 /*
int n1, n2, n3, r1, r2, r3, res;		
	cout<<"Ingrese el multiplicando"<<endl;
	cin>>n1;	 
	cout<<"Ingrese el decimal del multiplicador"<<endl;
	cin>>n2;	
	cout<<"Ingrese la unidad del multiplicador"<<endl;
	cin>>n3;	
	r1 = n1 * n2;
	r2 = n1 * n3;
	r3 = r1 * 10;
	res = r2 + r3;	
	cout<<"El resultado de la suma es: "<<endl;
	cout<<""<<endl;
	cout<<" "<<n1<<endl;
	cout<<"X"<<n2<<n3<<endl;
	cout<<"-----"<<endl;	
    cout<<" "<<r2<<endl;
    cout<<r1<<endl;
	cout<<"-------"<<endl;
	cout<<res<<endl;		
}
*/