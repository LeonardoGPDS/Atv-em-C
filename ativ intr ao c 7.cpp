#include <iostream>
using namespace std;

int main(){


int idade;
cout<< "digite sua idade:";
cin>>idade;


	cout << "Sua idade  e de:  " << idade ;

if(idade >5 && idade <=7)
	cout<<"\nSua categoria e: <INFANTIL>";
else if(idade >8 && idade <=10)
	cout<<"\nSua categoria e: <JUVENIL>";
else if(idade >11 && idade <=15)
	cout<<"\nSua categoria e: <ADOLESCENTE>";
else if(idade >16 && idade <=30)
	cout<<"\nSua categoria e: <ADULTO>";
else if(idade >30)
	cout<<"\nSua categoria e: <SENIOR>";			
}
