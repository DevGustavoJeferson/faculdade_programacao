# to_create(py)

## Objetivo

- Entender a criação de um database [DDL](../README.md#ddl)
- Entender como usar o `cursor` e conectar ao DB

## Algoritmo do codigo

1. Importar a biblioteca SQLite
2. Conectar/criar um banco de dados
3. Criar nosso `cursor`
4. Criar a tabela e pedir para o cursor executar
5. `Commitar` as nossas atualizações
6. Fechar a nossa conexão

## Saída esperada

- Aquivo `exemplo.db` com a tabela "Produtos"
- Tabela com: id(Número inteiro), nome(texto), preco(número real) e estoque(inteiro)
