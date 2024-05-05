#include "tdas/extra.h"
#include "tdas/list.h"
#include "tdas/map.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

typedef struct {
  char id[100];
  char title[100];
  List *genres;
  List* director;
  float rating;
  int year;
  int decada;
} Film;

typedef struct{
  char nombre[100];
  List *Peliculas;
} NodoDirector;

typedef struct{
  char genero[100];
  List *Peliculas;
}NodoGenero;

typedef struct{
  int decada;
  List *Peliculas;
}NodoDecadas;

typedef struct
{
  float rating;
  List *Peliculas;
}NodoRating;

// Menú principal
void mostrarMenuPrincipal() {
  limpiarPantalla();
  puts("========================================");
  puts("     Base de Datos de Películas");
  puts("========================================");

  puts("1) Cargar Películas");
  puts("2) Buscar por id");
  puts("3) Buscar por director");
  puts("4) Buscar por género");
  puts("5) Buscar por década");
  puts("6) Buscar por rango de calificaciones");
  puts("7) Buscar por década y género");
  puts("8) Salir");
}

/**
 * Compara dos claves de tipo string para determinar si son iguales.
 * Esta función se utiliza para inicializar mapas con claves de tipo string.
 *
 * @param key1 Primer puntero a la clave string.
 * @param key2 Segundo puntero a la clave string.
 * @return Retorna 1 si las claves son iguales, 0 de lo contrario.
 */
int is_equal_str(void *key1, void *key2) {
  return strcmp((char *)key1, (char *)key2) == 0;
}

/**
 * Compara dos claves de tipo entero para determinar si son iguales.
 * Esta función se utiliza para inicializar mapas con claves de tipo entero.
 *
 * @param key1 Primer puntero a la clave entera.
 * @param key2 Segundo puntero a la clave entera.
 * @return Retorna 1 si las claves son iguales, 0 de lo contrario.
 */
int is_equal_int(void *key1, void *key2) {
  return *(int *)key1 == *(int *)key2; // Compara valores enteros directamente
}

//Funcion para borrar la ultima comilla en caso de que sean 2 o mas generos o directores
void borrarComillas(char *cadena)
{
  int len = strlen(cadena);
  if (cadena[len - 1] == '"'){
    cadena[len - 1] = '\0';
    memmove(cadena, cadena, len - 1);
  }
}
//Funcion para quitar el espacio incial en caso de que haya
char *espacioInicial(char *str) {

    while (isspace((unsigned char)*str)) str++;       
   //Mientras el primer carácter es un espacio, avanzamos el puntero del inicio de la cadena

    return str; //Retornamos la cadena cambiada

}

/**
 * Carga películas desde un archivo CSV y las almacena en mapas por id, rating, decada, genero y director.
 */
