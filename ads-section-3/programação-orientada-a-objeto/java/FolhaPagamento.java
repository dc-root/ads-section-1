import java.util.Scanner;

public class FolhaPagamento {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);

		System.out.println("Nome do funcionario: ");
		String nome = leitor.nextLine();
	
		System.out.println("Valor por hora: ");
		float valorPorHora = leitor.nextFloat();

		System.out.println("Horas trabalhadas: ");
		int horasTrabalhadas = leitor.nextInt();

		System.out.println("Desconto: ");
		float valorDescontos = leitor.nextFloat();

		leitor.close();
		
		System.out.printf("\nFolha de pagamento:\n");
		System.out.printf("Nome: %s\n", nome);
		System.out.printf("%d horas x R$%.2f = R$%.2f\n", horasTrabalhadas, valorPorHora, (horasTrabalhadas*valorPorHora));
		System.out.printf("Descontos: R$%.2f\n", valorDescontos);
		System.out.printf("Total devido: R$%.2f", (horasTrabalhadas*valorPorHora) - valorDescontos);
	}
}
