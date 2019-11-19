/*
** EPITECH PROJECT, 2018
** runner
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

void to_print(int score)
{
	my_putstr("GG\nYour score is : ");
	my_putnbr(score);
	my_putchar('\n');
}

void to_destroy(runner_t *ptr)
{
	sfClock_destroy(ptr->clock_runner);
	sfClock_destroy(ptr->clock_plx);
	sfClock_destroy(ptr->clock_event);
	sfSprite_destroy(ptr->sprite_sun);
	sfSprite_destroy(ptr->sprite_mountain);
	sfSprite_destroy(ptr->sprite_road);
	sfSprite_destroy(ptr->sprite_runner);
	sfTexture_destroy(ptr->plx_sun);
	sfTexture_destroy(ptr->plx_mountain);
	sfTexture_destroy(ptr->plx_road);
	sfTexture_destroy(ptr->runner);
	sfRenderWindow_destroy(ptr->window);
	free(ptr);
}
