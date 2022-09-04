import java.util.Scanner;

public class OMaior {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        
        int num,
            maiorNumero=0;

        for(int i=0; i<3; i++) {
            num = leitor.nextInt();
            
            if(maiorNumero < num) {
                maiorNumero = num;
            }
        }

        leitor.close();
        System.out.printf("%d eh o maior", maiorNumero);
    }
}