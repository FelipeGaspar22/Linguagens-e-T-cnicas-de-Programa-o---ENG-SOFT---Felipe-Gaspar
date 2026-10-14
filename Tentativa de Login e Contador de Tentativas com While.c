#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char usuario[50];
    char senha[30], senha_correta[30] = "1234";
    char codigo_digitado[30], codigo_recuperacao[30] = "123456789";
    char resposta[10];
    int tentativas = 1;
    bool repetir = true;
    
    printf("\nInsira seu nome de usuário: ");
    scanf("%s", &usuario);
    
    while(repetir){
        printf("\nInsira a senha: ");
        scanf("%s", &senha);
        
        while(strcmp(senha, senha_correta) != 0 && tentativas < 3){
            printf("\nSenha incorreta! Tentativas %d de 3.", tentativas);
            printf("\nInsira sua senha: ");
            scanf("%s", senha);
            tentativas++;
        }
        
        if(strcmp(senha, senha_correta) == 0){
            printf("\nAcesso liberado! Seja bem vindo %s!", usuario);
            repetir = false;
        } else {
            printf("\nAcesso negado! Numero de tentativas esgotado!");
            printf("\nDeseja recuperar sua senha (S/N): ");
            scanf("%s", &resposta);
            
            if(strcmp(resposta, "S") == 0 || strcmp(resposta, "s") == 0 || strcmp(resposta, "Sim") == 0 || strcmp(resposta, "sim") == 0){
                printf("\nInsira seu código de recuperação: ");
                scanf("%s", &codigo_digitado);
                
                if(strcmp(codigo_digitado, codigo_recuperacao) == 0){
                    printf("\nCodigo de recuperação correto! Você tem mais 3 chances!");
                    tentativas = 1;
                } else {
                    printf("\nCodigo de recuperação incorreto! Encerrando programa!");
                    repetir = false;
                }
            } else if (strcmp(resposta, "N") == 0 || strcmp(resposta, "n") == 0 || strcmp(resposta, "Não") == 0 || strcmp(resposta, "não") == 0) {
                printf("\nEncerrando programa!");
                repetir = false;
            } else {
                printf("\nResposta invalida! Encerrando programa.");
                repetir = false;
            }
        }
    }

    return 0;
}
