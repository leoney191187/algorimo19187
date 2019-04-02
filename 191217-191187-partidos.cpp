#include <iostream>


using namespace std;

int matrizA[5][4];

int datos();
int impresion();
int totalpuntos();
int imprimirPuntosF(int Tpuntos, int n);
main(){
	datos();
	impresion();
	totalpuntos();
	
}

int datos(){
	cout<<"llenado de datos"<<endl;
	for (int f=0;f<5;f++){
		for(int c=0;c<4;c++){
			cout<<">";
			cin>>matrizA[f][c];
		}
	}
}

 int impresion(){
 	int n=0,i=0;
 	cout<<"-------------  "<<" PJ \tPG\tE\tP"<<endl;
 	cout<<"Equipo"<<endl;
 	for (int f=0;f<5;f++){
 		
		for(int c=0;c<4;c++){
			//cout<<"\t "<<matrizA[f][c];
		
		switch (n){
		case 0 :
			if (i==0){
			cout<<"Barcelona : ";
			}
			cout<<"\t"<<matrizA[f][c];
			break;
		case 1 :
			if(i==4){
				cout<<"Atletico : ";
			}
			cout<<"\t"<<matrizA[f][c];
			break;
		case 2:
			if(i==8){
				cout<<"Real madrid : ";
			}
			cout<<"\t"<<matrizA[f][c];
			break;
		case 3 :
			if (i==12){
				cout<<"Getafet : ";
			}
			 cout<<"\t"<<matrizA[f][c];
			break;
		case 4 :
			if(i==16){
				cout<<"Alaves : ";
			}
			cout<<"\t"<<matrizA[f][c];
			break;
		}
	i+=1;
		}
		
		n+=1;
		cout<<"\n"<<endl;
	}
 }

int totalpuntos(){
	int Tpuntos,n=0,i=0;
	for (int f=0;f<5;f++){
		Tpuntos=(matrizA[f][1]*3)+(matrizA[f][2]);
		imprimirPuntosF(Tpuntos,n);
		n+=1;
	}
	
}

int imprimirPuntosF(int Tpuntos,int n){
	switch (n){
		case 0 :
			cout<<"Barcelona"<<"\t:"<<Tpuntos<<endl;
			break;
		case 1 :
			cout<<"Atletico"<<"\t:"<<Tpuntos<<endl;
			break;
		case 2:
			cout<<"Real madrid"<<"\t:"<<Tpuntos<<endl;
			break;
		case 3 :
			cout<<"Getafet  "<<"\t:"<<Tpuntos<<endl;
			break;
		case 4 :
			cout<<"Alaves  "<<"\t:"<<Tpuntos<<endl;
			break;
	}
}
