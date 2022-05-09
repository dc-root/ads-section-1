```
usage: git [--version] [--help] [-C <path>] [-c <name>=<value>]
           [--exec-path[=<path>]] [--html-path] [--man-path] [--info-path]
           [-p | --paginate | -P | --no-pager] [--no-replace-objects] [--bare]
           [--git-dir=<path>] [--work-tree=<path>] [--namespace=<name>]
           [--super-prefix=<path>] [--config-env=<name>=<envvar>]
           <command> [<args>]
```

---

## Estes são comandos comuns do Git usados em várias situações:
   | Comand | Description |
   | --- | --- |
   | `clone`  |                Clone um repositório em um novo diretório |
   | `init`  |                 Cria um repositório Git vazio ou reinicializa um existente |

### trabalhe na mudança atual (veja também: git help todos os dias)
   | Comand | Description |
   | --- | --- |
   | `add`       | Adiciona o conteúdo do arquivo ao índice |
   | `mv`        | Move ou renomeia um arquivo, um diretório ou um link simbólico |
   | `restore`   | Restaurar arquivos da árvore de trabalho |
   | `rm`        | Remove arquivos da árvore de trabalho e do índice |

### examine o histórico e o estado (veja também: revisões do git help)
   | Comand | Description |
   | --- | --- |
   | `bisect` | Use a busca binária para encontrar o commit que introduziu um bug |
   | `diff`   | Mostra as mudanças entre commits, commit e árvore de trabalho, etc |
   | `grep`   | Imprime linhas que correspondem a um padrão |
   | `log`    | Mostrar logs de commit |
   | `show`   | Mostra vários tipos de objetos |
   | `status` | Mostra o status da árvore de trabalho |

### crescer, marcar e ajustar sua história comum
   | Comand | Description |
   | --- | --- |
   | `branch` | Listar, criar ou excluir branches |
   | `commit` | Grava as alterações no repositório |
   | `merge`  | junte dois ou mais históricos de desenvolvimento |
   | `rebase` | Reaplicar commits em cima de outra dica base |
   | `reset`  | Restaura o HEAD atual para o estado especificado |
   | `mudar`  | Mudar ramos tag Criar, listar, excluir ou verificar um objeto de tag assinado com GPG |

### colaborar (veja também: git help workflows)
   | Comand | Description |
   | --- | --- |
   | `fetch` | Baixar objetos e referências de outro repositório |
   | `pull`  |	Busca de e integrar com outro repositório ou uma ramificação local |
   | `push`  | Atualizar referências remotas junto com objetos associados |

'git help -a' e 'git help -g' listam os subcomandos disponíveis e alguns
guias de conceito. Veja 'git help <comando>' ou 'git help <conceito>'
para ler sobre um subcomando ou conceito específico.
Veja 'git help git' para uma visão geral do sistema.

---

