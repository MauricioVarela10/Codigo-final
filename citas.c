# include <stdio.h>
    int opcion,edad,id,telefono;
    char nombre[200],sexo[50],sector[70],email[200];
    int main(){
    FILE *PPF=NULL;
    FILE *PPF2=NULL;

    PPF= fopen("Mb.txt","r");
    PPF2= fopen("RD.txt","w");
    char cara[200],cara2[400];
    for (int i = 0; i < 5; i++)
    {
    fgets(cara,200,PPF);
    printf("%s",cara);
    }

    scanf("%d",&opcion);
    

    if (opcion==1)
    {
        printf("Ingrese su nombre: \n");
        scanf("%s",&nombre);
        printf("Ingrese su edad: \n");
        scanf("%d",&edad);
        printf("Ingrese su numero de cedula: \n");
        scanf("%d",&id);
        printf("Ingrese su sexo: \n");
        scanf("%s",&sexo);
        printf("Ingrese su sector: \n");
        scanf("%s",&sector);
        printf("Ingrese su telefono/celular: \n");
        scanf("%d",&telefono);
        printf("Ingrese su correo electronico: \n");
        scanf("%d",&email);
        fprintf(PPF2,"Nombre: %s\n Edad: %d\n Id: %d\n Sexo: %s\n Sector: %s\n Telefono o Celular: %d\n Email: %s\n",nombre,edad,id,sexo,sector,telefono,email);
        printf("!!!La informacion fue registrada correctamente!!! \n");
    }
    else
    {
        printf("Gracias por utilizar el servicio");
    }  
    fclose(PPF2);
    fclose(PPF);
    }
    
