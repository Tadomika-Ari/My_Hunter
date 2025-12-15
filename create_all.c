/*
** EPITECH PROJECT, 2025
** create all button or background
** File description:
** create_all
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Color.h>
#include "include/my.h"
#include "include/struct_game.h"
#include <stdio.h>

int create_sprite(game_t *game)
{
    sfVector2f scale = {0.50, 0.50};
    sfVector2f positiontitle = {225, 100};

    game->image.texture = sfTexture_createFromFile("./ressource/menu.png",
        NULL);
    game->image.sprite = sfSprite_create();
    game->image.texture2 = sfTexture_createFromFile("./ressource/Title.png",
        NULL);
    game->image.sprite2 = sfSprite_create();
    sfSprite_setScale(game->image.sprite2, scale);
    sfSprite_setPosition(game->image.sprite2, positiontitle);
    sfSprite_setTexture(game->image.sprite, game->image.texture, sfTrue);
    sfSprite_setTexture(game->image.sprite2, game->image.texture2, sfTrue);
    return 0;
}

int create_button(game_t *game)
{
    sfVector2f scalestart = {0.30, 0.30};
    sfVector2f positionstart = {280, 350};
    sfVector2f scalequit = {0.30, 0.30};
    sfVector2f positionquit = {290, 450};

    game->image.texturebuttonstart = sfTexture_createFromFile(
        "./ressource/Start.png", NULL);
    game->image.spritebuttonstart = sfSprite_create();
    game->image.texturebuttonquit = sfTexture_createFromFile(
        "./ressource/Quit.png", NULL);
    game->image.spritebuttonquit = sfSprite_create();
    sfSprite_setScale(game->image.spritebuttonstart, scalestart);
    sfSprite_setPosition(game->image.spritebuttonstart, positionstart);
    sfSprite_setScale(game->image.spritebuttonquit, scalequit);
    sfSprite_setPosition(game->image.spritebuttonquit, positionquit);
    sfSprite_setTexture(game->image.spritebuttonstart,
        game->image.texturebuttonstart, sfTrue);
    sfSprite_setTexture(game->image.spritebuttonquit,
        game->image.texturebuttonquit, sfTrue);
    return 0;
}
