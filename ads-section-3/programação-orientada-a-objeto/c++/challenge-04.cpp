#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	string nome;
	int horasTrabalhadas;
	float valorPorHora, valorDescontos;
	
	cout << "Nome: ";
	cin >> nome;

	cout << "Valor por hora: ";
	cin >> valorPorHora;

	cout << "Horas trabalhadas: ";
	cin >> horasTrabalhadas;

	cout << "Desconto: ";
	cin >> valorDescontos;
		
	cout << endl << "Folha de pagamento:" << endl;

	cout << "Nome: " << nome << endl;
	cout << horasTrabalhadas << " horas x R$" << valorPorHora << " = R$" << (horasTrabalhadas*valorPorHora) << endl;
	cout << "Descontos: R$"<< valorDescontos << endl;
	cout << "Total devido: R$" << (horasTrabalhadas*valorPorHora) - valorDescontos << endl;
}
