#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "vie.h"
void initialiservie(vie *vie)
{
vie->nb=3;
vie->position.x = 122.5 ;
vie->position.y = 150 ;
vie->fond1 = IMG_Load("f1.png");
vie->fond2 = IMG_Load("f2.png");
vie->fond3 = IMG_Load("f3.png");
}

void affichervie(vie *vie,SDL_Surface *ecran)
{
if(vie->nb==3)
{
SDL_BlitSurface(vie->fond3,NULL, ecran,&vie->position);

}
if(vie->nb==2)
{
SDL_BlitSurface(vie->fond2,NULL, ecran,&vie->position);
}
if(vie->nb==1)
{
SDL_BlitSurface(vie->fond1,NULL, ecran,&vie->position);
}


SDL_Flip(ecran);

vie->position.x = 100 ;
vie->position.y = 150 ;

}
