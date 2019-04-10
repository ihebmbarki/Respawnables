#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include <unistd.h>
#include "ennemi.h"
#include "map.h"
#include "vie.h"
#include "perso.h"
#include "collision.h"
#include "scrolling.h"


void collisionennemi(perso *perso,ennemis *ennemi,SDL_Rect *camera,vie *vie)
{
if(perso->position.y==ennemi->position.y)
if((((perso->position.x+perso->fond1->w > ennemi->position.x)&&(perso->position.x+perso->fond1->w < ennemi->position.x+ennemi->fond1->w))||((perso->position.x < ennemi->position.x+ennemi->fond1->w)&&(perso->position.x > ennemi->position.x)))/*&&perso->position.y==255*/)
{
SDL_Delay(100);
ennemi->position.x = 500 ;
perso->position.x = 100 ;
perso->position.y = 275 ;
camera->x=0;

vie->nb--;
}
}
