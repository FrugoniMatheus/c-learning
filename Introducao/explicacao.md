# Introdução 
 Em sala de aula abordamos a matéria como uma linguagem de baixo nível. Portanto, diferente do JavaScript, ela exige que declaremos corretamente o tipo da variável que iremos utilizar ao longo do código. Além disso o código em C precisa ser compilado em linguagem de máquina antes de ser executado, não sendo interpretado diretamente como em JavaScript. 

## Diferenças de C e JS 
| Característica                     | C                                 | JavaScript                         |
|------------------------------------|-----------------------------------|-------------------------------------|
| Tipo de linguagem                  | Compilada                         | Interpretada                        |
| Declaração de variáveis            | Requer declaração do tipo (ex: `int`, `char`) | Usa `var`, `let` ou `const`, sem declarar tipo |
| Uso principal                      | Back-end, sistemas embarcados, drivers, sistemas operacionais | Front-end e Back-end (com Node.js) |
| Tipagem                            | Estática e forte                  | Dinâmica e fraca                    |
| Execução                           | Código convertido em binário antes de rodar | Executado linha por linha por um interpretador |

## Instalação
Em sala de aula utilizamos Linux Ubuntu para realizar a instalação do compilador GCC. Na minha experiência e bem mais simples de instalar do que no Windows. 

### No Linux Ubuntu: 
1. Abra o terminal e digite o código:  `sudo apt install gcc`.
2.  Consulte se o a instalação foi bem-sucedida rode o código: `gcc --version`. 
Se a versão do GCC aparecer a instalação foi concluída corretamente. 


## Compilação 
Na minha experiência a compilação de arquivos em C e muito diferente e divertido de se realizar. O processo se baseia em compilar em linguagem de máquina antes de ser executado. 

Para realizar esse processo podemos executar no Linux Ubuntu da seguinte maneira: 

1. Criar um arquivo com o final `.c` (exp: arquivo.c). 
2. Abrir o terminal e executar o seguinte código : `gcc arquivo.c -o arquivo`.
3. Depois abrir o arquivo : `./arquivo`

Dessa maneira ele irá executar o código seu em C. 
