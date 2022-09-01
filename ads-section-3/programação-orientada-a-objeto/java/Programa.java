import java.util.Scanner;

public class Programa {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);

		int qtddePedido;
		int qtddeEstoque;
		int qtdeMinimaPorVenda;

		System.out.print("Entre com o valor do pedido: ");
		qtddePedido = leitor.nextInt();

		System.out.print("Entre com o valor do estoque: "); 
		qtddeEstoque = leitor.nextInt(); 

		System.out.print("Entre com a quantidade mínima por venda: ");
		qtdeMinimaPorVenda = leitor.nextInt();

		leitor.close();
		boolean vendaLiberada = qtddePedido <= qtddeEstoque && qtddePedido >= qtdeMinimaPorVenda;

		System.out.println("Pedidod Liberado: "+vendaLiberada);
	}
}
