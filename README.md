# Exercícios de Programação em C

> Coleção organizada de exercícios dos capítulos 2, 3 e 4, com foco em fundamentos de programação, decisões, repetições, funções, vetores e manipulação de dados.

[![C](https://img.shields.io/badge/C-C11-A8B9CC?logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![GCC](https://img.shields.io/badge/GCC-tested-2E7D32?logo=gnu&logoColor=white)](https://gcc.gnu.org/)
[![Make](https://img.shields.io/badge/Build-Makefile-427819?logo=gnu&logoColor=white)](https://www.gnu.org/software/make/)

## Sobre o projeto

Este repositório reúne soluções de exercícios desenvolvidos durante os capítulos 2, 3 e 4 da disciplina de programação em C. A versão atual foi organizada para facilitar a leitura, a compilação individual de cada questão e a evolução do projeto como portfólio técnico.

Os arquivos foram padronizados para a extensão `.c`, pois utilizam a linguagem C e as bibliotecas padrão `stdio.h`, `stdlib.h` e `math.h`. Cada exercício possui uma função `main` própria e deve ser compilado como um programa independente.

## Conteúdos praticados

| Capítulo | Temas trabalhados |
| --- | --- |
| Capítulo 2 | Entrada e saída, operadores, conversões, expressões matemáticas e cálculos financeiros. |
| Capítulo 3 | Condicionais, validação de dados, classificação, datas, equações e estruturas de repetição. |
| Capítulo 4 | Vetores, matrizes, sequências, contagens e processamento de coleções de valores. |

## Estrutura do repositório

```text
.
├── docs/
│   └── capitulo-4-questao-01-sequencia.txt
├── src/
│   ├── capitulo-2/
│   │   ├── questao-01.c
│   │   ├── questao-01-letra-a-e-b.c
│   │   └── ...
│   ├── capitulo-3/
│   │   └── ...
│   └── capitulo-4/
│       └── ...
├── .gitignore
├── LICENSE
├── Makefile
├── README.md
└── CONTRIBUTING.md
```

O arquivo `docs/capitulo-4-questao-01-sequencia.txt` foi mantido na documentação porque contém uma sequência numérica, não um programa C executável.

## Como compilar

### Pré-requisitos

É necessário ter o GCC e o Make instalados. Em sistemas baseados em Debian ou Ubuntu, eles podem ser instalados com `build-essential`.

### Compilar todos os exercícios

```bash
make
```

Os executáveis serão criados em `bin/`, mantendo a separação por capítulo. Para remover os binários gerados, use:

```bash
make clean
```

### Compilar uma questão específica

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -O2 src/capitulo-2/questao-05.c -o questao-05
./questao-05
```

Exercícios que usam funções matemáticas precisam ser vinculados à biblioteca `math`:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -O2 src/capitulo-2/questao-04.c -lm -o questao-04
```

O Makefile já inclui `-lm` automaticamente.

## Decisões de organização

Os nomes originais continham espaços, vírgulas, extensões inconsistentes e descrições pouco previsíveis. Por isso, os arquivos foram renomeados com o padrão `questao-XX` e separados em diretórios por capítulo. Essa convenção facilita a navegação no GitHub, a automação por Makefile e a manutenção do código.

A organização não altera o objetivo dos exercícios. Ela apenas transforma um conjunto de arquivos soltos em uma estrutura reprodutível e mais fácil de avaliar.

## Autoria

Projeto desenvolvido por **Francelino Teotonio Júnior** como parte das atividades acadêmicas de programação em C.

## Licença

Este projeto é distribuído sob a licença MIT.