## Principais comandos de porcela
   | Comand | Description |
   | --- | --- |
   | `add` 				           | Adiciona o conteúdo do arquivo ao índice                                                   |
   | `am` 					           | Aplicar uma série de patches de uma caixa de correio                                       |
   | `archive` 			           | Cria um arquivo de arquivos de uma árvore nomeada                                          |
   | `bisect` 			           | Use a busca binária para encontrar o commit que introduziu um bug                          |
   | `branch` 			           | Listar, criar ou excluir branches                                                          |
   | `bundle` 			           | Mover objetos e referências por arquivo                                                    |
   | `checkout` 	   	           | Alternar ramificações ou restaurar arquivos da árvore de trabalho                          |
   | `cherry-pick`                | Aplicar as alterações introduzidas por alguns commits existentes                           |
   | `citool` 			           | Alternativa gráfica para git-commit                                                        |
   | `clean` 				           | Remove arquivos não rastreados da árvore de trabalho                                       |
   | `clone` 				           | Clone um repositório em um novo diretório                                                  |
   | `commit` 			           | Grava as alterações no repositório                                                         |
   | `describe` 			           | Dê a um objeto um nome legível por humanos com base em uma referência disponível           |
   | `diff` 				           | Mostra as mudanças entre commits, commit e árvore de trabalho, etc                         |
   | `fetch` 			              | Baixar objetos e referências de outro repositório                                          |
   | `format-patch` 	           | Preparar patches para envio por e-mail                                                     |
   | `gc` 					           | Limpe arquivos desnecessários e otimize o repositório local                                |
   | `gitk` 				           | O navegador do repositório Git                                                             |
   | `grep` 				           | Imprime linhas que correspondem a um padrão                                                |
   | `gui` 				           | Uma interface gráfica portátil para Git                                                    |
   | `init` 				           | Cria um repositório Git vazio ou reinicializa um existente                                 |
   | `log` 				           | Mostrar logs de commit                                                                     |
   | `maintenance` 		           | Execute tarefas para otimizar os dados do repositório Git                                  |
   | `merge` 				           | Junte dois ou mais históricos de desenvolvimento                                           |
   | `mv` 					           | Move ou renomeia um arquivo, um diretório ou um link simbólico                             |
   | `notes` 				           | Adicionar ou inspecionar notas de objetos                                                  |
   | `pull` 				           | Busca de e integrar com outro repositório ou uma ramificação local                         |
   | `push` 				           | Atualizar referências remotas junto com objetos associados                                 |
   | `range-diff` 		           | Comparar dois intervalos de confirmação (por exemplo, duas versões de uma ramificação)     |
   | `rebase` 			           | Reaplicar commits em cima de outra dica base                                               |
   | `reset` 				           | Restaura o HEAD atual para o estado especificado                                           |
   | `restore`	 		           | Restaurar arquivos da árvore de trabalho                                                   |
   | `revert`	 			           | Reverter alguns commits existentes                                                         | 
   | `rm` 					           | Remove arquivos da árvore de trabalho e do índice                                          |
   | `shortlog` 			           | Resumir a saída 'git log'                                                                  |
   | `show` 				           | Mostra vários tipos de objetos                                                             |
   | `sparse-checkout`            | Inicializa e modifica o sparse-checkout                                                    |
   | `stash` 				           | Esconda as alterações em um diretório de trabalho sujo                                     |
   | `status` 			           | Mostra o status da árvore de trabalho                                                      |
   | `submodule` 		           | Inicializar, atualizar ou inspecionar submódulos                                           |
   | `mudar`			              | Mudar ramos                                                                                |
   | `tag` 				           | Criar, listar, excluir ou verificar um objeto de tag assinado com GPG                      |
   | `worktree` 			           | Gerenciar várias árvores de trabalho                                                       |

### Comandos Auxiliares / Manipuladores
   | Comand | Description |
   | --- | --- |
   |  `config`            |Obtenha e defina o repositorio ou as opções globais|
   |  `fast-export`		   |Git de exportação rápida|
   |  `fast-import` 		|Back-e|nd de importação rápida para importadores de dados Git rápidos|
   |  `filter-branch` 	   |Reescrever branches|
   |  `mergetool` 			|Execute ferramentas de resolução de conflitos de mesclagem para resolver conflitos de mesclagem|
   |  `pack-refs` 			|Cabeçalhos e tags de pacotes para acesso eficiente ao repositório|
   |  `prune` 				|Eliminar todos os objetos inacessíveis do banco de dados de objetos|
   |  `reflog` 				|Gerenciar informações de reflog|
   |  `remote` 				|Gerenciar conjunto de repositórios rastreados|
   |  `repack` 				|Embalar objetos descompactados em um repositório|
   |  `replace` 			   |Criar, listar, excluir refs para substituir objetos|

### Comandos Auxiliares / Interrogadores
   | Comand | Description |
   | --- | --- |
   | `annotate`             |Anotar linhas de arquivo com informações de confirmação|
   | `blame`                |Mostrar qual revisão e autor modificou pela última vez cada linha de um arquivo|
   | `bugreport`            |Colete informações para o usuário registrar um relatório de bug|
   | `count-objects`        |Contar o número de objetos descompactados e seu consumo de disco|
   | `difftool`             |Mostrar alterações usando ferramentas de comparação comuns|
   | `fsck`                 |Verifica a conectividade e a validade dos objetos no banco de dados|
   | `gitweb`               |Interface web Git (frontend web para repositórios Git)|
   | `help                 `|Exibir informações de ajuda sobre o Git|
   | `instaweb             `|Navegue instantaneamente em seu repositório de trabalho no gitweb|
   | `merge-tree           `|Mostrar mesclagem de três vias sem tocar no índice|
   | `rerere               `|Reutilize a resolução gravada de mesclagens em conflito|
   | `show-branch          `|Mostrar branches e seus commits|
   | `verify-commit        `|Verifique a assinatura GPG de commits|
   | `verify-tag           `|Verifique a assinatura GPG das tags|
   | `whatchanged          `|Mostrar logs com a diferença que cada commit apresenta|

