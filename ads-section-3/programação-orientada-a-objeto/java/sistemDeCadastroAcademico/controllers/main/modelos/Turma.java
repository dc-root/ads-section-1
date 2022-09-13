package main.modelos;

import java.util.Random;
import java.util.Objects;
import java.util.ArrayList;

public class Turma {
    private String nome;
    private String codigo;
    private Random gerador = new Random();

    private ArrayList<Aluno> alunos;
    // private ArrayList<Professor> profs;

    public Turma(String nome) {
        this.nome = nome;
        this.codigo = ""+gerador.nextInt(10000000);
    }

    // Getts
    public String getCodigo() {
        return codigo;
    }
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public ArrayList<Aluno> getAlunos() {
        return this.alunos;
    }
    protected void receberAluno(Aluno aluno) {
        this.alunos.add(aluno);
        aluno.entrarEmTurma(this);
    }
    // public ArrayList<Professor> getProfs() {
    //     return this.profs;
    // }
    // protected void receberProfessor(Professor prof) {
    //     this.profs.add(prof);
    //     prof.receberTurma(this);
    // }

    public String toString() {
        return "| "+this.nome+" | "+this.codigo;
    }
    public boolean equals(Object myObject) {
        if (this == myObject) return true;
        if (myObject == null || getClass() != myObject.getClass()) return false;
        Turma turma = (Turma) myObject;
        return Objects.equals(codigo, turma.codigo);
    }
    public int hashCode() {
        return Objects.hash(codigo);
    }
}
