package main.ficharios;

import main.modelos.*;

import java.util.Scanner;
import java.util.ArrayList;

public class FicharioTurma {
    private Scanner entrada;

    private ArrayList<Turma> turmas;

    // private ArrayList<Professor> profs;
    // private ArrayList<Aluno> alunos;

    public FicharioTurma(
        ArrayList<Turma> turmas
        // ArrayList<Professor> profs,
        // ArrayList<Aluno> alunos
    ) {
        this.turmas = turmas;
        // this.profs = profs;
        // this.alunos = alunos;
        this.entrada = new Scanner(System.in);
    }

    public void cadastrar() {
        String nome;

        System.out.println("\n ------------- CADASTRO TURMA ------------- ");
        System.out.print("Nome: ");
        nome = entrada.nextLine();

        Turma turma = new Turma(nome);
        
        if (this.turmas.contains(turma)){
            System.out.println("\n> Error: Não foi possivel cadastrar a turma");
            System.out.println("> warning: Já existe uma turma com o mesmo código,\npor favor tente novamenete :)");
        } else {
            this.turmas.add(turma);
            System.out.println("\n> Success: Turma registrada com sucesso!");
        }
    }

    public void alterar() {
        System.out.print("Numero do código da sala: ");
        String codigo = entrada.nextLine();

        Turma turmaaSerAlterada = this.turmas.stream()
            .filter(turma -> turma.getCodigo()
                .equals(codigo)
            ).findAny().orElse(null);

        if(turmaaSerAlterada != null) {
            System.out.printf("Nome: ");
            turmaaSerAlterada.setNome(entrada.nextLine());

            System.out.printf("\n> Success: Dados do(a) aluno(a) %s, atualizado com sucesso!\n", turmaaSerAlterada.getNome());
        } else {
            System.out.println("> Error: Número de matricula não encontrado!");
        }
    }

    public void excluir() {
        System.out.print("Numero do código da sala: ");
        String codigo = entrada.nextLine();

        Turma turmaaSerExcluida = this.turmas.stream()
            .filter(turma -> turma.getCodigo()
                .equals(codigo)
            ).findAny().orElse(null);
       
        // A TRATAR: não permitir exclusão de alunos vinculados a turmas
        if(turmaaSerExcluida != null) {
            // this.consultar();
            System.out.print("Você realmente deseja excluir esta turma? (yes/no): ");
            String option = entrada.nextLine();

            switch(option) {
                case "y", "Y", "YES", "yes" -> {
                    if(this.turmas.remove(turmaaSerExcluida)) {
                        System.out.println("\n> Success: turma removido com sucesso!");
                    } else {
                        System.out.println("\n> Error: Houve algum erro ao remover o aluno!");
                    }
                }
                case "n", "N", "NO", "no" -> { return; }
                default -> {
                    System.out.println("\n> Error: opção invalida!");
                }
            }
        }
    }

    public void consultar() {
        System.out.print("\nNumero do codigo da sala: ");
        String codigo = entrada.nextLine();

        Turma turmaaSerConsultada = this.turmas.stream()
            .filter(turma -> turma.getCodigo()
                .equals(codigo)
            ).findAny().orElse(null);
        
        if(turmaaSerConsultada != null) {
            System.out.printf("\n[RELATÓRIO DA TURMA '%s']\n", turmaaSerConsultada.getNome().toUpperCase());
            System.out.println("-------------------------------------------------------------------------");
            System.out.printf("%0s %10s\n", "| Nome: "+turmaaSerConsultada.getNome(), "| Código: "+turmaaSerConsultada.getCodigo());
            System.out.println("--- ALUNOS --------------------------------------------------------------");
            System.out.printf("%10s %20s %5s %5s\n", "NOME", "MATRICULA", "E-MAIL", "TELEFONE");
            System.out.println("-------------------------------------------------------------------------");
            
            turmaaSerConsultada.getAlunos().stream()
                .forEach(aluno -> System.out.format("%10s %20s %5s %5s\n", aluno.getNome(), aluno.getMatricula(), aluno.getEmail(),  aluno.getTelefone()));

            // System.out.println("--- PROFESSORES ---------------------------------------------------------");
            // System.out.printf("%10s %20s %5s %5s\n", "NOME", "REGISTRO", "E-MAIL", "TELEFONE");
            // System.out.println("-------------------------------------------------------------------------");
            // turmaaSerConsultada.getProfs().stream()
            //     .forEach(prof -> System.out.format("%10s %20s %5s %5s\n", prof.getNome(), prof.getRegistro(), prof.getEmail(), prof.getTelefone()));
            System.out.println("-------------------------------------------------------------------------");
        } else {
            System.out.println("\nError: Código não encontrado! :(");
        }
    }

    // public void matricularAluno() {
    //     System.out.print("Numero da matricula do aluno: ");
    //     String matricula = entrada.nextLine();

    //     System.out.print("\nNumero do codigo da sala: ");
    //     String codigo = entrada.nextLine();

    //     Aluno alunoaSerMatriculado = this.alunos.stream()
    //         .filter(aluno -> aluno.getMatricula()
    //             .equals(matricula)
    //         ).findAny().orElse(null);

    //     Turma turmaaSeMatricular = this.turmas.stream()
    //         .filter(turma -> turma.getCodigo()
    //             .equals(codigo)
    //         ).findAny().orElse(null);

    //     if((alunoaSerMatriculado != null) && (turmaaSeMatricular != null)) {
    //         turmaaSeMatricular.getAlunos().add(alunoaSerMatriculado);
    //     }
    // }

    // public void desmatricularAluno() {
    //     System.out.print("Numero da matricula do aluno: ");
    //     String matricula = entrada.nextLine();

    //     System.out.print("\nNumero do codigo da sala: ");
    //     String codigo = entrada.nextLine(); 

    //     Aluno alunoaSerMatriculado = this.alunos.stream()
    //         .filter(aluno -> aluno.getMatricula()
    //             .equals(matricula)
    //         ).findAny().orElse(null);

    //     Turma turmaaSeMatricular = this.turmas.stream()
    //     .filter(turma -> turma.getCodigo()
    //         .equals(codigo)
    //     ).findAny().orElse(null);

    //     if(turmaaSeMatricular.getAlunos().contains(alunoaSerMatriculado)) {
    //         turmaaSeMatricular.getAlunos().remove(alunoaSerMatriculado);
    //         System.out.println("> Sucess: Aluno removido com sucesso!");
    //     } else {
    //         System.out.println("> Warning: Este aluno não consta na lista!");
    //     }
    // }

    public void relatorio() {
        System.out.println("\n[RELATÓRIO DE TURMAS]");
        System.out.println("------------------------------------------");
        this.turmas.stream()
            .forEach(turma -> {
                System.out.println(turma);
                System.out.println("------------------------------------------");
        });
    }
}