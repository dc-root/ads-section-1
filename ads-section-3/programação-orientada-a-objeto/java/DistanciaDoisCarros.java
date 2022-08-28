import java.util.Scanner;

public class DistanciaDoisCarros {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		int  km = leitor.nextInt();
		
		int minuto = (60 * km) / 30;
		System.out.println(minuto + " minutos");

		leitor.close();
	}
}
