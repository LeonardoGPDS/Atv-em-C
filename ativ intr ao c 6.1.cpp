#include <iostream>
using namespace std;

int main(){


float nota1,nota2,nota3,media;
cout<< "Digite a primeira nota:";
cin>> nota1;

cout<< "Digite a primeira nota:";
cin>> nota2;

cout<< "Digite a primeira nota:";
cin>> nota3;


media = (nota1+nota2+nota3)/3;

	cout << "A media do aluno e de: " << media;

if(media<3)
	cout<<"\n O aluno esta reprovado";
 else if(media >3 && media<7)
	cout<<"\nO aluno esta de exame";
 else if(media >7 && media <=10)
	cout<<"\nO aluno esta aprovado";
	

}
