/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

static void my_put_help2(void)
{
	my_putstr("To win you should run the more far as possible !\n");
	my_putstr("\n This game was created with CSFML.\n\n");
	my_putstr("USAGE\n");
	my_putstr("./my_runner map.txt\n\n\n");
	my_putstr("OPTIONS\n");
	my_putstr(" -i	  launch the game in infinity mode.\n");
	my_putstr(" -h	  print the usage and quit\n\n");
	my_putstr("USER INTERACTIONS\n");
	my_putstr(" SPACE_KEY	jump.\n");
}

static void my_put_help(void)
{
	my_putstr("                ---RUNNER---\n");
	my_putstr("This game is a reproduction of a runner game ");
	my_putstr("it's a kind of game really famous !\n");
	my_putstr("                     :ymmds.\n");
	my_putstr("                    -mmmmmmh\n");
	my_putstr("            /sssssss+ymmmmm/.\n");
	my_putstr("          .ymmhhmmmmmd+::--hmd\n");
	my_putstr("         +mmy..ymmmmmmmh:smmy.\n");
	my_putstr("       `hmd/ /mmmmmm+.ymmmh:\n");
	my_putstr("       `+o`.hmmmmmy.   -o/\n");
	my_putstr("          +mmmmmmh`\n");
	my_putstr("        -hmmmmmmmmd+\n");
	my_putstr(":oooooosmmmms`.ymmmmd.\n");
	my_putstr("dmmmmmmmmmh-    -hmmm-\n");
	my_putstr("`--------.       +mmh\n");
	my_putstr("                 dmm/\n");
	my_putstr("                :mmm`\n");
	my_putstr("                ymms\n");
	my_putstr("                smd.\n");
	my_putstr("------------------------------\n");
	my_put_help2();
}

int main(int ac, char **av)
{
	if (ac == 2) {
		if (my_strcmp(av[1], "-h") == 1) {
			my_put_help();
			return (0);
		}
		if (my_strcmp(av[1], "-i") == 1) {
			return (my_runner());
		}
		write (2, "Retry with -h\n", 14);
		return (84);
	}
	write (2, "Retry with -h\n", 14);
	return (84);
}
