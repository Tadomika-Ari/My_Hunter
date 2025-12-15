/*
** EPITECH PROJECT, 2025
** option
** File description:
** option
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
#include <time.h>

void random_spawn(game_t *game)
{
    int yrand;

    srand(time(NULL));
    yrand = rand() % 295 + 150;
    game->image.positioncarap.y = yrand;
}

static void reset_to_spawn(game_t *game)
{
    game->image.positioncarap.x = -50.f;
    random_spawn(game);
    sfSprite_setPosition(game->image.spritecarapateur,
        game->image.positioncarap);
}

void check_border(game_t *game)
{
    sfFloatRect bounds;
    float win_w;

    if (!game || !game->image.spritecarapateur)
        return;
    bounds = sfSprite_getGlobalBounds(game->image.spritecarapateur);
    win_w = (float)850;
    if (bounds.left >= win_w)
        reset_to_spawn(game);
}

int option(game_t *game)
{
    return 0;
}