### Interagindo com os outros
   | Comand | Description |
   | --- | --- |
   | `archimport           `|Importar um repositório GNU Arch para o Git|
   | `cvsexportcommit      `|Exportar um único commit para um checkout CVS|
   | `cvsimport            `|Salve seus dados de outro SCM que as pessoas adoram odiar|
   | `cvsserver            `|Um emulador de servidor CVS para Git|
   | `imap-send            `|Envie uma coleção de patches de stdin para uma pasta IMAP|
   | `p4                   `|Importar e enviar para repositórios Perforce|
   | `quiltimport          `|Aplica um patchset de colcha no branch atual|
   | `request-pull         `|Gera um resumo das alterações pendentes|
   | `send-email           `|Envie uma coleção de patches como e-mails|
   | `svn                  `|Operação bidirecional entre um repositório Subversion e Git|

### Comandos/manipuladores de baixo nível
   | Comand | Description |
   | --- | --- |
   | `apply               `| Aplicar um patch aos arquivos e/ou ao índice|
   | `checkout-index      `| Copie os arquivos do índice para a árvore de trabalho|
   | `commit-graph        `| Escreva e verifique os arquivos de gráfico de confirmação do Git|
   | `commit-tree         `| Criar um novo objeto de confirmação|
   | `hash-object         `| Calcular o ID do objeto e, opcionalmente, criar um blob de um arquivo|
   | `index-pack          `| Construir arquivo de índice de pacote para um arquivo compactado existente|
   | `merge-file          `| Executar uma mesclagem de arquivos de três vias|
   | `merge-index         `| Execute uma mesclagem para arquivos que precisam de mesclagem|
   | `mktag               `| Cria um objeto de tag com validação extra|
   | `mktree              `| Construir um objeto de árvore a partir de texto formatado em ls-tree|
   | `multi-pack-index    `| Gravar e verificar índices de vários pacotes|
   | `pack-objects        `| Criar um arquivo compactado de objetos|
   | `prune-packed        `| Remova objetos extras que já estão em arquivos de pacote|
   | `read-tree           `| Lê as informações da árvore no índice|
   | `symbolic-ref        `| Ler, modificar e excluir referências simbólicas|
   | `unpack-objects      `| Descompacte objetos de um arquivo compactado|
   | `update-index        `| Registre o conteúdo do arquivo na árvore de trabalho no índice|
   | `update-ref          `| Atualize o nome do objeto armazenado em uma referência com segurança|
   | `write-tree          `| Crie um objeto de árvore a partir do índice atual|

   | --- | --- |
### Comandos/Interrogadores de Baixo Nível
   | Comand | Description |
   |`cat-file            `| Fornecer conteúdo ou informações de tipo e tamanho para objetos de repositório|
   |`cherry              `| Encontrar commits ainda a serem aplicados ao upstream|
   |`diff-files          `| Compara arquivos na árvore de trabalho e o índice|
   |`diff-index          `| Comparar uma árvore com a árvore de trabalho ou índice|
   |`diff-tree           `| Compara o conteúdo e o modo de blobs encontrados por meio de dois objetos de árvore|
   |`for-each-ref        `| Informações de saída em cada referência|
   |`for-each-repo       `| Execute um comando Git em uma lista de repositórios|
   |`get-tar-commit-id   `| Extraia o ID do commit de um arquivo criado usando git-archive|
   |`ls-files            `| Mostrar informações sobre arquivos no índice e na árvore de trabalho|
   |`ls-remote           `| Listar referências em um repositório remoto|
   |`ls-tree             `| Listar o conteúdo de um objeto de árvore|
   |`merge-base          `| Encontre os melhores ancestrais comuns possíveis para uma mesclagem|
   |`name-rev            `| Encontre nomes simbólicos para determinadas rotações|
   |`pack-redundant      `| Encontre arquivos de pacote redundantes|
   |`rev-list            `| Lista objetos de confirmação em ordem cronológica inversa|
   |`rev-parse           `| Parâmetros de escolha e massagem|
   |`show-index          `| Mostrar índice de arquivo compactado|
   |`show-ref            `| Listar referências em um repositório local|
   |`unpack-file         `| Cria um arquivo temporário com o conteúdo de um blob|
   |`var                 `| Mostrar uma variável lógica do Git|
   |`verify-pack         `| Validar arquivos compactados do Git|

