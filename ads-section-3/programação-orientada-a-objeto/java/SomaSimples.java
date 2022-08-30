import java.util.Scanner;
public class SomaSimples {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int A=leitor.nextInt(),
            B=leitor.nextInt();

        int X = A + B;
        System.out.printf("X = %d\n", X);
        leitor.close();
    }
}