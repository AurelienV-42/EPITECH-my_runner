/*
** EPITECH PROJECT, 2018
** runner
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

typedef struct
{
	sfIntRect rect_runner;
	sfRenderWindow* window;
	sfClock *clock_runner;
	sfClock *clock_plx;
	sfClock *clock_event;
	sfTime time_runner;
	sfTime time_plx;
	float sec_runner;
	float sec_plx;
	sfVector2f pos_runner;
	sfVector2f pos_sun;
	sfVector2f pos_mountain;
	sfVector2f pos_road;
	sfSprite* sprite_runner;
	sfTexture* runner;
	sfTexture* plx_sun;
	sfTexture* plx_mountain;
	sfTexture* plx_road;
	sfSprite* sprite_sun;
	sfSprite* sprite_mountain;
	sfSprite* sprite_road;
	sfEvent event;
	int score;
	int speed;
	int end_game;
}runner_t;
