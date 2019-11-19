/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

static int runner_character(runner_t *ptr)
{
	ptr->end_game = 3;
	if (ptr->clock_runner == NULL)
		return (84);
	ptr->time_runner = sfClock_getElapsedTime(ptr->clock_runner);
	ptr->sec_runner = ptr->time_runner.microseconds / 1000000.0;
	sfSprite_setPosition(ptr->sprite_runner, ptr->pos_runner);
	if (ptr->sec_runner > 0.18) {
		ptr->rect_runner.left += 58;
		sfSprite_setPosition(ptr->sprite_runner, ptr->pos_runner);
		sfClock_restart(ptr->clock_runner);
	}
	if (ptr->rect_runner.left == 58 * 5)
		ptr->rect_runner.left = 0;
	return (0);
}

static void window(runner_t *ptr)
{
	sfSprite_setTextureRect(ptr->sprite_runner, ptr->rect_runner);
	sfRenderWindow_clear(ptr->window, sfBlack);
	sfRenderWindow_drawSprite(ptr->window, ptr->sprite_sun, NULL);
	sfRenderWindow_drawSprite(ptr->window, ptr->sprite_mountain, NULL);
	sfRenderWindow_drawSprite(ptr->window, ptr->sprite_road, NULL);
	sfRenderWindow_drawSprite(ptr->window, ptr->sprite_runner, NULL);
	sfRenderWindow_display(ptr->window);
}

static int plx(runner_t *ptr)
{
	if (ptr->clock_plx == NULL)
		return (84);
	ptr->time_plx = sfClock_getElapsedTime(ptr->clock_plx);
	ptr->sec_plx = ptr->time_plx.microseconds / 1000000.0;
	if (ptr->sec_plx > 0.03) {
		ptr->pos_sun.x -= 10;
		ptr->pos_mountain.x -= 20;
		sfSprite_setPosition(ptr->sprite_sun, ptr->pos_sun);
		sfSprite_setPosition(ptr->sprite_mountain, ptr->pos_mountain);
		sfClock_restart(ptr->clock_plx);
	}
	if (ptr->pos_sun.x == - 1920)
		ptr->pos_sun.x = 0;
	if (ptr->pos_mountain.x == - 1920)
		ptr->pos_mountain.x = 0;
	return (0);
}

static void event(runner_t *ptr)
{
	sfIntRect rect_runner = {0, 0, 58, 110};
	int i = 0;

	ptr->rect_runner = rect_runner;
	while (sfRenderWindow_pollEvent(ptr->window, &ptr->event))
	{
		if (ptr->event.type == sfEvtClosed ||
		sfKeyboard_isKeyPressed(sfKeyEscape)
		== sfTrue || ptr->end_game <= 0)
			sfRenderWindow_close(ptr->window);
	}
	if (sfKeyboard_isKeyPressed(sfKeySpace) == 1) {
			ptr->pos_runner.y = 850;
			i++;
		ptr->pos_runner.y = 900;
	}
}

int my_runner(void)
{
	sfVideoMode mode = {1280, 769, 4};
	runner_t *ptr = malloc(sizeof(runner_t));

	ptr->window = sfRenderWindow_create(mode, "SFML window", sfResize |
					    sfClose, NULL);
	if (ptr->window == NULL)
		return (84);
	if (create_and_set_window(ptr) == 84)
		return (84);
	while (sfRenderWindow_isOpen(ptr->window)) {
		event(ptr);
		if (runner_character(ptr) == 84)
			return (84);
		if (plx(ptr) == 84)
			return (84);
		window(ptr);
	}
	to_print(ptr->score);
	to_destroy(ptr);
	return (0);
}
