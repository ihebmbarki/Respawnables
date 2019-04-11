prog:chrono.o main.o 
	gcc chrono.o  main.o -o prog -lSDL -lSDL_image -lSDL_mixer  -lSDL_ttf -g
main.o:main.c
	 gcc -c main.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
enemy.o:chrono.c
	gcc -c chrono.c  -lSDL -lSDL_image -lSDL_mixer  -lSDL_ttf -g
