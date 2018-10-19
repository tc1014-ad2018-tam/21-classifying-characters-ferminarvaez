//Fermín Narváez Reyes A01411229
#include <stdio.h>

int main() {
    char palabra[200]; // Valor del string
    int a=0; // Declaración de variables
    
    printf("Escribir: \n"); // Output
    fgets(palabra, sizeof(palabra), stdin);
    
    //PROCESO GIGANE
    while(palabra[a]!='\n'){
        if((palabra[a]>64 && palabra[a]<91) || (palabra[a]>96 && palabra[a]<123)){
            if(palabra[a]==65||palabra[a]==69||palabra[a]==73||palabra[a]==79||palabra[a]==85||palabra[a]==97||palabra[a]==101
            ||palabra[a]==105||palabra[a]==111||palabra[a]==117){
                printf("%c es una vocal\n", palabra[a]); // Output que informa lo que es
            } else{
            printf("%c es una consonante\n", palabra[a]); // Output que informa lo que es
            }
        }
        else if(palabra[a]==32){
            printf("' ' es un espacio\n", palabra[a]); // Output que informa lo que es
        }
        else if((palabra[a]>47&&palabra[a]<58)){
            printf("%c es un digito\n", palabra[a]); // Output que informa lo que es
        }
        else{
            printf("%c es un carácter especial\n", palabra[a]); // Output que informa lo que es
        }
        a++;
    }
    return 0; // FIN
}