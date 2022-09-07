package main.ficharios;

import main.modelos.Aluno;
import java.util.Scanner;

// adicionar os metodos alterar, excluir e consultar
// não permitir exclusão de alunos vinculados a turmas
public class FicharioAluno {
    private Aluno alunos[];
    private Scanner entrada;

    public FicharioAluno(Aluno alunos[]){
        this.alunos = alunos;
        this.entrada = new Scanner(System.in);
    }

    public void cadastrar() {
        String nome, telefone, cpf, email;
        int contador = 0;

        while (alunos[contador] != null){
            contador++;
        }

        if(contador < 40){
            System.out.println(" === Cadastrar ALUNO ==== ");
            System.out.print("Nome: ");
            nome = entrada.nextLine();

            System.out.print("CPF: ");
            cpf = entrada.nextLine();

            System.out.print("E-mail: ");
            email = entrada.nextLine();
            
            System.out.print("Telefone: ");
            telefone = entrada.nextLine();

            Aluno aluno;
            aluno = new Aluno(nome, cpf, telefone, email);
            alunos[contador] = aluno;
        } else {
            System.out.println("Cadastros esgotados!");
        }
    }

    public void alterarCadastro() {
        System.out.print("Numero da matricula do aluno: ");
        String matricula = entrada.nextLine();

        for(Aluno al: this.alunos) {
            // System.out.println(al.getMatricula());

            // if(al.getMatricula() == matricula) {
            //     System.out.println("Nome: ");
            //     al.setNome(entrada.nextLine());

            //     System.out.println("CPF: ");
            //     al.setCpf(entrada.nextLine());

            //     System.out.println("Telefone: ");
            //     al.setTelefone(entrada.nextLine());

            //     System.out.println("Email: ");
            //     al.setEmail(entrada.nextLine());
            // }
        }
    }

    // public void excluir() {
    //     System.out.print("Numero da matricula do aluno: ");
    //     String matricula = entrada.nextLine();

    //     for(Aluno al: this.alunos) {
    //         // A TRATAR: não permitir exclusão de alunos vinculados a turmas
    //         if(al.getMatricula() == matricula) {
    //             this.alunos.remove(al);
    //         }
    //     }
    // }

    public void relatorio() {
        System.out.println("[RELATÓRIO DE ALUNOS]");
        System.out.println("---------------------");
        for (int i = 0; i < alunos.length; i++) {
            if (alunos[i] != null) {
                System.out.println(alunos[i]);
                System.out.println("---------------------");
            }
        }
    }
}
