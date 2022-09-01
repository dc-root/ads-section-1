public class Help {
// -----------------------------------------------------------------------------
    /*
        @public: especifica que um certo atributo(variável) ou método(função) de uma
        classe seja acessivel ao objeto após a instância(quando a classe vira objeto ;-; ).

        @private: especifica que os atributos(variável) ou método(função) de uma classe
        não seja acessivel ao objeto após a instância(quando a classe vira objeto).
        E para o objeto ter acesso ao VALOR do atributo(variável) privado criamos métodos
        publicos que tem acesso a esses atributos(variáveis).

        @this: referencia a classe de onde ele está sendo chamado. Nesse exemplo
        para acessar o atributo 'nome' estando essa classe ja instanciada poderiamos
        utilizar Help.nome, eu posso referenciar o nome da classe dentro da classe
        utilizando essa palavra chave 'this', 'este'. E isso e bom utilizado quando
        passado dentro de construtores e métodos com parametros com o mesmo nome
        de um certo atributo.

        @construtor: Os construtores são metodos(funções) especiais que servem para
        inicializar os atributos do objeto em sua instância(quando estiver criando o ojeto)
    */
    
// ----- ATRIBUTOS -------------------------------------------------------------
    private String message;
    public String nome;
// ----- CONSTRUTOR ------------------------------------------------------------

    public Help(String nome, String message) { // método
        this.message = message;
        this.nome = nome;
    }
// ----- GET & SET do atributo MESSAGE -----------------------------------------

    // Busca o valor do atributo message
    public String getMessage() { // método
        return message;
    }
    // Altera o valor do atributo message
    public void setMessage(String message) { // método
        this.message = message;
    }
// ----- GET & SET do atributo NOME --------------------------------------------

    // Busca o valor da message
    public String getNome() { // método
        return nome;
    }
    // Altera o valor da message
    public void setNome(String nome) { // método
        this.nome = nome;
    }
// -----------------------------------------------------------------------------
}