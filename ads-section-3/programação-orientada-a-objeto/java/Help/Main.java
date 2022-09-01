public class Main {
    public static void main(String[] args) {
        Help teste = new Help("Maria", "Como programar em java?");

        System.out.print(teste.message); // atributo inacessivel(atributo privado)
        System.out.print(teste.getMessage());   // "Como programar em java?"

        teste.message = "Nova messagem"; // tbm não consigo alterar
        teste.setMessage("Nova messagem"); // para isso eu uso o metodo setMessage


        // Exemplo com atributo publico:
        System.out.print(teste.nome); // Maria
        teste.nome = "João";          // nome agora e 'João'
    }
}
