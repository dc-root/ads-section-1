package main.modelos;

import java.util.Objects;

public class Professor extends Pessoa {
    private String registro;
    private String disciplina;

    // private Turma turma;

    public Professor(){}
    public Professor(
        String nome,
        String cpf,
        String telefone,
        String email,
        String disciplina
    ) {
        this.nome = nome;
        this.registro = cpf;
        this.cpf = cpf;
        this.telefone = telefone;
        this.email = email;
        this.disciplina = disciplina;
    }
    public Professor(
        String nome,
        String telefone,
        String email,
        String disciplina
    ) {
        this.nome = nome;
        this.telefone = telefone;
        this.email = email;
        this.disciplina = disciplina;
    }
    // Getts e Setts
    public String getRegistro() {
        return registro;
    }
    public void setRegistro(String registro) {
        this.registro = registro;
    }
    public String getDisciplina() {
        return disciplina;
    }
    public void setDisciplina(String disciplina) {
        this.disciplina = disciplina;
    }

    // public Turma getTurma() {
    //     return this.turma;
    // }
    // protected void receberTurma(Turma turma) {
    //     this.turma = turma;
    // }

    public String toString() {
        return "| "+this.nome+" | "+this.registro+" | "+this.disciplina;
    }
    public boolean equals(Object myObject) {
        if(this == myObject) return true;
        if(myObject == null || this.getClass() != myObject.getClass()) return false;

        Professor professor = (Professor) myObject;
        return Objects.equals(registro, professor.registro);
    }
    public int hasCode() {
        return Objects.hash(registro);
    }
}
