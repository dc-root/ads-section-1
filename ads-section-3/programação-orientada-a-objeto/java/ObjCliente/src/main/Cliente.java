package main;

public class Cliente {
    private int codigo;
    private String nome;
    private double limiteDeCredito;
    private Boolean ehEspecial;

    public Cliente(int codigo, String nome) {
        this.codigo = codigo;
        this.nome = nome;

        this.limiteDeCredito = 0.0;
        this.ehEspecial = false;
    }
    
    public void atualizaLimite(double limiteDeCredito) {
        if(ehEspecial) {
            this.limiteDeCredito = limiteDeCredito;
            System.out.println("O limite de crédito do cliente "+nome+", de código "+codigo+" foi atualizado para R$"+limiteDeCredito);
            return;
        }

        System.out.println("O cliente de nome "+nome+", de código "+codigo+". Não e especial");
    }

    public void atualizaSituacao(Boolean ehEspecial) {
        this.setEhEspecial(ehEspecial);
        System.out.println("O cliente de nome "+nome+", de código "+codigo+". "+(ehEspecial ? "Se tornou um cliente especial :)" : "Agora não e mais um cliente especial :("));

        if(!ehEspecial) {
            this.setLimiteDeCredito(0);
        }
    }
    
    public double getLimiteDeCredito() {
        return limiteDeCredito;
    }

    public Boolean getEhEspecial() {
        return ehEspecial;
    }

    private void setEhEspecial(Boolean ehEspecial) {
        this.ehEspecial = ehEspecial;
    }
    private void setLimiteDeCredito(double ehEspecial) {
        this.limiteDeCredito = ehEspecial;
    }
}