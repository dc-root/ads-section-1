import java.util.Scanner;

public class AnoBissexto {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);

		System.out.print("Digite um ano: ");
		int nowYear = leitor.nextInt();

		System.out.printf("Bissexto: %b%n", (nowYear % 400 == 0 ? true : ((nowYear % 4 == 0) && (nowYear % 100 != 0)) ? true : false));
		leitor.close();
	}
}
