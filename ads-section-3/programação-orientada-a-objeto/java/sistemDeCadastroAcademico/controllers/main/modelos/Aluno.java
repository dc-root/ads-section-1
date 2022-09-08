package main.modelos;

import java.util.Objects;

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

    // Getts e Setts
    public String getMatricula() {
        return matricula;
    }

    public String toString() {
        return "| "+this.nome+" "+this.matricula;
    }
    public boolean equals(Object myObject) {
        if(this == myObject) return true;
        if(myObject == null || this.getClass() != myObject.getClass()) return false;

        Aluno aluno = (Aluno) myObject;
        return Objects.equals(this.matricula, aluno.matricula);
    }
    public int hashCode() {
        return Objects.hash(this.matricula);
    }
}