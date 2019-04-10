#ifndef PERSO_H_
#define PERSO_H_
typedef struct objet
{
	SDL_Rect position;
	SDL_Surface *image;
	
}objet;


void initialiseobjet(objet *objet);

void afficherobjet(objet objet,SDL_Surface *ecran);

#endif 
