/*
** EPITECH PROJECT, 2018
** runner
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

static void set_texture(runner_t *ptr)
{
	ptr->sprite_sun = sfSprite_create();
	ptr->sprite_mountain = sfSprite_create();
	ptr->sprite_road = sfSprite_create();
	ptr->sprite_runner = sfSprite_create();
	sfSprite_setTexture(ptr->sprite_sun, ptr->plx_sun, sfTrue);
	sfSprite_setTexture(ptr->sprite_mountain,
			ptr->plx_mountain, sfTrue);
	sfSprite_setTexture(ptr->sprite_road, ptr->plx_road, sfTrue);
	sfSprite_setTexture(ptr->sprite_runner, ptr->runner, sfTrue);
	sfRenderWindow_setFramerateLimit(ptr->window, 60);
}

int create_and_set_window(runner_t *ptr)
{
	ptr->pos_runner.x = 200;
	ptr->pos_runner.y = 900;
	ptr->clock_event = sfClock_create();
	ptr->clock_runner = sfClock_create();
	ptr->clock_plx = sfClock_create();
	ptr->plx_sun = sfTexture_createFromFile("pictures/sun.png", NULL);
	ptr->plx_mountain = sfTexture_createFromFile("pictures/mountain.png",
						NULL);
	ptr->plx_road = sfTexture_createFromFile("pictures/road.png", NULL);
	ptr->runner = sfTexture_createFromFile("pictures/runner.png", NULL);
	if (ptr->plx_sun == NULL)
		return (84);
	if (ptr->plx_mountain == NULL)
		return (84);
	if (ptr->plx_road == NULL)
		return (84);
	if (ptr->runner == NULL)
		return (84);
	set_texture(ptr);
	return (0);
}
