#include<iostream>

using namespace std;

int main(){
	int saldo_pq=5000, saldo_pd=650, pin=2021, clave, moneda;
	float dolar, quetzal, saldoq, saldod, retiro, sfq, sfd;
	cout<<"Bienvenido a su tarjeta de credito, por favor ingresar su clave: "<<endl;
	cin>>clave;
	
	if(clave == pin){
		cout<<"\nHola Hatziry Chacon"<<endl;
		cout<<"Carne: 0909-21-14813"<<endl;
		
		cout<<"Seleccione el tipo de moneda que desea gestionar"<<endl;
		cout<<"\n1. Quetzales."<<endl;
		cout<<"\n2. Dolares."<<endl;
		cout<<"\n3. Salir."<<endl;
		cin>>moneda;
		
		quetzal=retiro*7.73;
		dolar=retiro/7.73;
		
		switch(moneda){
			case 1: 
			cout<<"Ingrese el monto a pagar: "<<endl;
			cin>>retiro;
			
			if(retiro>saldo_pq){
				cout<<"Saldo insuficiente para efectuar esta transaccion"<<endl;
			}
			else{
				saldoq=saldo_pq-retiro;
				dolar=retiro/7.73;
				saldod=saldo_pd-dolar;
				
				
				cout<<"Saldo en cuenta en Quetzales es: "<<saldoq<<endl;
				cout<<"Saldo en cuenta en Dolares es: "<<saldod<<endl;break;		
			}
			
			case 2:
			cout<<"Ingrese el monto a pagar: "<<endl;
			cin>>retiro;
			
			if(retiro>saldo_pd){
				cout<<"Saldo insuficiente para efectuar esta transaccion"<<endl;
			}
			else{
				
				quetzal=retiro*7.73;
				saldoq=saldo_pq-quetzal;
				saldod=saldo_pd-retiro;
				
				
				cout<<"Saldo en cuenta en Dolares es: "<<saldod<<endl;
				cout<<"Saldo en cuenta en Quetzales es: "<<saldoq<<endl;break;
						
				}
			case 3: break;		
			}
			
	}
	else{
			cout<<"Ingrese el pin correcto"<<endl;
		}
	return 0;
}