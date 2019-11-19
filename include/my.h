/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "runner.h"
#include "unistd.h"

void my_putchar(char c);
void my_putstr(char const *str);
int my_putnbr(int nb);
int my_runner(void);
int my_strcmp(char const *str1, char const *str2);
int my_strlen(char const *str);
void to_print(int score);
void to_destroy(runner_t *ptr);
int create_and_set_window(runner_t *ptr);

#endif
