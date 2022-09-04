import java.util.Scanner;

class Lanche {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int code = leitor.nextInt();
        int quantidade = leitor.nextInt();
        leitor.close();
        String outputString="";

        switch(code) {
            case 1:
                outputString = String.format("Total: R$ %.2f", (float)quantidade * 4.00);
                break;
            case 2:
                outputString = String.format("Total: R$ %.2f", (float)quantidade * 4.50);
                break;
            case 3:
                outputString = String.format("Total: R$ %.2f", (float)quantidade * 5.00);
                break;
            case 4:
                outputString = String.format("Total: R$ %.2f", (float)quantidade * 2.00);
                break;
            case 5:
                outputString = String.format("Total: R$ %.2f", (float)quantidade * 1.50);
                break;
        }

        System.out.print(outputString);
    }
}