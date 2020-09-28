#include<iostream>
#include<cmath>
using namespace std;
 main()
{	
	float G,M1,M2,M3;
	float i1X,j1Y;
	float i2X,j2Y;
	float i3X,j3Y;
	float R12X,R12Y,R32X,R32Y;
	float raiz1,raiz3;
	float ur3X,ur3Y;
	float F12X,F12Y;
	float F32X,F32Y;
	float FgX,FgY;
	
	cout<<"Supongamos que tenemos 3 objetos \n";
	cout<<"Vamos a calcular la fuerza gravitatoria \n";
	cout<<"Declaramos la Variable M2 como masa central \n";

	G = 6.67*pow(10,-11);
	
	//cout<<"el rewsu"<<-G;
	
	cout<<"Dime M1 en KG \n";						//Declaramos variables
	cin>>M1;										
	cout<<"Dime M2 en KG \n";
	cin>>M2;
	cout<<"Dime M3 en KG \n";
	cin>>M3;	
	
	cout<<"Dime (1)x en m\n";
	cin>>i1X;
	cout<<"Dime (1)y en m \n";
	cin>>j1Y;
	
	cout<<"Dime (2)x en m \n";
	cin>>i2X;
	cout<<"Dime (2)y en m \n";
	cin>>j2Y;
	
	cout<<"Dime (3)x en m \n";
	cin>>i3X;
	cout<<"Dime (3)y en m \n";
	cin>>j3Y;
	
	R12X = (i2X-i1X);
	R12Y = (j2Y-j1Y);
	
	R32X = (i2X-i3X);
	R32Y = (j2Y-j3Y);

	raiz1 = sqrt(pow(R12X,2)+pow(R12Y,2));
	raiz3 = sqrt(pow(R32X,2)+pow(R32Y,2));
	
//	cout<<"el resultado es:"<<raiz1;
//	cout<<"el resultado es:"<<raiz3;
	
	
/*	Anteriormente hemos declarado todas
	las variables posibles 										
	Ahora tenemos que hacer la ecuacion, cual es:
	(-G *M1 *M2)/R * (UR1)  									
	
	Hasta aqui esta OK
*/	
	
	
/*	problema ENCONTRADO EN 
	LA FORMULA*/
	F12X = ((-G*M1*M2)/(pow(raiz1,2)))*(R12X/raiz1);
	F12Y = ((-G*M1*M2)/(pow(raiz1,2)))*(R12Y/raiz1);
	
	F32X = ((-G*M3*M2)/(pow(raiz3,2))) *(R32X/raiz3);
	F32Y = ((-G*M3*M2)/(pow(raiz3,2))) *(R32Y/raiz3);
	
	
//	cout<<"el resultdo es"<<F12X;
//	cout<<"el resultdo es"<<F12Y;

	FgX = (F12X)+(F32X);
	FgY = (F12Y)+(F32Y);
	
	cout<<"La fuerza total en vector I es: \n"<<FgX;"i \n";
	cout<<"La fuerza total en vector J es: \n"<<FgY;"j \n";
	
	
	return 0;
	
	
	
	
	
	
	
	
	}	
