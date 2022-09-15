import java.util.Scanner;
import java.lang.Math;

public class SalarioComBonus {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);

		String nomeDoVendedo = leitor.nextLine();
		float salarioFixo = leitor.nextFloat();
		float totalDeVendas = leitor.nextFloat();

		float totalAReceber = (float)(Math.floor((salarioFixo + (totalDeVendas * .15))*10.0)/10.0);
		System.out.printf("TOTAL = R$ %.2f\n\n\n", totalAReceber);
	}
}
