test:objet.o main.o
	gcc objet.o main.o  -o test -lSDL -lSDL_image -lSDL_mixer -g
main.o:main.c
	gcc -c main.c -lSDL -lSDL_image -lSDL_mixer -g
fonction.o:objet.c
	gcc -c objet.c -lSDL -lSDL_image -lSDL_mixer -g
