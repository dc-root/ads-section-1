import java.util.Scanner;

public class AnoBissexto {
	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);

		Syste.out.print("Digite um ano: ");
		int nowYear = entrada.nextInt();

		System.out.printf("Bissexto: %b", (nowYear % 400 == 0 ? true : ((nowYear % 4 == 0) && (nowYear % 100 != 0)) ? true : false));
	}
}
