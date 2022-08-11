import java.util.Scanner;

public class Programa {
	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);

		int qtddePedido;
		int qtddeEstoque;
		int qtdeMinimaPorVenda;

		System.out.print("Entre com o valor do pedido: ");
		qtddePedido = entrada.nextInt();

		System.out.print("Entre com o valor do estoque: "); 
		qtddeEstoque = entrada.nextInt(); 

		System.out.print("Entre com a quantidade mínima por venda: ");
		qtdeMinimaPorVenda = entrada.nextInt();

		boolean vendaLiberada = qtddePedido <= qtddeEstoque && qtddePedido >= qtdeMinimaPorVenda;

		System.out.println("Pedidod Liberado: "+vendaLiberada);
	}
}
