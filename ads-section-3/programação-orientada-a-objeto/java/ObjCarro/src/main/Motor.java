package main;

public class Motor {
    private int velocidadeMaxima; // trocar nome de atributos
    private int potencia;

    public Motor(int potencia) {
        this.velocidadeMaxima = potencia;
        this.potencia = potencia / 5;
    }

    // Getts
    public void getVelocidadeMaxima() {
        return velocidadeMaxima;
    }
    public void getPotencia() {
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