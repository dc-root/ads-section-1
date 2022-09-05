export default class HelpJS {
    #message = '';
    #nome = '';

    constructor(nome, message) {
        this.#nome = nome;
        this.#message = message;
    }

    // Getts
    get message() {
        return this.#message;
    }
    get nome() {
        return this.#nome;
    }
    
    // Setts
    set message(message) {
        this.#message = message;
    }
    set nome(nome) {
        this.#nome = nome;
    }
}