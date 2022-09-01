import java.util.Scanner;

public class CalculoIMC {
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);

		int genero = leitor.nextInt();
		float peso = leitor.nextFloat();
		float altura = leitor.nextFloat();
		
		float IMC = peso / (altura*altura);
		
		if(genero == 1){
			if(IMC < 20.7)
				System.out.println("Abaixo do peso");
			else if(IMC >= 20.8 && IMC <= 26.4) {
				System.out.println("Peso ideal");
			} else if(IMC >= 26.5 && IMC <= 27.8) {
				System.out.println("Um pouco acima do peso");
			} else if(IMC >= 27.9 && IMC <= 31.1) {
				System.out.println("Acima do peso ideal");
			} else {
				System.out.println("Obeso");
			}
		
		} else {
			if(IMC < 19.1) {
				System.out.println("Abaixo do peso");
			} else if(IMC >= 19.1 && IMC <= 25.8) {
				System.out.println("Peso ideal");

			} else if(IMC >= 25.9 && IMC <= 27.3) {
				System.out.println("Um pouco acima do peso");
			} else if(IMC >= 27.4 && IMC <= 32.3) {
				System.out.println("Acima do peso ideal");
			} else {
				System.out.println("Obeso");
			}
		}

		leitor.close();
	}
}