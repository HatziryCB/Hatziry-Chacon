#include<iostream>

using namespace std;

int main(){
	int merca, depa, tarifa;
	float pesokg, tpeso, largo, ancho, alto, pesov, tvol, preciokg=2.5, preciokm=0.13;
	
	cout<<"\tBienvenido al Servicio de paqueteria de la Empresa P&P"<<endl;
	cout<<"\tPor favor seleccione el tipo de mercaderia que desea transportar"<<endl;
		cout<<"\n1. Documentos"<<endl;
		cout<<"2. Paqueteria"<<endl;
		cout<<"3. Mobiliario"<<endl;
		cout<<"4. Repuestos"<<endl;
		cout<<"5. Articulos electronicos"<<endl;
		cin>>merca;
		
		 	if((merca>=2) or (merca<=5)){
	
			cout<<"1. Tarifa de peso, si conoce el peso en kg de la mercaderia"<<endl;
			cout<<"2. Tarifa Volumen, si tiene conocimiento de las dimenciones de largo, ancho y alto de la mercaderia"<<endl;
			cin>>tarifa;
			}
			else{
				if(merca==1){
				cout<<"La tarifa fija del envio de Documentos es de Q40.00 a cualquier parte del pais";
				}
				}
				
				if(tarifa==1){
				
				cout<<"Ingrese el peso en Kg de la mercaderia"<<endl;
				cin>>pesokg;
				
				if(pesokg>35){
						cout<<"El peso real del producto a transportar sobrepasa los limites establecidos por la empresa";
					}
				else{
				
				cout<<"Ahora por favor ingrese el nombre del departamento donde desea transportar el paquete: "<<endl;
				cout<<"\n1. Guatemala"<<endl;
				cout<<"2. Izabal"<<endl;
				cout<<"3. Peten"<<endl;
				cout<<"4. Chiquimula"<<endl;
				cout<<"5. Retalhuleu"<<endl;
				cin>>depa;
				
				tpeso = (pesokg*preciokg);
				
				switch(depa){
					
					case 1:
						cout<<"El total a pagar es: "<<tpeso+10<<endl;
						cout<<"Distancia hacia Guatemala es de: 10 Km"<<endl;
						cout<<"La mercadería a transportar es: ";break;
					case 2:
						cout<<"El total a pagar es: "<<tpeso+300<<endl;
						cout<<"Distancia hacia Izabal es de: 300 Km"<<endl;
						cout<<"La mercadería a transportar es: ";break;
					case 3:
						cout<<"El total a pagar es: "<<tpeso+460<<endl;
						cout<<"Distancia hacia Peten es de: 460 Km"<<endl;
						cout<<"La mercadería a transportar es: ";break;
					case 4:
						cout<<"El total a pagar es: "<<tpeso+178<<endl;
						cout<<"Distancia hacia Chiquimula es de: 178 Km"<<endl;
						cout<<"La mercadería a transportar es: ";break;
					case 5:
						cout<<"El total a pagar es: "<<tpeso+200<<endl;
						cout<<"Distancia hacia Retalhuleu es de: 200 Km"<<endl;
						cout<<"La mercadería a transportar es: ";break;
					
					}
				
					}
				}
				else{
					if(tarifa==2){
				
					cout<<"Por favor ingrese las siguientes dimensiones de la mercaderia: "<<endl;
					cout<<"\nLargo: "<<endl;
					cin>>largo;
					cout<<"Ancho: "<<endl;
					cin>>ancho;
					cout<<"Altura: "<<endl;
					cin>>alto;
					
					pesov=(largo*ancho*alto)/2272;
					
					if(pesov>50){
						cout<<"El peso volumetrico del producto a transportar sobrepasa los limites establecidos por la empresa";
					}
					else{
					
					cout<<"Ahora por favor ingrese el nombre del departamento donde desea transportar el paquete: "<<endl;
					cout<<"\n1. Guatemala"<<endl;
					cout<<"2. Izabal"<<endl;
					cout<<"3. Peten"<<endl;
					cout<<"4. Chiquimula"<<endl;
					cout<<"5. Retalhuleu"<<endl;
					cin>>depa;
					
					tvol=(pesov*preciokg);
					
					
					switch(depa){
						
						case 1:
							cout<<"El total a pagar es: "<<tvol+10<<endl;
							cout<<"Distancia hacia Guatemala es de: 10 Km"<<endl;
							cout<<"La mercaderia a transportar es: ";break;
						case 2:
							cout<<"El total a pagar es: "<<tvol+300<<endl;
							cout<<"Distancia hacia Izabal es de: 300 Km"<<endl;
							cout<<"La mercaderia a transportar es: ";break;
						case 3:
							cout<<"El total a pagar es: "<<tvol+460<<endl;
							cout<<"Distancia hacia Peten es de: 460 Km"<<endl;
							cout<<"La mercaderia a transportar es: ";break;
						case 4:
							cout<<"El total a pagar es: "<<tvol+178<<endl;
							cout<<"Distancia hacia Chiquimula es de: 178 Km"<<endl;
							cout<<"La mercaderia a transportar es: ";break;
						case 5:
							cout<<"El total a pagar es: "<<tvol+200<<endl;
							cout<<"Distancia hacia Retalhuleu es de: 200 Km"<<endl;
							cout<<"La mercaderia a transportar es: ";break;
					
							}
				
						}
					}	
				}				
							
	return 0;
}