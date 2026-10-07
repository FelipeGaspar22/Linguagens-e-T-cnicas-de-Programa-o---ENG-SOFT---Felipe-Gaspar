#include <stdio.h>

int main()
{
    int segundos = 0;
    int minutos = 0;
    int horas = 0;
    int dias = 0;
    int meses = 0;
    int anos = 0;
    int decada = 0;

    
    for(; segundos < 61; segundos++) {
        printf("Segundos: %d | Minutos: %d | Horas: %d | Dias: %d | Meses: %d | Anos: %d | Decadas: %d\n", segundos, minutos, horas, dias, meses, anos, decada);
        if(segundos == 60){
            segundos = 0;
            minutos++;
            if(minutos == 60){
                minutos = 0;
                horas++;
                if(horas == 24){
                    horas = 0;
                    dias++;
                    if(dias == 30){
                        dias = 0;
                        meses++;
                        if(meses == 12){
                            meses = 0;
                            anos++;
                            if(anos == 10){
                                anos = 0;
                                decada++;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
