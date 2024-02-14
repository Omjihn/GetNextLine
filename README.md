<h1 align="center">
	GET NEXT LINE
</h1>

> [!NOTE]
> French manual below

## English Manual

Prototype :

```
char  *get_next_line( int fd );
```

This C function returns the next line of the file descriptor you provided.
If there is no line or the fd is not valid, it will return NULL.

Please note that each returned pointer is allocated in the heap with malloc, and they need to be freed.

This function uses a buffer, you can change its value at compilation with the -D flag. Here's an example :

```
>  gcc main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE 42
```

You also can change the BUFFER_SIZE value in the get_next_line.h

If you need to read long lines, it's not recommended to use a very low buffer size.

### WARNING

	This function can cause MEMORY LEAKS.
	To avoid this, you need to be sure you have read all the file.
	Be sure that the function returns NULL when you put a valid fd.
	You can use Valgrind to be sure that all the memory has been freed.


This repository contains the get_next_line_bonus files.
This alternative version allows you to use different file descriptors simultaneously.

If you encounter an unexpected error, please send me a detailed report, and I will try to fix it.

> [!CAUTION]
> This function is one of the first projects at 42 school.
If you are a 42 student, please don't copy-paste this code if you haven't passed this project.
All the knowlages from this project will be very useful for your cursus.

<details>

<summary>French Manual</summary>

Prototype :

```
char  *get_next_line( int fd );
```

Cette fonction retourne un pointeur contenant la prochaine ligne du descripteur de fichier passé en paramètre.
Si il n'y a pas de ligne ou que le descripteur de fichier n'est pas valide, la fonction retournera NULL.

Chaque pointeur retourné par la fonction sera alloué dans la mémoire de tas (heap) avec malloc, il faudra libérer chaque pointeur avec la fonction free.

Cette fonction utilise une réserve, vous pouvez changer le nombre de caractères en réserve à la compilation avec l'option -D. Voici un exemple :

```
>  gcc main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE 42
```

Vous pouvez aussi changer la valeur "BUFFER_SIZE" directement dans get_next_line.h

Si vous avez besoin de lire de longues lignes, il n'est pas recommandé d'avoir "BUFFER_SIZE" très bas.

### ATTENTION

	Cette fonction peut causer des FUITES MEMOIRES.
	Pour éviter cela, soyez sûr.e de lire l'intégralité du fichier.
	Un descripteur de fichier valide retournant NULL permet de s'assurer que la fonction a libéré la mémoire.
	Vous pouvez utiliser Valgrind afin d'être sûr.e que toute la mémoire allouée a bien été libérée.

Ce projet contient les fichiers de get_next_line_bonus.
Cette version alternative permet d'utiliser la fonction avec différents descripteurs de fichier en même temps.

Si vous rencontrez une erreur inattendue, merci de m'envoyer un rapport détaillé du problème. J'essaierai de le régler.


Cette fonction est l'un des premiers projets de l'école 42.
Si vous êtes étudiant.e à l'école 42, ne vous contentez pas de copier-coller le code sans être capable de le refaire de vous-même.
Toutes les connaissances de ce projet seront très utiles pour la suite de votre cursus.

</details>
