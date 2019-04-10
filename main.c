#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include <unistd.h>
#include "objet.h"

void main(){

objet objet ;
int continuer=1 ;
SDL_Surface *ecran ;
ecran = SDL_SetVideoMode(1000, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_RESIZABLE);

initialiseobjet(&objet);
while (continuer)
{
afficherobjet(objet,&ecran);
SDL_Flip(ecran);
SDL_Delay(80);
}



}
