import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;

public class Cores {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        ArrayList<String> primarias = new ArrayList<>(Arrays.asList("amarela", "vermelha", "azul"));
        ArrayList<String> secundarias = new ArrayList<>(Arrays.asList( "laranja", "verde", "roxa"));

        String corEntrada = entrada.nextLine();

        if(primarias.contains(corEntrada.toLowerCase())) {
            System.out.println("primaria");
        } else if (secundarias.contains(corEntrada.toLowerCase())) {
            System.out.println("secundaria");
        } else {
            System.out.println("outra");
        }

        entrada.close();
    }
}
