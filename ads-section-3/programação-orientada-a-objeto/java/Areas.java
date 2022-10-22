import java.util.Scanner;
import java.lang.Math;

public class Areas {
    public static float areaTrianguloReatangulo(float base, float altura) {
        return (float)((base * altura) / 2);
    }

    public static float areaCirculo(float raio) {
        return (float)(3.14159 * Math.pow(raio, 2));
    }

    public static float areaTrapezio(float Base1, float Base2, float altura) {
        return (float)((1.0/2.0) * altura * (Base1+Base2));
    }
    
    public static float areaQuadrado(float lado) {
        return (float)(Math.pow(lado, 2));
    }
    public static float areaRetangulo(float base, float altura) {
        return (float)(base * altura);
    }

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        
        float A = entrada.nextFloat();
        float B = entrada.nextFloat();
        float C = entrada.nextFloat();

        System.out.printf("TRIANGULO: %.3f\n", areaTrianguloReatangulo(A, C));
        System.out.printf("CIRCULO: %.3f\n", areaCirculo(C));
        System.out.printf("TRAPEZIO: %.3f\n", areaTrapezio(A, B, C));
        System.out.printf("QUADRADO: %.3f\n", areaQuadrado(B));
        System.out.printf("RETANGULO: %.3f\n", areaRetangulo(A, B));
        entrada.close();
    }
}
