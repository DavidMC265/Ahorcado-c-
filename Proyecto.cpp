#include <stdio.h>
#include <stdlib.h>
void menu();
void dibujoahorcado();
void peliculas();
void series();
void videojuegos();
void intentos();

main(){
   int repeticion;
   printf("\n");
   printf("\nPresiona 1 para mostrar el menu\n");
   scanf("%d", &repeticion);
   while(repeticion==1){
  dibujoahorcado();
}//end while 

}//end main 

void dibujoahorcado(){
	char comienzo;
	printf("Alberto David Ramirez Alcantara,166989\nDavid Mayorga Castelan 168665 \n");
	printf("\n******************");
	printf("\n");
	printf("     AHORCADO    \n");
	printf("\n");
	printf("        | \n");
	printf("        | \n");
	printf("        O \n");
	printf("       /|\\ \n");
	printf("       / \\ \n");
	printf("\n");
	printf(" LETRAS DISPONIBLES: \n");
	printf("\n A B C D E F G H I J K L M");
	printf("\n N O P Q R S T U V W X Y Z \n");
    printf("Presiona cualuqier boton para comenzar \n");
    scanf("%s", &comienzo);
	menu();
}//end dibujo

void menu(){
  	int opc;
	printf("\nSelecciona lo que quieres adivinar\n 1)Pelicula\n 2)Serie\n 3)Videojuego\n");
 	scanf("%d",&opc);
 
 switch(opc){
  case 1:
  peliculas();
  break;
  case 2:
  series(); 
  break;
  case 3:
  videojuegos();
  break;
  default:
  	printf("Opcion no identiicada \n");
}//end switch
}//end menu


