package main.modelos;

public class Professor extends Pessoa {
    private int registro;

    public Professor(){}
    public Professor(
        String nome,
        int registro,
        String cpf,
        String telefone,
        String email
    ) {
        this.nome = nome;
        this.registro = registro;
        this.cpf = cpf;
        this.telefone = telefone;
        this.email = email;
    }
    
    public int getRegistro() {
        return registro;
    }
    public void setRegistro(int registro) {
        this.registro = registro;
    }
}
