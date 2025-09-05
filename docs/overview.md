# Overview

## Visão Técnica do Sistema

Este projeto simula um sistema digital embarcado com entradas binárias e saídas visuais em LEDs. A lógica principal implementada é a do somador completo (full adder), que realiza a soma de dois bits e um bit de transporte (carry-in).

### Pinos Utilizados

- **Entradas digitais**: pinos 0 a 7 (representam bits de entrada)
- **Botão de controle**: pino 13 (aciona a lógica)
- **LEDs de saída**: pinos 8 a 12 (mostram o resultado da operação)

### Lógica do Somador Completo

O somador completo realiza a seguinte operação:

- **Soma**: `sum = A ^ B ^ Cin`
- **Carry-out**: `carry = (A & B) | (Cin & (A ^ B))`

Essas duas linhas foram adicionadas ao código `.ino` para simular a operação binária.

### Comentários no Código

Todos os trechos relevantes do código foram comentados em inglês para facilitar o entendimento e seguir boas práticas de documentação internacional.

### Simulação

A simulação é feita no UnoArduSim, permitindo testar o sistema sem hardware físico. Os LEDs respondem dinamicamente às entradas dos interruptores.
