#include <stdio.h>

int main()
{
    
    int opcao;
    printf("\n-------------------------");
    printf("\n1 - Batalhar");
    printf("\n2 - Status");
    printf("\n3 - SkillTree");
    printf("\n4 - Inventário");
    printf("\n5 - Configurações");
    printf("\n----------------------------------------------");
    printf("\nDigite o número da opção que deseja acessar: ");
    scanf("%d", &opcao);
    printf("\n----------------------------------------------");
    
    if (opcao == 1){
        int opcao_batalha;
        printf("\n-------------------------");
        printf("\nVocê entrou em uma batalha contra um slime!");
        printf("\nO que você vai fazer ?");
        printf("\n-------------------------");
        printf("\n1 - Lutar!");
        printf("\n2 - Dialogar!");
        printf("\n3 - Abrir Inventário!");
        printf("\n4 - Fugir!");
        printf("\n-------------------------------------------");
        printf("\nDigite o número da ação que deseja tomar: ");
        scanf("%d", &opcao_batalha);
        printf("\n-------------------------------------------");
        
        if (opcao_batalha == 1) {
            printf("Você atacou o slime e causou dano!");
        }
        if (opcao_batalha == 2){
            printf("Você dialoga com o slime, e ele se acalma!");
        }
        if (opcao_batalha == 3){
            int opcao_inventario;
            printf("\n------------------------------------------");
            printf("\nVocê abri seu inventário!");
            printf("\nSlot1: Espada Simples (1x) - (Equipado!)");
            printf("\nSlot2: Escudo Simples (1x) - (Equipado!)");
            printf("\nSlot3: Poção de Cura Pequena (9x)");
            printf("\nSlot4: -------------------");
            printf("\nSlot5: -------------------");
            printf("\nSlot6: -------------------");
            printf("\nSlot7: -------------------");
            printf("\nSlot8: -------------------");
            printf("\nSlot9: -------------------");
            printf("\nSlot10: -------------------");
            printf("\n-------------------------------------------");
            printf("\n1 - Fechar Inventário!");
            printf("\n2 - Usar poção de cura pequena!");
            printf("\n-------------------------------------------");
            printf("\nDigite o número da ação que deseja tomar: ");
            scanf("%d", &opcao_inventario);
            printf("\n-------------------------------------------");
        }
        if (opcao_batalha == 4){
            printf("Você foge para longe do slime!");
        }
        if (opcao_batalha > 4) {
            printf("Nenhuma das opções acima está valida! por favor repita a ação!");
        }
    }
    
    if (opcao == 2){
        char nick[] = "Felipe Gaspar";
        int lv = 1;
        int xp = 0;
        int points = 5;
        int STR = 6;
        int DEF = 1;
        int DEX = 5;
        int MIND = 8;
        int LUCKY = 10;
        int opcao_status;
        printf("\n-------------------------\n");
        printf("INFO - PLAYER\n");
        printf("Nick: %s\n", nick);
        printf("Nível: %d\n", lv);
        printf("Pontos de Habilidade: %d\n", points);
        printf("-------------------------\n");
        printf("STATUS - PLAYER\n");
        printf("STR: %d\n", STR);
        printf("DEF: %d\n", DEF);
        printf("DEX: %d\n", DEX);
        printf("MIND: %d\n", MIND);
        printf("LUCKY: %d\n", LUCKY);
        printf("-------------------------\n");
        printf("HABILITYS - PLAYER\n");
        printf("Slot1: -------------\n");
        printf("Slot2: -------------\n");
        printf("Slot3: -------------\n");
        printf("Slot4: -------------\n");
        printf("-------------------------\n");
        printf("1 - Fechar Status!\n");
        printf("2 - Adicionar Pontos!\n");
        printf("--------------------------------------------\n");
        printf("Digite o número da ação que deseja tomar: \n");
        scanf("%d", &opcao_status);
        printf("--------------------------------------------\n");
        
    }

    return 0;
}
