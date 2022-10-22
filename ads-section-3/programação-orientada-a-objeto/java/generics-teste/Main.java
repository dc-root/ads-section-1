import main.modelos.*;
import main.generics.*;

import java.util.ArrayList;

public class Main {
        public static void main(String[] args) {
                ArrayList<Aluno> alunos = new ArrayList<>();
                ArrayList<Professor> profs = new ArrayList<>();
                
                GenericFichario<Aluno> operacaoAluno = new GenericFichario<>(alunos);
                GenericFichario<Professor> operacaoProfessor = new GenericFichario<>(profs);

                alunos.add(new Aluno("Diego", "741"));
                alunos.add(new Aluno("Marcos", "159"));
                alunos.add(new Aluno("Maria", "156"));
                alunos.add(new Aluno("Felipe", "200"));
                alunos.add(new Aluno("André", "123"));
                operacaoAluno.cadastrar();
                

                operacaoAluno.relatorio();
                
                profs.add(new Professor("Josimar", "1897", "POO"));
                profs.add(new Professor("Danilo", "1898", "PW"));
                
                operacaoProfessor.relatorio();
        }
}
