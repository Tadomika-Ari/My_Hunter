/*
** EPITECH PROJECT, 2025
** game function
** File description:
** game
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
#include <SFML/Audio/Types.h>
#include <time.h>

void display_background(game_t *game)
{
    sfVector2u size_game = {1920, 1080};
    sfVector2f scale_game = {0.65, 0.75};

    game->mode.width = 1920;
    game->mode.height = 1080;
    game->mode.bitsPerPixel = 32;
    sfRenderWindow_setFramerateLimit(game->window, 60);
    sfRenderWindow_setSize(game->window, size_game);
    game->image.TextureBackground = sfTexture_createFromFile(
        "./ressource/fond.png", NULL);
    game->image.spriteBackground = sfSprite_create();
    sfSprite_setScale(
        game->image.spriteBackground, scale_game);
    sfSprite_setTexture(game->image.spriteBackground,
        game->image.TextureBackground, sfTrue);
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

static void check_kill(sfEvent *event, game_t *game)
{
    sfVector2i pixel;
    sfVector2f world;
    sfFloatRect bounds;

    if (event->type != sfEvtMouseButtonPressed)
        return;
    if (!game->image.spritecarapateur)
        return;
    pixel.x = event->mouseButton.x;
    pixel.y = event->mouseButton.y;
    world = sfRenderWindow_mapPixelToCoords(game->window, pixel, NULL);
    bounds = sfSprite_getGlobalBounds(game->image.spritecarapateur);
    if (sfFloatRect_contains(&bounds, world.x, world.y)) {
        sfSound_play(game->smite);
        game->image.positioncarap.x = -50.f;
        random_spawn(game);
        sfSprite_setPosition(game->image.spritecarapateur,
            game->image.positioncarap);
    }
}

void check_event(game_t *game, sfEvent *event)
{
    check_kill(event, game);
    my_close(game, event);
}

static void display_carapateur(game_t *game)
{
    float x = -50;
    float y = 200;
    sfVector2f scalescalecarap = {0.50, 0.50};
    sfVector2f positioncarap = {x, y};

    game->image.positioncarap.x = x;
    game->image.positioncarap.y = y;
    game->image.carapateur = sfTexture_createFromFile(
        "./ressource/carap sprite 2.png", NULL);
    game->image.spritecarapateur = sfSprite_create();
    game->image.carapateur2 = sfTexture_createFromFile(
        "./ressource/carap sprite 2 bis.png", NULL);
    sfSprite_setScale(game->image.spritecarapateur,
        scalescalecarap);
    sfSprite_setPosition(game->image.spritecarapateur, positioncarap);
    sfSprite_setTexture(game->image.spritecarapateur,
        game->image.carapateur, sfTrue);
}

void display_game(game_t *game)
{
    sfRenderWindow_clear(game->window, sfBlack);
    sfRenderWindow_drawSprite(game->window, game->image.spriteBackground, NULL);
    sfRenderWindow_drawSprite(game->window, game->image.spritecarapateur, NULL);
    sfRenderWindow_display(game->window);
}

static void deplacement(game_t *game)
{
    game->image.positioncarap.x = game->image.positioncarap.x + 5;
    sfSprite_setPosition(game->image.spritecarapateur,
        game->image.positioncarap);
    if (game->etatanim == 1) {
        sfSprite_setTexture(game->image.spritecarapateur,
            game->image.carapateur2, sfTrue);
        game->etatanim = 2;
    } else if (game->etatanim == 2) {
        sfSprite_setTexture(game->image.spritecarapateur,
            game->image.carapateur, sfTrue);
        game->etatanim = 1;
    }
    sfClock_restart(game->clock);
}

static void set_sound_and_clock(game_t *game)
{
    game->smite_buf = sfSoundBuffer_createFromFile("./ressource/smite.mp3");
    game->smite = sfSound_create();
    sfSound_setBuffer(game->smite, game->smite_buf);
    game->etatanim = 1;
    game->clock = sfClock_create();
}

int start_game(game_t *game)
{
    sfEvent event;

    set_sound_and_clock(game);
    display_background(game);
    display_carapateur(game);
    sfMusic_play(game->musique_game);
    while (sfRenderWindow_isOpen(game->window)) {
        game->time = sfClock_getElapsedTime(game->clock);
        game->seconds = game->time.microseconds / 1000000.0;
        game->mouse = sfMouse_getPositionRenderWindow(game->window);
        while (sfRenderWindow_pollEvent(game->window, &event)) {
            check_event(game, &event);
        }
        display_game(game);
        if (game->seconds > 0.005) {
            deplacement(game);
            check_border(game);
        }
    }
    return 0;
}
