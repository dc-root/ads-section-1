import java.util.Scanner;

public class EntradaCodicionalFinita {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int sumNumber=0;
        int numInput = 0;
	    int count =0;

        while (count != 10) {
            numInput = read.nextInt();
            if(numInput % 2 == 0) {
                sumNumber += numInput;
                count++;
            }
        }

        read.close();
	    System.out.printf("%d", sumNumber);
    }
}