void peliculas(){

int a,correctas=1;
int  intentos;
intentos=0;
char letra;
'e','l','g','r','i','n','c','h';
printf("\n Tienes 8 intentos \n");
printf("_ _  _ _ _ _ _ _ \n ");

for(a=0; a<8; a++){
printf("\n Introduce una letra: ");
scanf("%s", &letra);
printf("_ _  _ _ _ _ _ _ \n ");

if(letra == 'e'|| letra=='l' || letra=='g' || letra=='r' || letra=='i' ||letra=='n' || letra=='c' || letra=='h'){
printf("\nCorrecto!\n");
correctas= correctas+1;
}//end if

else if(letra!='e'|| letra!='l' || letra!='g' || letra!='r' || letra!='i' ||letra!='n' || letra!='c' || letra!='h'){
printf("\nIncorrecto!\n");
intentos=intentos+1;
}//end else
			if(intentos==1){
			printf("\n        | \n");
			printf("         \n");
			printf("         \n");
			printf("        \n");
			printf("        \n");
			printf("Te quedan 7 intentos! Intentalo de nuevo!\n");
			}//end if
	
			if(intentos==2){
			printf("        | \n");
			printf("        | \n");
			printf("        	 \n");
			printf("       		 \n");
			printf("        	\n");
			printf("Te quedan 6 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==3){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       	    \n");
			printf("       		 \n");
			printf("Te quedan 5 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==4){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("        | \n");
			printf("       		 \n");
			printf("Te quedan 4 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==5){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /| \n");
			printf("       		 \n");
			printf("Te quedan 3 intentos! Intentalo de nuevo\n");
			
			}//end if
				
			if(intentos==6){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("        	 \n");
			printf("Te quedan 2 intentos! Intentalo de nuevo\n");
			
			}//end if
			
			if(intentos==7){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("       /  \n");
			printf("Te queda solo 1 intento! Intentalo de nuevo\n");
			
			}//end if
			
			if(intentos==8){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("       / \\ \n");
			printf(" HAS PERDIDO!\n");
			printf("\nLa respuesta correcta es el grinch\n");
			main();
			}//end if
		
if(letra == 'e'){
printf("e _  _ _ _ _ _ _ \n ");
}//end if
if(letra == 'l'){
printf("_ l  _ _ _ _ _ _ \n ");
}//end if
if(letra == 'g'){
printf("_ _  g _ _ _ _ _ \n ");
}//end if
if(letra == 'r'){
printf("_ _  _ r _ _ _ _ \n ");
}//end if
if(letra == 'i'){
printf("_ _  _ _ i _ _ _ \n ");
}//end if
if(letra =='n' ){
printf("_ _  _ _ _ n _ _ \n ");
}//end if
if(letra == 'c'){
printf(" _  _ _ _ _ c _ \n ");
}//end if
if(letra == 'h'){
printf("_ _  _ _ _ _ _ h \n ");
}//end if

if(correctas==9){
printf("¡HAS GANADO!\n La respuesta es: El grinch\n");
}//end if

}//end for

main();
}//end peliculas 



void series(){

int a,correctas=1, intentos=0;
char letra;
'l','o','s','i','m','p','n';
printf("\n Tienes 8 intentos \n");
printf("_ _ _  _ _ _ _ _ _ _ \n ");

for(a=0; a<8; a++){
printf("\n Introduce una letra: ");
scanf("%s", &letra);
printf("_ _  _ _ _ _ _ _ \n ");
if(letra == 'l'|| letra=='o' || letra=='s' || letra=='i' ||letra=='m'|| letra=='p' || letra=='n'){
printf("\nCorrecto!\n");
correctas= correctas+1;
}//end if

else if(letra !='l'|| letra!='o' || letra!='s' ||  letra!='i' ||letra!='m' || letra!='p' || letra=='n'){
intentos=intentos+1;
printf("Incorrecto!\n");
}//end else 

			if(intentos==1){
			printf("\n        | \n");
			printf("         \n");
			printf("         \n");
			printf("        \n");
			printf("        \n");
			printf("Te quedan 7 intentos! Intentalo de nuevo!\n");
			}//end if
	
			if(intentos==2){
			printf("        | \n");
			printf("        | \n");
			printf("        	 \n");
			printf("       		 \n");
			printf("        	\n");
			printf("Te quedan 6 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==3){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       	    \n");
			printf("       		 \n");
			printf("Te quedan 5 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==4){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("        | \n");
			printf("       		 \n");
			printf("Te quedan 4 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==5){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /| \n");
			printf("       		 \n");
			printf("Te quedan 3 intentos! Intentalo de nuevo\n");
			
			}//end if
				
			if(intentos==6){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("        	 \n");
			printf("Te quedan 2 intentos! Intentalo de nuevo\n");
			
			}//end if
			
			if(intentos==7){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("       /  \n");
			printf("Te queda solo 1 intento! Intentalo de nuevo\n");
			
			}//end if
			
			if(intentos==8){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("       / \\ \n");
			printf(" HAS PERDIDO!\n");
			printf("\nLa respuesta correcta es los simpson\n");
			main();
			}//end if
		
	
if(letra == 'l'){
printf("l _ _  _ _ _ _ _ _ _ \n ");
}//end if
if(letra == 'o'){
printf("_ o _  _ _ _ _ _ o _ \n ");
}//end if
if(letra == 's'){
printf("_ _ s  s _ _ _ s _ _ \n ");
}//end if
if(letra == 'i'){
printf("_ _ _  _ i _ _ _ _ _  \n ");
}//end if
if(letra == 'p'){
printf("_ _ _  _ _ _ p _ _ _ \n ");
}//end if
if(letra =='n' ){
printf("_ _ _  _ _ _ _ _ _ n \n ");
}//end if

}//end for

if(correctas==7){
printf("\n¡HAS GANADO!\n La respuesta es: los simpson\n");
}//end if

main();
}//end series





void videojuegos(){

int a,intentos=0;
int correctas=1;;
char letra;
'm','i','n','e','c','a','f','t';
printf("\n Tienes 8 intentos \n");
printf("_ _ _  _ _ _ _ _ _ _ \n ");
for(a=0; a<8; a++){
printf("\n Introduce una letra: ");
scanf("%s", &letra);
if(letra == 'm'|| letra=='i' || letra=='n' || letra=='e' || letra=='c' ||letra=='r'|| letra=='a' || letra=='f'|| letra=='t'){
printf("\nCorrecto!\n");
correctas= correctas+1;
}//end if

else if(letra != 'm'|| letra!='i' || letra!='n' || letra!='e' || letra!='c' ||letra!='r' || letra!='a' || letra!='f'|| letra=='t'){
printf("Incorrecto!\n");
intentos=intentos+1;
}//end else 

			if(intentos==1){
			printf("\n        | \n");
			printf("         \n");
			printf("         \n");
			printf("        \n");
			printf("        \n");
			printf("Te quedan 7 intentos! Intentalo de nuevo!\n");
			}//end if
	
			if(intentos==2){
			printf("        | \n");
			printf("        | \n");
			printf("        	 \n");
			printf("       		 \n");
			printf("        	\n");
			printf("Te quedan 6 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==3){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       	    \n");
			printf("       		 \n");
			printf("Te quedan 5 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==4){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("        | \n");
			printf("       		 \n");
			printf("Te quedan 4 intentos! Intentalo de nuevo\n");
			}//end if
			
			if(intentos==5){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /| \n");
			printf("       		 \n");
			printf("Te quedan 3 intentos! Intentalo de nuevo\n");
			
			}//end if
				
			if(intentos==6){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("        	 \n");
			printf("Te quedan 2 intentos! Intentalo de nuevo\n");
			
			}//end if
			
			if(intentos==7){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("       /  \n");
			printf("Te queda solo 1 intento! Intentalo de nuevo\n");
			
			}//end if
			
			if(intentos==8){
			printf("        | \n");
			printf("        | \n");
			printf("        O \n");
			printf("       /|\\ \n");
			printf("       / \\ \n");
			printf(" HAS PERDIDO!\n");
			printf("\nLa respuesta correcta es minecraft\n");
			main();
			}//end if
	

if(letra == 'm'){
printf("m _ _ _ _ _ _ _ _\n ");
}//end if
if(letra == 'i'){
printf("_ i _ _ _ _ _ _ _\n ");
}//end if
if(letra == 'n'){
printf("_ _ n _ _ _ _ _ _ \n ");
}//end if
if(letra == 'e'){
printf("_ _ _ e _ _ _ _ _ \n ");
}//end if
if(letra == 'c'){
printf("_ _ _ _ c _ _ _ _\n ");
}//end if
if(letra =='r' ){
printf("_ _ _ _ _ r _ _ _ \n ");
}//end if
if(letra =='a' ){
printf("_ _ _ _ _ _ a _ _ \n ");
}//end if
if(letra =='f' ){
printf("_ _ _ _ _ _ _ f _ \n ");
}//end if
if(letra =='t' ){
printf("_ _ _ _ _ _ _ _ t \n ");
}//end if

}//end for

if(correctas==9){
printf("¡HAS GANADO!\n La respuesta es: minecraft\n");
}//end if

main();
}//end videjuegos


