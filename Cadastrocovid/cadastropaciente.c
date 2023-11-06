
    char nome[50];
    char cpf [50];
    char datanasc [50];
    char telefone[50];
    char rua[50];
    char numero[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    char cep[50];
    char email[50];
    char data[50];
    FILE *file;
    file=fopen("cadastro_de_pacientes","a");

    if (file=NULL){
        printf("Erro na abertura do arquivo!");
        return 1;}
        else{
                 printf("\n\n\n");
    printf("     ++++++++++++++++++++++++++++++++++++\n     ");
    printf(" registro de pacientes com COVID19\n");
    printf("     ++++++++++++++++++++++++++++++++++++\n\n     ");
    printf("************************************\n\n");


    printf("Digite os dados do paciente\n\n");

    printf("\nNome: ");
    fgets(nome,50,stdin);
    fprintf("%s",nome);

    printf("\nCPF (xxx.xxx.xxx-xx): ");
    fgets(cpf,50,stdin);
    fprintf("%s",cpf);

    printf("\nData de nascimento (xx/xx/xxxx): ");
    fgets(datanasc,50,stdin);
    fprintf("%s",datanasc);

    printf("\nTelefone: ");
    fgets(telefone,50,stdin);
    fprintf("%s",telefone);

    printf("\nDigite o endereço do paciente: \n");

    printf("Rua: ");
    fgets(rua,50,stdin);
    fprintf("%s",rua);

    printf("Numero: ");
    fgets(numero,50,stdin);
    fprintf("%s",numero);

    printf("Bairro: ");
    fgets(bairro,50,stdin);
    fprintf("%s",bairro);

    printf("Cidade: ");
    fgets(cidade,50,stdin);
    fprintf("%s",cidade);

    printf("Estado: ");
    fgets(estado,50,stdin);
    fprintf("%s",estado);

    printf("Cep: ");
    fgets(cep,50,stdin);
    fprintf("%s",cep);

    printf("Digite um E-mail: ");
    fgets(email,50,stdin);
    fprintf("%s",email);

    printf("Data da entrada: ");
    fgets(data,50,stdin);
    fprintf("%s",data);

        }
        printf("Dados gravados com sucesso!!!");



