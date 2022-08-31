import main.Cliente;

public class Main {
    public static void main(String[] args) {
        Cliente cliente = new Cliente(2345, "Marcos");
    
        cliente.atualizaLimite(200.00);
        cliente.atualizaSituacao(true);
        cliente.atualizaLimite(200.00);
        cliente.atualizaSituacao(false);
        System.out.printf("\nLimite de R$%.2f%n", cliente.getLimiteDeCredito());
    }
}