void cargar_peliculas(Map *pelis_byid, Map *pelis_byrating, Map *pelis_bydecada, Map * pelis_bygenero, Map * pelis_bydirector) {
  // Intenta abrir el archivo CSV que contiene datos de películas
  FILE *archivo = fopen("data/Top1500.csv", "r");
  if (archivo == NULL) {
    perror(
        "Error al abrir el archivo"); // Informa si el archivo no puede abrirse
    return;
  }

  char **campos;
  // Leer y parsear una línea del archivo CSV. La función devuelve un array de
  // strings, donde cada elemento representa un campo de la línea CSV procesada.
  campos = leer_linea_csv(archivo, ','); // Lee los encabezados del CSV

  // Lee cada línea del archivo CSV hasta el final
  while ((campos = leer_linea_csv(archivo, ',')) != NULL) {
    // Crea una nueva estructura Film y almacena los datos de cada película
    Film *peli = (Film *)malloc(sizeof(Film));
    strcpy(peli->id, campos[1]);    // Asigna ID
    strcpy(peli->title, campos[5]); // Asigna título
    peli->genres = list_create();   // Inicializa la lista de géneros
    peli->rating = atof(campos[8]); //Asigna el rating
    peli->year =
        atoi(campos[10]); // Asigna año, convirtiendo de cadena a entero
    peli->decada = ((int)(trunc(peli->year / 10) * 10) % 100) ; // Asigna década;

    
    peli->genres = list_create(); //Creamos la lista de géneros de la película

    borrarComillas(campos[11]); //Borramos las comillas en caso de que haya

    char *token = strtok(campos[11], ","); //Cortamos el campo de géneros hasta una coma

    while (token != NULL) { //Mientras token no sea NULL

        char *clean_token = espacioInicial(token); //Limpiaremos el género en caso de que tenga espacios al principio
        list_pushBack(peli->genres, strdup(clean_token)); //Ahora agregamos el género a la lista de géneros de la película

        token = strtok(NULL, ","); //Volvemos a cortar la siguiente parte de la cadena hasta la coma
    }

    peli->director = list_create(); //Creamos la lista de directores de la película
    
    borrarComillas(campos[14]); //Borramos las comillas en caso de que haya
    char *token2 = strtok(campos[14], ","); //Cortamos el campo de directores hasta una coma
    while (token2 != NULL) { //Mientras token2 no sea NULL
      char *clean_token2 = espacioInicial(token2); //Limpiaremos el director en caso de que tenga espacios al principio
      list_pushFront(peli->director, strdup(clean_token2)); //Ahora agregamos el director a la lista de directores de la película
      token2 = strtok(NULL, ","); //Volvemos a cortar la siguiente parte de la cadena hasta la coma

    }
    // Inserta la película en el mapa usando el ID como clave
      map_insert(pelis_byid, peli->id, peli);// Guarda la pelicula en el mapa por id
    // Se guarda la pelicula en el mapa por decada
      if (map_search(pelis_bydecada, &peli->decada) == NULL){
        //Se pregunta si aun no esta creada una lista de peliculas en esa decada
        NodoDecadas *nodo = (NodoDecadas *)malloc(sizeof(NodoDecadas));
        nodo->decada = peli->decada;
        nodo->Peliculas = list_create();
        list_pushFront(nodo->Peliculas, peli);
        map_insert(pelis_bydecada, &nodo->decada, nodo);//Se creo y se inserta
      }
      else{
        //Si ya existe una lista de peliculas en esa decada, se agrega la pelicula
        MapPair *aux = map_search(pelis_bydecada, &peli->decada);
        NodoDecadas *nodo = (NodoDecadas *)aux->value;
        list_pushBack(nodo->Peliculas, peli);
      }

      if (map_search(pelis_byrating, &peli->rating) == NULL){
        //Se pregunta si aun no esta creada una lista de peliculas con ese rating
        NodoRating *nodo = (NodoRating *)malloc(sizeof(NodoRating));
        nodo->rating = peli->rating;
        nodo->Peliculas = list_create();
        list_pushFront(nodo->Peliculas, peli);
        map_insert(pelis_byrating, &nodo->rating, nodo);//Se creo y se inserta
      }
      else{
        //Si ya existe una lista de peliculas en esa decada, se agrega la pelicula
        MapPair *aux = map_search(pelis_byrating, &peli->rating);
        NodoRating *nodo = (NodoRating *)aux->value;
        list_pushBack(nodo->Peliculas, peli);
      }
    
    //Se guarda en una lista, lo anterior que nos dio el token
    List* generos = peli->genres;
    void *genre_ptr = list_first(generos);
    while (genre_ptr != NULL){
      char *genre = (char *)genre_ptr;
      if (map_search(pelis_bygenero, genre) == NULL){
        //Si no encuentra el genero en el mapa, se crea una nueva lista de peliculas
        NodoGenero *nodo = (NodoGenero *)malloc(sizeof(NodoGenero));
        strcpy(nodo->genero, genre);
        nodo->Peliculas = list_create();
        list_pushFront(nodo->Peliculas, peli);
        map_insert(pelis_bygenero, genre, nodo);
      }
      else{
        //Si ya existe el genero en el mapa, se agrega la pelicula a la lista
        MapPair *aux = map_search(pelis_bygenero, genre);
        NodoGenero *nodo = (NodoGenero *)aux->value;
        list_pushBack(nodo->Peliculas, peli);
      }
      genre_ptr = list_next(generos);//Se pasa al siguiente genero
    }
    //Se iguala la lista a la lista anteriormente limpiada
    List *director_list = peli->director;
    void *director_ptr = list_first(director_list);
    
    while (director_ptr != NULL){
      
      char *director = (char *)director_ptr;
      if (map_search(pelis_bydirector, director) == NULL){
        //Si no encuentra el director en el mapa, se crea una nuevo nodo de director
        NodoDirector *nodo = (NodoDirector *)malloc(sizeof(NodoDirector));
        strcpy(nodo->nombre, director);
        nodo->Peliculas = list_create();//se crea una lista para guardar las peliculas que contengan este genero
        list_pushFront(nodo->Peliculas, peli);
        map_insert(pelis_bydirector, director, nodo);
      }
      else{
        //Si ya existe el director en el mapa, se agrega la pelicula a la lista
        MapPair *aux = map_search(pelis_bydirector, director);
        NodoDirector *nodo = (NodoDirector *)aux->value;
        list_pushBack(nodo->Peliculas, peli);
      }
      director_ptr = list_next(director_list);//Se pasa al siguiente director 
    }
    
  }
  fclose(archivo); // Cierra el archivo después de leer todas las líneas

  // Itera sobre el mapa para mostrar las películas cargadas
  MapPair *pair = map_first(pelis_byid);
  while (pair != NULL) {
    Film *peli = pair->value;
    printf("ID: %s, Título: %s, Año: %d\n", peli->id, peli->title, peli->year);
    pair = map_next(pelis_byid); // Avanza al siguiente par en el mapa
  }
}

