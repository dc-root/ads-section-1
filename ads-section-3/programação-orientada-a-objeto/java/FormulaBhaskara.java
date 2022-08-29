import java.util.*;
import java.lang.Math;

public class FormulaBhaskara {
    public static void discriminanteFunction(double a, double b, double c) {
        double delta, R1=0, R2=0;
        delta = Math.pow(b, 2) - (4*a*c);

        if((2*a == 0.0) || (delta < 0)) {
            System.out.println("Impossivel calcular");
        } else {
            R1 = ((-(b) + Math.sqrt(delta)) / (2 * a));
            R2 = ((-(b) - Math.sqrt(delta)) / (2 * a));

            System.out.printf("R1 = %.5f\n", R1);
            System.out.printf("R2 = %.5f", R2);
        }
    }
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        double a=leitor.nextDouble(),
               b=leitor.nextDouble(),
               c=leitor.nextDouble();
        
        discriminanteFunction(a, b, c);
        leitor.close();
    }
}
