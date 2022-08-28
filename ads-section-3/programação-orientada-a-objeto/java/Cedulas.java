import java.util.Scanner;

public class Cedulas {
    public static int CalcCheckCeduleCount(int valorEmReais, int countCedulas, int Cedula) {
        countCedulas = valorEmReais / Cedula;
        valorEmReais = valorEmReais % Cedula;

        System.out.printf("%d nota%s de R$ %d,00\n", countCedulas, (countCedulas > 1 ? "s" : ""), Cedula);
        return valorEmReais;
    }
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        
        int valorEmReais = leitor.nextInt();
        int countCedulas=0;
        
        System.out.println(valorEmReais);

        valorEmReais = CalcCheckCeduleCount(valorEmReais, countCedulas, 100);
        valorEmReais = CalcCheckCeduleCount(valorEmReais, countCedulas, 50);
        valorEmReais = CalcCheckCeduleCount(valorEmReais, countCedulas, 20);
        valorEmReais = CalcCheckCeduleCount(valorEmReais, countCedulas, 10);
        valorEmReais = CalcCheckCeduleCount(valorEmReais, countCedulas, 5);
        valorEmReais = CalcCheckCeduleCount(valorEmReais, countCedulas, 2);
        valorEmReais = CalcCheckCeduleCount(valorEmReais, countCedulas, 1);

        leitor.close();
    }
}