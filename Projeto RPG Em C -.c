#include <stdio.h>

int main()
{
    
    int opcao;
    printf("\n1 - Batalhar");
    printf("\n2 - Status");
    printf("\n3 - SkillTree");
    printf("\n4 - Inventário");
    printf("\n5 - Configurações");
    printf("\nDigite o número da opção que deseja acessar: ");
    scanf("%d", &opcao);
    
    if (opcao == 1){
        int opcao_batalha;
        printf("\nVocê entrou em uma batalha contra um slime!");
        printf("\nO que você vai fazer ?");
        printf("\n1 - Lutar!");
        printf("\n2 - Dialogar!");
        printf("\n3 - Abrir Inventário!");
        printf("\n4 - Fugir!");
        printf("\nDigite o número da ação que deseja tomar: ");
        scanf("%d", &opcao_batalha);
        
        if (opcao_batalha == 1) {
            printf("Você atacou o slime e causou dano!");
        }
        if (opcao_batalha == 2){
            printf("Você dialoga com o slime, e ele se acalma!");
        }
        if (opcao_batalha == 3){
            int opcao_inventario;
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
            printf("\n1 - Fechar Inventário!");
            printf("\n2 - Usar poção de cura pequena!");
            printf("\nDigite o número da ação que deseja tomar: ");
            scanf("%d", &opcao_inventario);
        }
        if (opcao_batalha == 4){
            printf("Você foge para longe do slime!");
        }
        if (opcao_batalha > 4) {
            printf("Nenhuma das opções acima está valida! por favor repita a ação!");
        }
    }
    
    if (opcao == 2){
        int lv = 1
        float xp = 0.0
        float STR = 6.0
        float DEF = 1.0
        
        
        
    }

    return 0;
}
