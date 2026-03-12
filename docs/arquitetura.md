Exemplo de documentação

# Arquitetura do Sistema

Este documento descreve as estruturas de dados utilizadas no simulador EDA FC.

## Estruturas de Dados
Para cumprir as restrições do projeto, utilizamos **arrays dinâmicos** em vez de `std::vector`.

### 1. Jogador
Armazena os atributos individuais: ID, Nome, Nível e Condição.

### 2. Equipa
Gere o plantel principal e os ponteiros para titulares e suplentes.