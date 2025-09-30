# tabuada_especifica

# Objetivo
- Comparar com `tabuada_manual` e `tabuada_automatizada`;
- Entender o funcionamento de laço `for` e como usa-lo;
- Fazer uma tabuada que o usuario possa escolher o número especifico;

# Algoritmo passo a passo

1. Declarar 3 variaveis inteiras;
2. Solicitar ao usuario de qual número quer a tabuada;
3. Guardar o dado na variavel `num`;
4. Entrar no laço que irá repetir 9 vezes;
5. Cada vez que o laço repetir o `num` será multiplicado pela condicional do laço;
6. Mostrar ao usuario a tabuada formatada;

## Instruções para rodar o programa:
- Incluir a biblioteca padrão necessária, `#include <stdio.h>`;
- Compilar com o `gcc`: `gcc tabuada_especifica.c -o tabuada_especifica`;
- Executar: `./tabuada_especifica`

# Saída esperada
Tabuada de qual numero: 5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45

```bash
gcc tabuada_especifica.c -o tabuada_especifica
./tabuada_especifica