//Muestra los datos de la pelicula
void mostrarDatosPelicula(Film *peli)
{
  // Muestra el título y el año de la película
  printf("Título: %s\nAño: %d\n", peli->title, peli->year);
  // Muestra la lista de directores de la película
  printf("Director(es):");
  List *directores = peli->director;
  void *director_ptr = list_first(directores);
  printf("%s",(char *) director_ptr);
  director_ptr = list_next(directores);
  while (director_ptr != NULL)
    {
      char *director = (char *)director_ptr;
      printf(", %s", director);
      director_ptr = list_next(directores);
    }
  printf("\n");
  // Muestra la lista de géneros de la película
  printf("Género(s):");
  List *generos = peli->genres;
  void *genero_ptr = list_first(generos);
  printf("%s",(char *) genero_ptr);
  genero_ptr = list_next(generos);
  while (genero_ptr != NULL)
    {
      char *genero = (char *)genero_ptr;
      printf(", %s", genero);
      genero_ptr = list_next(generos);
    }
  printf("\n");
  // Muestra el rating de la película
  printf("Rating: %.1f\n", peli->rating);
}
/**
 * Busca y muestra la información de una película por su ID en un mapa.
 */
void buscar_por_id(Map *pelis_byid) {
  char id[10]; // Buffer para almacenar el ID de la película

  // Solicita al usuario el ID de la película
  printf("Ingrese el id de la película: ");
  scanf(" %9[^\n]s", id); // Lee el ID del teclado

  // Busca el par clave-valor en el mapa usando el ID proporcionado
  MapPair *pair = map_search(pelis_byid, id);

  // Si se encontró el par clave-valor, se extrae y muestra la información de la
  // película
  if (pair != NULL) {
    Film *peli = pair->value; // Obtiene el puntero a la estructura de la película
    mostrarDatosPelicula(peli);
  } else {
    // Si no se encuentra la película, informa al usuario
    printf("La película con id %s no existe\n", id);
  }
}
//Funcion para buscar por rating
void buscar_por_rating(Map *pelis_byrating){
  float ratingmin, ratingmax;
  //Se le pide al usario que ingrese el rango de rating(min y max)
  printf("Ingrese el rating minimo de la película: ");
  scanf("%f", &ratingmin);
  printf("Ingrese el rating maximo de la película: ");
  scanf("%f", &ratingmax);
  if (ratingmin > 10 || ratingmin < 0 || ratingmax > 10 || ratingmax < 0 || ratingmin > ratingmax)
  {
    printf("Rating(s) inválido(s)\n");
    return;
  }
  //Se recorre el mapa de peliculas por rating
  MapPair *pair = map_first(pelis_byrating);
  while (pair != NULL)
    {
      if (*(float*)pair->key >= ratingmin && *(float*)pair->key <= ratingmax)
      {
      NodoRating *nodo = (NodoRating *)pair->value;
      List *pelis = nodo->Peliculas;
      Film *peli = (Film *)list_first(pelis);
      while (peli != NULL)
        {
            printf("-------------------------------\n");
            mostrarDatosPelicula(peli);
          peli = (Film *)list_next(pelis);
        }
      }
      pair = map_next(pelis_byrating);
    }
  printf("-------------------------------\n");
}
//funcion para buscar por decada
void buscar_por_decada(Map *pelis_bydecada){
  int decadaBuscada;
  //Se le pide al usuario que ingrese la decada que desea buscar
  printf("Ingrese la decada de la película: ");  
  scanf("%d", &decadaBuscada);
  MapPair *pair = map_search(pelis_bydecada, &decadaBuscada);//Busca el nodo en el que se encuentra la decada buscada
  
  if(pair != NULL) {
    NodoDecadas *nodo = pair->value;
    List *lista = nodo->Peliculas;

    Film *peli = (Film *)list_first(lista);
    printf("-------------------------------\n");
    while(peli != NULL) {
      //Se muestra todos los datos de la pelicula
      mostrarDatosPelicula(peli);
      printf("-------------------------------\n");

      peli = (Film *)list_next(lista);//pasa a la siguiente pelicula en la lista
    }
  } else {
    //Si no se encuentra la pelicula, informa al usuario
    printf("No se encontraron películas para la década ingresada.\n");
    printf("-------------------------------\n");
  }
}
//Funcion para buscar por director
void buscar_por_director(Map *pelis_bydirector){
  //Se ingresa el nombre del director que se desea buscar
  char directorBuscado[50];
  printf("Ingrese el nombre del director: ");
  scanf(" %49[^\n]s", directorBuscado);//Lee hasta el salto de linea o hasta 49 caracteres
  MapPair *pair = map_search(pelis_bydirector, directorBuscado);//Busca el nodo en el que se encuentra el director buscado
  if(pair != NULL){
    NodoDirector *nodo = pair->value;
    char* director = list_first(nodo->Peliculas);
    printf("-------------------------------\n");
    while(director!= NULL){
      //Muestra las películas del director buscado
      Film *peli = (Film *)director;
      mostrarDatosPelicula(peli);
      printf("-------------------------------\n");
      director = list_next(nodo->Peliculas);//Pasa al siguiente nodo en la lista
    }
  }
  else{
    //Si no se encuentra la pelicula, informa al usuario
    printf("No se encontraron películas para el director ingresado.\n");
    printf("-------------------------------\n");
  }
}

