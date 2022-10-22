import java.util.Scanner;
import java.lang.Math;

public class SalarioComBonus {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);

		String nomeDoVendedo = leitor.nextLine();
		float salarioFixo = leitor.nextFloat();
		float totalDeVendas = leitor.nextFloat();

		float totalAReceber = (float)((salarioFixo + (totalDeVendas * .15)));
		System.out.printf("TOTAL = R$ %.2f\n\n", totalAReceber);
		leitor.close();
	}
}
