import main.modelos.*;
import java.util.ArrayList;

class GenericFichario<E> {
        private ArrayList<E> perons;

        public GenericFichario(ArrayList<E> perons) {
                this.perons = perons;
        }

        public void relatorio() {
                System.out.println("\n[RELATÓRIO]");
                System.out.println("------------------------------------------");
                this.perons.stream()
                .forEach(person -> {
                        System.out.println(person);
                        System.out.println("------------------------------------------");
                });
        }
}


public class Main {
        public static void main(String[] args) {
                ArrayList<Aluno> alunos = new ArrayList<>();
                ArrayList<Professor> profs = new ArrayList<>();

                alunos.add(new Aluno("Diego Silva", "741"));
                alunos.add(new Aluno("Marcos Santos", "159"));

                profs.add(new Professor("Josimar", "1897", "POO"));
                
                GenericFichario<Aluno> operacaoAluno = new GenericFichario<>(alunos);
                GenericFichario<Professor> operacaoProfessor = new GenericFichario<>(profs);

                operacaoAluno.relatorio();
                operacaoProfessor.relatorio();
        }
}
