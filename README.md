# Super Trunfo Países

Este projeto implementa um jogo de Super Trunfo com o tema "Países", onde jogadores podem cadastrar cartas representando cidades, calcular atributos derivados como densidade populacional e PIB per capita, e comparar cartas para determinar o vencedor em diferentes atributos.

## Sumário

- [Descrição do Projeto](#descrição-do-projeto)
- [Requisitos de Sistema](#requisitos-de-sistema)
- [Instalação](#instalação)
- [Compilação](#compilação)
- [Execução](#execução)
- [Exemplos de Uso](#exemplos-de-uso)
- [Estrutura do Projeto](#estrutura-do-projeto)
- [Solução de Problemas](#solução-de-problemas)

## Descrição do Projeto

O Super Trunfo Países é um jogo onde cada carta representa uma cidade com diferentes atributos. O projeto é dividido em três partes incrementais:

1. **Parte 1**: Sistema básico de cadastro de cartas
2. **Parte 2**: Adição de cálculos de densidade populacional e PIB per capita
3. **Parte 3**: Implementação da lógica de comparação entre cartas e cálculo do Super Poder

O jogo permite aos jogadores competir usando cartas com diferentes atributos. Um jogador escolhe um atributo de sua carta e o outro jogador compara o mesmo atributo de sua própria carta. Quem tiver o valor mais alto para o atributo escolhido vence a rodada (exceto para densidade populacional, onde o menor valor vence).

## Requisitos de Sistema

- Compilador GCC ou compatível
- Sistema operacional: Windows, macOS ou Linux

## Instalação

### Windows

1. **Instalar o MinGW (Minimalist GNU for Windows)**:

   - Acesse: https://sourceforge.net/projects/mingw/
   - Baixe e execute o instalador
   - No instalador, selecione os pacotes: `mingw32-base` e `mingw32-gcc-g++`
   - Clique em "Installation" > "Apply Changes"

2. **Adicionar MinGW ao PATH**:
   - Abra o Painel de Controle > Sistema > Configurações avançadas do sistema
   - Clique em "Variáveis de Ambiente"
   - Na seção "Variáveis do Sistema", selecione "Path" e clique em "Editar"
   - Adicione o caminho: `C:\MinGW\bin`
   - Clique em "OK" para salvar

### macOS

1. **Instalar o Xcode Command Line Tools**:
   - Abra o Terminal
   - Execute o comando: `xcode-select --install`
   - Siga as instruções na tela

### Linux (Ubuntu/Debian)

1. **Instalar o GCC**:
   - Abra o Terminal
   - Execute o comando: `sudo apt update && sudo apt install build-essential`

### Verificar a instalação

- Abra o Terminal (ou Prompt de Comando no Windows)
- Execute: `gcc --version`
- Você deve ver a versão do GCC instalada

## Compilação

1. Crie uma pasta para o projeto e navegue até ela:

   ```bash
   mkdir super_trunfo_paises
   cd super_trunfo_paises
   ```

2. Baixe ou copie os arquivos do projeto para esta pasta

3. Compile cada parte do projeto:

   **Windows**:

   ```bash
   gcc super_trunfo_parte1.c -o super_trunfo_parte1.exe
   gcc super_trunfo_parte2.c -o super_trunfo_parte2.exe
   gcc super_trunfo_parte3.c -o super_trunfo_parte3.exe
   ```

   **macOS/Linux**:

   ```bash
   gcc super_trunfo_parte1.c -o super_trunfo_parte1
   gcc super_trunfo_parte2.c -o super_trunfo_parte2
   gcc super_trunfo_parte3.c -o super_trunfo_parte3
   ```

## Execução

Para executar os programas:

**Windows**:

```bash
super_trunfo_parte1.exe
super_trunfo_parte2.exe
super_trunfo_parte3.exe
```

**macOS/Linux**:

```bash
./super_trunfo_parte1
./super_trunfo_parte2
./super_trunfo_parte3
```

## Exemplos de Uso

### Parte 1: Cadastro Básico de Cartas

**Entrada de exemplo**:

```
=== Cadastro da Carta 1 ===
Digite o estado (letra de A a H): A
Digite o código da carta (ex: A01): A01
Digite o nome da cidade: São Paulo
Digite a população (número de habitantes): 12325000
Digite a área em km²: 1521.11
Digite o PIB (em bilhões de reais): 699.28
Digite o número de pontos turísticos: 50

=== Cadastro da Carta 2 ===
Digite o estado (letra de A a H): B
Digite o código da carta (ex: B02): B02
Digite o nome da cidade: Rio de Janeiro
Digite a população (número de habitantes): 6748000
Digite a área em km²: 1200.25
Digite o PIB (em bilhões de reais): 300.50
Digite o número de pontos turísticos: 30
```

**Saída esperada**:

```
=== Carta 1 ===
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

=== Carta 2 ===
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
```

### Parte 2: Cadastro com Cálculos Adicionais

A entrada é a mesma da Parte 1, mas a saída inclui os cálculos adicionais:

**Saída esperada**:

```
=== Carta 1 ===
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

=== Carta 2 ===
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais
```

### Parte 3: Comparação de Cartas

A entrada é a mesma, mas além das informações das cartas, o programa também exibe o resultado das comparações:

**Saída adicional esperada**:

```
=== Comparação de Cartas ===
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
```

## Estrutura do Projeto

```
super_trunfo_paises/
├── super_trunfo_parte1.c  # Cadastro básico de cartas
├── super_trunfo_parte2.c  # Adição de densidade e PIB per capita
├── super_trunfo_parte3.c  # Comparação de cartas e Super Poder
└── README.md              # Este arquivo
```

## Solução de Problemas

### Problemas comuns e soluções:

1. **Erro de compilação "gcc não encontrado"**:

   - Verifique se o GCC está instalado corretamente
   - Verifique se o diretório do GCC está no PATH do sistema

2. **Erros ao ler strings com espaços**:

   - O programa usa `scanf(" %[^\n]", nome_cidade)` para permitir a leitura de nomes com espaços

3. **Resultados de cálculos incorretos**:

   - Verifique se a entrada de dados está correta
   - Confirme se as conversões de tipo estão sendo feitas corretamente

4. **Valor do PIB per capita muito baixo**:

   - O programa espera o PIB em bilhões de reais, certifique-se de inserir o valor correto

5. **Problemas com a comparação de densidade populacional**:
   - Para densidade populacional, o valor menor é considerado melhor, ao contrário dos outros atributos