### Comandos de baixo nível / Sincronização de repositórios
   | Comand | Description |
   | --- | --- |
   |`daemon`               |Um servidor realmente simples para repositórios Git|
   |`fetch-pack`           |Receba objetos ausentes de outro repositório|
   |`http-backend`         |Implementação do lado do servidor do Git sobre HTTP|
   |`send-pack`            |Envie objetos pelo protocolo Git para outro repositório|
   |`update-server-info`   |Atualize o arquivo de informações auxiliares para ajudar os servidores burros|

### Comandos de baixo nível/auxiliares internos
   | Comand | Description |
   | --- | --- |
   | `check-attr           `|Exibir informações de gitattributes|
   | `check-ignore         `|Depurar gitignore/excluir arquivos|
   | `check-mailmap        `|Mostrar nomes canônicos e endereços de e-mail de contatos|
   | `check-ref-format     `|Garante que um nome de referência seja bem formado|
   | `column               `|Exibir dados em colunas|
   | `credential           `|Recuperar e armazenar credenciais do usuário|
   | `credential-cache     `|Auxiliar para armazenar senhas temporariamente na memória|
   | `credential-store     `|Auxiliar para armazenar credenciais em disco|
   | `fmt-merge-msg        `|Produzir uma mensagem de confirmação de mesclagem|
   | `interpret-trailers   `|Adicionar ou analisar informações estruturadas em mensagens de confirmação|
   | `mailinfo             `|Extrai patch e autoria de uma única mensagem de e-mail|
   | `mailsplit            `|Simples programa divisor de mbox UNIX|
   | `merge-one-file       `|O programa auxiliar padrão para usar com git-merge-index|
   | `patch-id             `|Calcular ID exclusivo para um patch|
   | `sh-i18n              `|Código de configuração i18n do Git para scripts de shell|
   | `sh-setup             `|Código de configuração de script de shell Git comum|
   | `stripspace           `|Remova espaços em branco desnecessários|

### Comandos externos
   | Comand |
   | --- |
   |`clang-format`|
   |`latexdiff`|

---

### Os guias de conceito do Git são:
   | Comand | Description |
   | --- | --- |
   |` attributes          `|Definindo atributos por caminho|
   |` cli                 `|Interface de linha de comando e convenções do Git|
   |` core-tutorial       `|Um tutorial básico do Git para desenvolvedores|
   |` credentials         `|Fornecendo nomes de usuário e senhas para o Git|
   |` cvs-migration       `|Git para usuários CVS|
   |` diffcore            `|Ajustando a saída do diferencial|
   |` everyday            `|Um conjunto mínimo útil de comandos para o Everyday Git|
   |` faq                 `|Perguntas frequentes sobre o uso do Git|
   |` glossary            `|Um Glossário Git|
   |` hooks               `|Ganchos usados ​​pelo Git|
   |` ignore              `|Especifica arquivos não rastreados intencionalmente para serem ignorados|
   |` mailmap             `|Nomes e/ou endereços de e-mail do autor/commissor do mapa|
   |` modules             `|Definindo propriedades do submódulo|
   |` namespaces          `|Namespaces do Git|
   |` remote-helpers      `|Programas auxiliares para interagir com repositórios remotos|
   |` repository-layout   `|Layout do repositório Git|
   |` revisions           `|Especificando revisões e intervalos para Git|
   |` submodules          `|Montando um repositório dentro de outro|
   |` tutorial            `|Um tutorial de introdução ao Git|
   |` tutorial-2          `|Uma introdução tutorial ao Git: parte dois|
   |` workflows           `|Uma visão geral dos fluxos de trabalho recomendados com o Git|


'git help -a' and 'git help -g' list available subcommands and some
concept guides. See 'git help <command>' or 'git help <concept>'
to read about a specific subcommand or concept.
See 'git help git' for an overview of the system.

