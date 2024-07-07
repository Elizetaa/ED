#ifndef _ESTRUTURAS_H
#define _ESTRUTURAS_H

typedef struct{

    int id;
    int patient_id;
    int rx_id;
    struct tm* time;

}Exam;

typedef struct{

    int id;
    char *name;
    struct tm *birthdate;

} Patient;

/*--------------------------------------------
    FUNÇÕES PARA MANIPULAÇÕES DOS PACIENTES        
--------------------------------------------*/

Patient* create_patient(int id, const char *name, struct tm *birthdate); /* Retorna um ponteiro para uma estrutura alocada na memória */

int get_patient_id(Patient* paciente); /* Retorna o ID da struct Patient */

char* get_patient_name(Patient* paciente); /* Retorna o nome da struct Patient */

struct tm* get_patient_birthdate(Patient *paciente); /* Retorna a data de nascimento da struct Patient */

void destroy_patient(Patient *paciente); /* Deleta o registro da memória */

/*--------------------------------------------
    FUNÇÕES PARA MANIPULAÇÕES DOS EXAMES        
--------------------------------------------*/

Exam* create_exam(int id, int patient_id, int rx_id, struct tm *time); /* Retorna o ID da struct Exam */

void destroy_exam(Exam *exame); /* Libera a memória alocada para struc Exam */

int get_exam_id(Exam *exame); /* Retorna o ID da struct Exam */

int get_exam_patient_id(Exam *exame); /* Retorna o ID do paciente através da struct Exam */

int get_exam_rx_id(Exam *exame); /* Retorna o ID do exame */

struct tm* get_exam_time(Exam *exame); /* Retorna o horário do exame */


#endif