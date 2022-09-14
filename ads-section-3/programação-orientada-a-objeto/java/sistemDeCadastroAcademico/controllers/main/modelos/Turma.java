package main.modelos;

import java.util.Random;
import java.util.Objects;
import java.util.ArrayList;

public class Turma {
    private String nome;
    private String codigo;
    private Random gerador = new Random();

    private ArrayList<Aluno> alunos = new ArrayList<Aluno>();
    private ArrayList<Professor> profs = new ArrayList<Professor>();

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
    public String setNome(String nome) {
        this.nome = nome;
        return nome;
    }
    
    public ArrayList<Aluno> getAlunos() {
        return this.alunos;
    }
    public ArrayList<Professor> getProfs() {
        return this.profs;
    }
    protected void receberProfessor(Professor prof) {
        this.profs.add(prof);
    }

    public String toString() {
        return "| "+this.nome+" | "+this.codigo+" | ["+this.getAlunos().size()+"] alunos";
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
