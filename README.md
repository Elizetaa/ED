## Estrutura de Dados - Luiz Felipe Elizeta dos Santos e Caio Cesar Oliva Coronel
# Sistema de Gestão de Pacientes e Exames

Este projeto simples de um sistema para gerenciar pacientes e exames médicos. Com foco em manipulação de estruturas e criação de bibliotecas próprias em C.

## Funcionalidades

- Criação de pacientes com ID, nome e data de nascimento.
- Criação de exames com ID, ID do paciente, ID do aparelho de Raio-X e data/hora do exame.
- Exibição das informações dos pacientes e exames.

## Estruturas e Funções

### Paciente (`Patient`)

Estrutura que representa um paciente.

#### Funções

- `Patient *create_patient()`: Cria um novo paciente.
- `int get_patient_id()`: Retorna o ID do paciente.
- `const char *get_patient_name()`: Retorna o nome do paciente.
- `struct tm *get_patient_birthdate()`: Retorna a data de nascimento do paciente.
- `void destroy_patient()`: Libera a memória alocada para o paciente.

### Exame (`Exam`)

Estrutura que representa um exame médico.

#### Funções

- `Exam *create_exam()`: Cria um novo exame.
- `int get_exam_id()`: Retorna o ID do exame.
- `int get_exam_patient_id()`: Retorna o ID do paciente associado ao exame.
- `int get_exam_rx_id()`: Retorna o ID do aparelho de Raio-X utilizado no exame.
- `struct tm *get_exam_time()`: Retorna a data e hora do exame.
- `void destroy_exam()`: Libera a memória alocada para o exame.
