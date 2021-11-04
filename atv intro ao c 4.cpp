#include <iostream>
using namespace std;


int main(){
	
	float salario_base,valor_hora,salario_mes,hora_extra,salario_bruto,IRRF,salario_liquido, gratificacao,salario_receber;
	int horas_trabalhadas, dependentes, qtd_extras;
	
	cout << "\n Informe o valor do salario base";
	cin >> salario_base;
	
	cout<< "informe o numero de horas trabalhadas";
	cin >> horas_trabalhadas;
	
	cout<< "informe o numero de dependentes";
	cin >> dependentes;
	
	cout<< "informe qtd de horas extras";
	cin >> qtd_extras;
	
	
	valor_hora = salario_base/5;
	
	salario_mes = horas_trabalhadas * valor_hora;
	
	salario_mes = salario_mes + 32 * dependentes;
	
	hora_extra = qtd_extras * (valor_hora*1.50);
	
	salario_bruto = salario_mes = hora_extra;
	
	if(salario_bruto <2000)
		 IRRF = 0;
	else if (salario_bruto >=2000 && salario_bruto < 5000)
		IRRF = salario_bruto * 0.1;
	 else if(salario_bruto > 5000)
	 	IRRF = salario_bruto * 0.2;
	
	salario_liquido = salario_bruto - IRRF;
	
	if(salario_liquido <= 3500)
		gratificacao = 1000;
	else
		gratificacao = 500;
		
	salario_receber = salario_liquido + gratificacao;
	
	cout << "valor a receber:  R$" << salario_receber;
	

	
}
