#ifndef MAIN
#define MAIN

/*<-----Standard Libraries----->*/
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdarg.h>

/*<------Data Structures------->*/

/**
 * struct list_t - singly linked list
 * @path: a path variable value
 * @next: points to the next node
 *
 * Description: PATH structure list
 *
 */
typedef struct list_t
{
	char *path;
	struct list_t *next;
} list_t;

/**
 * struct env - Array of env variables
 * @env_var: an env variable value
 *
 * Description: custom Environ structure
 */

typedef struct env
{
	char **env_var;
} New_env;

extern char **environ;
/*<---------Strings Standard----------->*/
ssize_t _getline(char **line, size_t *size, FILE *source);
int _atoi(char *s);
char *_strchr(char *s, char c);
char *_strcat(char *dest, char *src);
char *_strtok(char *str, const char *delim);
unsigned int _strcspn(char *s, char *reject);
int _strncmp(char *s1, char *s2, int num);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);

