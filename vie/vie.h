#ifndef VIE_H_
#define VIE_H_
typedef struct vie
{
	int nb;
	SDL_Rect position;
	SDL_Surface *fond1;
	SDL_Surface *fond2;
	SDL_Surface *fond3;
	
	
}vie;

void initialiservie(vie *vie);
void affichervie(vie *vie,SDL_Surface *ecran);

#endif
