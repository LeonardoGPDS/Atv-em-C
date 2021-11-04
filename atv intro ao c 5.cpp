#include <iostream>
using namespace std;


int main(){
	
	int planeta;
	float peso_terra;
	
	cout << "Digite o seu peso na Terra:";
	cin >> peso_terra;
	
	cout << " \n1-Mercurio \n2-venus \n3-Marte \n4-Jupiter \n5-Saturno \n6-Urano \nEscolha um planeta:";
	cin >> planeta;
	
	switch(planeta){
		case 1:cout << "Seu peso em mercurio é" << peso_terra * 0.37; break;
		case 2:cout << "Seu peso em venus e" << peso_terra * 0.88; break;
		case 3:cout << "Seu peso em Marte e" << peso_terra * 0.38; break;
		case 4:cout << "Seu peso em Jupiter é" << peso_terra * 2.64; break;
		case 5:cout << "Seu peso em Saturno é" << peso_terra * 1.15; break;
		case 6:cout << "Seu peso em Urano é" << peso_terra * 1.17; break;
		default: cout << "Nulo";
		
		
	}
}
