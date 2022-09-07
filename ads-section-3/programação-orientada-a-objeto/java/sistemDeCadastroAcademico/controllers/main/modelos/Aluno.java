package main.modelos;

public class Aluno extends Pessoa {
    private String matricula;

    public Aluno(){}
    public Aluno(
        String nome,
        String cpf,
        String telefone,
        String email
    ) {
        this.nome = nome;
        this.matricula = cpf;
        this.cpf = cpf;
        this.telefone = telefone;
        this.email = email;
    }

    public String getMatricula() {
        return matricula;
    }

    public String toString() {
        return "| "+this.nome+"\t\t"+this.matricula+" |";
    }
}