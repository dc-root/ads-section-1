import java.util.Scanner;

public class AvaliacaoAtendimento {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		System.out.print("Avalie o nosso atendimento(1-5): ");
		int nota = leitor.nextInt();
		String descricaoNota = switch(nota) {
			case 1 -> "Muito ruim";
			case 2 -> "Ruim";
			case 3 -> "Razoável";
			case 4 -> "Muito Bom";
			case 5 -> "Excelente";
			default -> "Opção invalida";
		};

		leitor.close();

		System.out.printf("Sua nota foi: %d - %s%n", nota, descricaoNota);
	}
}
