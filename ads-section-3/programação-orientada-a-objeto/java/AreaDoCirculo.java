import java.util.Scanner;
import java.lang.Math;

public class AreaDoCirculo {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);

		double R = (Math.round(leitor.nextDouble()*100.0)/100.0);
		double A = (3.14159 * (R*R));

		System.out.printf("A=%.4f", A);
	}
}
