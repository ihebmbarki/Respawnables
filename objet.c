#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include <unistd.h>
#include "objet.h"



void initialiseobjet(objet *objet){
objet->position.x = 500 ;
objet->position.y = 500 ;
objet->image = IMG_Load("1.png");
}


void afficherobjet(objet objet,SDL_Surface *ecran){
SDL_BlitSurface(objet.image,NULL, ecran,&objet.position);
}


