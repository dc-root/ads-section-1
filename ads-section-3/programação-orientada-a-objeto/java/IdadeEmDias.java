import java.util.Scanner;

public class IdadeEmDias {
    public static void formatParserIdade(int dias) {
        int meses=0, anos=0;

        anos = dias / 365;
        dias -= anos * 365;
        meses = dias / 30;
        dias -= meses * 30;

        System.out.printf("%d ano(s)\n%d mes(es)\n%d dia(s)%n",  anos, meses, dias);
    }
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int idadeEmDias = leitor.nextInt();
        formatParserIdade(idadeEmDias);

        leitor.close();
    }
}