package main;

public class Motor {
    private int velocidadeMaxima;
    private int potencia;

    public Motor(int potencia) {
        this.velocidadeMaxima = potencia;
        this.potencia = potencia / 5;
    }

    // Getts
    public int getVelocidadeMaxima() {
        return velocidadeMaxima;
    }
    public int getPotencia() {
        return potencia;
    }

    // Setts
    protected void setVelocidadeMaxima(int velocidadeMaxima) {
        this.velocidadeMaxima = velocidadeMaxima;
    }
    protected void setPotencia(int potencia) {
        this.potencia = potencia;
    }
}