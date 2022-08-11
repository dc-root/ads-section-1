#include <iostream>

int main(int argc, char **argv) {
	int qtdePedido;
	int qtdeEstoque;
	int qtdeMinimaPorVenda;

	bool vendaLiberada = qtdePedido <= qtdeEstoque && qtdePedido >= qtdeMinimaPorVenda;

	std::cout << "Entre com o valor do pedido: ";
	std::cin >> qtdePedido;
	
	std::cout << "Entre com o valor do estoque: ";
	std::cin >> qtdeEstoque;

	std::cout << "Entre com o valor minimo por venda: ";
	std::cin >> qtdeMinimaPorVenda;

	std::cout << "Pedido lierado: " << (vendaLiberada ? "True" : "False") << std::endl;

}
