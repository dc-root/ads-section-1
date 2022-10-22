import java.util.Scanner;

public class EntradaVareavelInteiro {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int sumNumber =0;
        int numInput =0;

        while (sumNumber <= 100) {
            numInput = read.nextInt();
            sumNumber += numInput;
        }

        read.close();
	    System.out.printf("%d", sumNumber);
    }
}