//Funcion para buscar por genero
void buscar_por_genero(Map *pelis_bygenero){
  char genero[100];
  //Se le pide al usuario que ingrese el genero que desea buscar
  printf("Ingrese el género de la película: ");
  scanf(" %99[^\n]s", genero);
  MapPair *pair = map_search(pelis_bygenero, genero);//Busca el nodo en el que se encuentra el genero buscado
  if (pair != NULL){
    NodoGenero *nodo = pair->value;
    List *lista = nodo->Peliculas;
    Film *peli = (Film *)list_first(lista);
    printf("-------------------------------\n");
    while(peli != NULL){
      //Muestra las películas del genero buscado
      mostrarDatosPelicula(peli);
      printf("-------------------------------\n");
      peli = (Film *)list_next(lista);//Pasa al siguiente nodo en la lista
    }
  }
  else{
    //Si no se encuentra la pelicula, informa al usuario
    printf("No se encontraron películas para el género ingresado.\n");
    printf("-------------------------------\n");
  }
}
//Busca por decada y genero 
void buscar_por_decada_genero(Map *pelis_bydecada, Map *pelis_bygenero)
{
  //Se le pide al usuario que ingrese la decada y el genero que desea buscar
  int decadaBuscada;
  char genero[100];
  printf("Ingrese la decada de la película: ");
  scanf("%d", &decadaBuscada);
  printf("Ingrese el género de la película: ");
  scanf(" %99[^\n]s", genero);
  MapPair *pair = map_search(pelis_bydecada, &decadaBuscada);//Busca el nodo en el que se encuentra la decada buscada
  if (pair != NULL)
  {
    NodoDecadas *nodo = pair->value;
    List *lista = nodo->Peliculas;
    Film *peli = (Film *)list_first(lista);
    printf("-------------------------------\n");
    while (peli != NULL)
    {
      if (peli->decada == decadaBuscada)
      {
        MapPair *pair2 = map_search(pelis_bygenero, genero);//Busca el nodo en el que se encuentra el genero buscado
        if (pair2 != NULL)
        {
          NodoGenero *nodo2 = pair2->value;
          List *lista2 = nodo2->Peliculas;
          Film *peli2 = (Film *)list_first(lista2);
          while (peli2 != NULL)
          {
            if (strcmp(peli->id, peli2->id) == 0)
            {
              List *generos = peli->genres;
              void *genre_ptr = list_first(generos);
              while (genre_ptr != NULL)
              {
                char *genre = (char *)genre_ptr;
                if (strcmp(genre, genero) == 0)
                {
                  //Muestra las películas de la decada y genero buscados
                  mostrarDatosPelicula(peli);
                  printf("-------------------------------\n");
                  break;
                }
                genre_ptr = list_next(generos);
              }
            }
            peli2 = (Film *)list_next(lista2);
          }
        }
      }
      peli = (Film *)list_next(lista);
    }
  }
  else
  {
    //Si no se encuentra la pelicula, informa al usuario
    printf("No se encontraron películas para la década y género ingresados.\n");
    printf("-------------------------------\n");
  }
}

