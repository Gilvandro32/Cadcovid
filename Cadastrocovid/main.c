#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*Bibliotecas para manipulação de strings ,localização do texto em Português e
manipulação de informações de data */

int main(){

/*Declaração das variáveis das informações e de controle*/

    char l1[20]="administrador";
    char s1[20]="mcuser";
    char l2[20];
    char s2[20];
    char nome[300];
    char cpf [20];
    char datanasc [12];
    char telefone[20];
    char rua[30];
    char numero[10];
    char bairro[20];
    char cidade[20];
    char estado[20];
    char cep[20];
    char email[30];
    char data[20];
    char resposta1[20]="s";
    char resposta2[20]="n";
    char resposta3[20];
    char com[50];
    char dia_nasc[20];
    char anon [10];
    int contador=0;
    int loginefet=0;
    int anonasc;
    int ano_at;
    int idade;
    time_t data_a;

    setlocale (LC_ALL,"portuguese");


    printf("     ++++++++++++++++++++++++++++++++++++\n     ");
    printf(" Seja bem vindo ao ambiente MedPlus\n");
    printf("     ++++++++++++++++++++++++++++++++++++\n\n     ");
    printf("************************************\n\n");


/*Login entrará em um looping se as informações estiverem incorretas*/

    while(loginefet=1){
        printf("Digite o Login: ");
        fflush(stdin);
        scanf("%s",l2);

        printf("Digite a Senha: ");
        scanf("%s",s2);

        if (strcmp(l2, l1) == 0 && strcmp(s2, s1) == 0){
            printf("\n\nLogin efetuado!!\n\n");
            loginefet = 1;
            break;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");

    }


    printf("\n\n\n");
    printf("     ++++++++++++++++++++++++++++++++++++\n     ");
    printf(" registro de pacientes com COVID19\n");
    printf("     ++++++++++++++++++++++++++++++++++++\n\n     ");
    printf("************************************\n\n\n\n");



    printf("******************************\n\n");
    printf("Digite os dados do paciente\n\n");
    printf("******************************\n\n");

/*Aqui acontece a criação do arquivo .txt*/

    FILE *file;
    file=fopen("cadastro_de_pacientes.txt","a");


    puts(" \nDigite o nome: ");
    fflush(stdin);
    gets(nome);
    fprintf(file,"Nome: %s \n",nome);


    puts("\nDigite o CPF: ");
    fflush(stdin);
    gets(cpf);
    fprintf(file,"CPF: %s \n",cpf);

    puts("\nDigite um número de telefone: ");
    fflush(stdin);
    gets(telefone);
    fprintf(file,"telefone: %s \n",telefone);

    puts("\nCEP: ");
    fflush(stdin);
    gets(cep);
    fprintf(file,"CEP: %s \n",cep);

    puts("\nDigite o dia e mês de nascimento, exemplo xx/xx: ");
    fflush(stdin);
    gets(dia_nasc);
    fprintf(file,"Dia e mês de nascimento: %s \n",dia_nasc);

    printf("\nDigite o ano de nascimento, exemplo xxxx: ");
    fflush(stdin);
    scanf("%d",&anonasc);
    fprintf(file,"Ano de nascimento: %d\n",anonasc);

    /*Aqui inicia a função para obter a data atual do sistema*/

    time(&data_a);

    struct tm *dataf = localtime(&data_a);

    ano_at = (dataf->tm_year+1900);

    /* É feito o cálculo da idade do paciente pelo ano atual e ano de nascimento*/

    idade=ano_at-anonasc;

    printf("\nIdade do paciente: %d\n",idade);



    if(idade>=65){
        printf("\n\n Paciente do grupo de risco guardando informações em arquivo, aguarde...\n\n");
        FILE *arq;
        arq=fopen("Pacientes_grupo_risco.txt","a");
        fflush(stdin);
        fprintf(file,"******************************\n");
        fprintf(file,"******************************\n");
        fprintf(arq,"Nome: %s \n",nome);
        fprintf(arq,"CEP: %s \n",cep);
        fprintf(arq,"idade: %d \n",idade);
        fprintf(file,"******************************\n");
        fprintf(file,"******************************\n");
        fclose(arq);
}





    printf("\n\n******************************\n\n");
    printf("Digite o endereço paciente\n\n");
    printf("******************************\n\n");



    puts("\nRua: ");
    fflush(stdin);
    gets(rua);
    fprintf(file,"Rua: %s \n",rua);


    puts("\nNumero: ");
    fflush(stdin);
    gets(numero);
    fprintf(file,"Numero: %s \n",numero);

    puts("\nBairro: ");
    fflush(stdin);
    gets(bairro);
    fprintf(file,"Bairro: %s \n",bairro);

    puts("\nCidade: ");
    fflush(stdin);
    gets(cidade);
    fprintf(file,"Cidade: %s \n",cidade);

    puts("\nEstado: ");
    fflush(stdin);
    gets(estado);
    fprintf(file,"Estado: %s \n",estado);

    puts("\nDigite um E-Mail: ");
    fflush(stdin);
    gets(email);
    fprintf(file,"E-Mail: %s \n",email);


    puts("\nData de entrada exemplo: xx,xx,xxxx ");
    fflush(stdin);
    gets(bairro);
    fprintf(file,"Bairro: %s \n",bairro);



/*Se o usuário digitar qualquer alternativa fora do esperado o programa entrará
em loop até que uma opção adequada seja escolhida*/

    printf("O paciente possui alguma comorbidade?: [s/n]");
    scanf("%s",resposta3);

        if(strcmp(resposta3,resposta1)==0){
        fflush(stdin);
        puts("Qual comorbidade?: ");
        gets(com);
        fprintf(file,"Comorbidade do paciente: %s \n ",com);
        printf("Dados gravados com sucesso!");
        }else if((strcmp(resposta3,resposta2)==0)){
            printf("Dados gravados com sucesso!");
            fprintf(file,"Comorbidade do paciente:N/A ");
            }else{
                while(contador=1){
                    printf("Tente novamente\n");
                    printf("O paciente possui alguma comorbidade?[s/n]: ");
                    scanf("%s",resposta3);

                    if(strcmp(resposta3,resposta1)==0){
                        fflush(stdin);
                        puts("Qual comorbidade?: ");
                        gets(com);
                        fprintf(file,"Comorbidade do paciente: %s \n ",com);
                        printf("Dados gravados com sucesso!");
                        contador=1;
                        break;
                        } else if((strcmp(resposta3,resposta2)==0)){
                            printf("Dados gravados com sucesso!");
                            fprintf(file,"Comorbidade do paciente:N/A \n");
                            contador=1;
                            break;
                        }
                    }
                }




    fprintf(file,"******************************\n");
    fprintf(file,"******************************\n");
    fclose (file);
    return 0;


    }






















































