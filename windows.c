/*
** EPITECH PROJECT, 2025
** main graphiacal windows
** File description:
** Bootstrap
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Color.h>
#include "include/my.h"
#include "include/struct_game.h"
#include <stdio.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>

static void check_zone_button(game_t *game)
{
    if (game->mouse.x >= 286 && game->mouse.y >= 355)
        if (game->mouse.x <= 490 && game->mouse.y <= 429) {
            start_game(game);
        }
    if (game->mouse.x >= 286 && game->mouse.y >= 455)
        if (game->mouse.x <= 490 && game->mouse.y <= 529) {
            sfMusic_play(game->music);
            sfRenderWindow_close(game->window);
        }
}

void manage_mouse_click(sfMouseButtonEvent *event, game_t *game)
{
    if (event->type == sfEvtMouseButtonPressed) {
        sfMusic_play(game->music);
        check_zone_button(game);
    }
}

static int my_close(game_t *game, sfEvent *event)
{
    if (event->type == sfEvtKeyPressed && event->key.code == sfKeyEscape) {
        sfRenderWindow_close(game->window);
    }
    if (event->type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    return 0;
}

void analyse_event(game_t *game, sfEvent *event)
{
    manage_mouse_click(&event->mouseButton, game);
    my_close(game, event);
}

static int create_windows(game_t *game)
{
    game->mode.width = 800;
    game->mode.height = 600;
    game->mode.bitsPerPixel = 32;
    return 0;
}

static int display_screen(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->image.sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->image.sprite2, NULL);
    sfRenderWindow_drawSprite(game->window, game->image.spritebuttonstart,
        NULL);
    sfRenderWindow_drawSprite(game->window, game->image.spritebuttonquit,
        NULL);
    sfRenderWindow_display(game->window);
    return 0;
}

int run(game_t *game)
{
    sfEvent event;

    create_sprite(game);
    create_button(game);
    game->window = sfRenderWindow_create(game->mode, "LOL of river",
        sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(game->window)) {
        game->mouse = sfMouse_getPositionRenderWindow(game->window);
        while (sfRenderWindow_pollEvent(game->window, &event)) {
            analyse_event(game, &event);
        }
        sfRenderWindow_clear(game->window, sfBlack);
        display_screen(game);
    }
    sfMusic_destroy(game->music);
    sfMusic_destroy(game->musique_game);
    sfRenderWindow_destroy(game->window);
    return 0;
}

static void init_music(game_t *game)
{
    game->music = sfMusic_createFromFile("./ressource/ok.ogg");
    game->ramusfr = sfMusic_createFromFile("./ressource/ok_french.ogg");
    game->musique_game = sfMusic_createFromFile("./ressource/Worlds-2014.ogg");
}

int main(int ac, char const *av[])
{
    game_t game;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("Bienvenue dans la rivière !\n");
        my_putstr("A vous de smite le carapateur pour gagner !\n");
        my_putstr("Vous devez simplement cliquer sur le carap, simple non ?\n");
        my_putstr("Seulement une touche de disponible : echap pour quitter");
    } else if (ac == 1) {
        init_music(&game);
        create_windows(&game);
        run(&game);
    } else {
        return 84;
    }
    return 0;
}
