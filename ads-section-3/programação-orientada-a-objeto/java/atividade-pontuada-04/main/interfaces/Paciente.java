package main.interfaces;

public class Paciente extends Pessoa {
    private String nomeConvenio;
    private int numeroConvenio;
    private Endereco[] endereco;

    public Paciente(
        String nomeConvenio,
        int numeroConvenio,
        Endereco[] endereco
    ) {
        this.nomeConvenio = nomeConvenio;
        this.numeroConvenio = numeroConvenio;
        this.endereco = endereco;
    }

    public String getNomeConvenio() {
        return nomeConvenio;
    }

    public void setNomeConvenio(String nomeConvenio) {
        this.nomeConvenio = nomeConvenio;
    }

    public int getNumeroConvenio() {
        return numeroConvenio;
    }

    public void setNumeroConvenio(int numeroConvenio) {
        this.numeroConvenio = numeroConvenio;
    }

    public Endereco[] getEndereco() {
        return endereco;
    }

    public void setEndereco(Endereco[] endereco) {
        this.endereco = endereco;
    }
}