int main() {
  char opcion; // Variable para almacenar una opción ingresada por el usuario
               // (sin uso en este fragmento)

  // Crea un mapa para almacenar películas, utilizando una función de
  // comparación que trabaja con claves de tipo string.
  Map *pelis_byid = map_create(is_equal_str);//Se crea el mapa para las peliculas por id
  Map *pelis_bydirector = map_create(is_equal_str);//Se crea el mapa para las peliculas por director
  Map *pelis_bygenero = map_create(is_equal_str);//Se crea el mapa para las peliculas por genero
  Map *pelis_bydecada = map_create(is_equal_int);//Se crea el mapa para las peliculas por decada
  Map *pelis_byrating = map_create(is_equal_int);//Se crea el mapa para las peliculas por rating

  do {
    mostrarMenuPrincipal();
    printf("Ingrese su opción: ");
    scanf(" %c", &opcion);

    switch (opcion) {
    case '1':
      cargar_peliculas(pelis_byid, pelis_byrating, pelis_bydecada, pelis_bygenero, pelis_bydirector);
      break;
    case '2':
      buscar_por_id(pelis_byid);//Busca por id
      break;
    case '3':
      buscar_por_director(pelis_bydirector);//Busca por director
      break;
    case '4':
      buscar_por_genero(pelis_bygenero);//Busca por genero
      break;
    case '5':
      buscar_por_decada(pelis_bydecada);//Busca por decada
      break;
    case '6':
      buscar_por_rating(pelis_byrating);//Busca por rating
      break;
    case '7':
      buscar_por_decada_genero(pelis_bydecada, pelis_bygenero);//Busca por decada y genero
      break;
    default:
      break;
    }
    presioneTeclaParaContinuar();

  } while (opcion != '8');

  return 0;
}
