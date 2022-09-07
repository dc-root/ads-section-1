package main.modelos;

public class Turma {
    private int codigo;
    private String nome;
    private Aluno alunos[];

    public Turma(int codigo, String nome, Aluno alunos[]) {
        this.codigo = codigo;
        this.nome = nome;
        this.alunos = alunos;
    }

    // Getts
    public int getCodigo() {
        return codigo;
    }
    public String getNome() {
        return nome;
    }
    public Aluno getAlunos() {
        return alunos;
    }

    // Setts
    public void setCodigo(int codigo) {
        this.codigo = Codigo;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setAlunos(Aluno alunos) {
        this.alunos = alunos;
    }
}
