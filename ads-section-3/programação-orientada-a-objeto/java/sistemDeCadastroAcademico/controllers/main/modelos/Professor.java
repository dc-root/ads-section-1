package main.modelos;
import java.util.ArrayList;

public class Professor extends Pessoa {
    private int registro;
    private ArrayList<String> disciplinas = new ArrayList<String>();

    public Professor(){}
    public Professor(
        String nome,
        int registro,
        String cpf,
        String telefone,
        String email,
        ArrayList<String> disciplinas
    ) {
        this.nome = nome;
        this.registro = registro;
        this.cpf = cpf;
        this.telefone = telefone;
        this.email = email;
        this.disciplinas = disciplinas;
    }
    
    public String toString() {
        return "| "+this.nome+" | "+this.registro+" | "+this.disciplinas+" |";
    }
    public boolena equals(Object myObject) {
        if(this == myObjec) return true;
        if(myObjec == null || this.getClass() != myObjec.getClass()) return false;]

        Professor prof = (Professor) myObject;
        return Objects.equals(this.registro, prof.registro);
    }
    public int getRegistro() {
        return registro;
    }
    public void setRegistro(int registro) {
        this.registro = registro;
    }
}
