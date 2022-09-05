import HelpJS from "./HelpJS.js";

(function main() {
    const ajuda = new HelpJS('Pedro', 'Como programar oo em javascript?');

    console.log(ajuda.message);
    console.log(ajuda.nome);

    ajuda.nome = "Maria";
    console.log(ajuda.nome);
})();