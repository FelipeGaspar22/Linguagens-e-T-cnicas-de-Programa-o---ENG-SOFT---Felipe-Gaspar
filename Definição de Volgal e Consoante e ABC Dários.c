#include <stdio.h>

int main()
{
    char letra;
    printf("\nInsira uma letra: ");
    scanf("%c", &letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("\nEssa letra é uma vogal!");
        if (letra == 'a' || letra == 'o'){
            printf("\nAoba!!!!");
        } else if(letra == 'i' || letra == 'u'){
            printf("\nLá ele!");
        } else{
            printf("\nSix Seven");
        }
    } else{
        printf("\nEssa letra é uma consoant!");
    }
    
switch (letra) {
    case 'a':
        printf("A de Amor");
    break;
    case 'b':
        printf("B de Bola");
    break;
    case 'c':
        printf("C de Casada");
    break;
    case 'd':
        printf("D de Dado");
    break;
    case 'e':
        printf("E de Estilo");
    break;
    case 'f':
        printf("F de Fogo");
    break;
    case 'g':
        printf("G de Guindaste");
    break;
    case 'h':
        printf("H de Heroi");
    break;
    case 'j':
        printf("J de Jogo");
    break;
    case 'k':
        printf("K de Kataputa");
    break;
    case 'l':
        printf("L de Liga");
    break;
    case 'm':
        printf("M de Mentos");
    break;
    case 'n':
        printf("N de Não");
    break;
    case 'p':
        printf("P de Pantera");
    break;
    case 'q':
        printf("Q de Quadrado");
    break;
    case 'r':
        printf("R de Relíquia");
    break;
    case 's':
        printf("S de Satisfação");
    break;
    case 't':
        printf("T de Thanos");
    break;
    case 'v':
        printf("V de Vagabundo");
    break;
    case 'w':
        printf("W de While");
    break;
    case 'x':
        printf("X de Xámine");
    break;
    case 'y':
        printf("Y de Yoshikage Kira");
    break;
    case 'z':
        printf("Z de Zuga Takaizo");
    break;
}

    return 0;
}
