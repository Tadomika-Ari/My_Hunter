/*
** EPITECH PROJECT, 2025
** struct game
** File description:
** struct_game
*/

#ifndef STR
    #define STR
typedef struct sprite_init
{
    sfTexture *texture;
    sfSprite *sprite;
    sfTexture *texture2;
    sfSprite *sprite2;
    sfTexture *texturebuttonstart;
    sfSprite *spritebuttonstart;
    sfTexture *texturebuttonquit;
    sfSprite *spritebuttonquit;
    sfTexture *TextureBackground;
    sfSprite *spriteBackground;
    sfTexture *carapateur;
    sfSprite *spritecarapateur;
    sfTexture *carapateur2;
    int etat;
    sfVector2f positioncarap;
} sprite_t;

typedef struct game
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfWindow *forwindow;
    sfMusic *music;
    sfMusic *musique_game;
    sfMusic *ramusfr;
    sfSound *smite;
    sfSoundBuffer *smite_buf;
    sfEvent event;
    sfVector2i mouse;
    sfClock *clock;
    sfTime time;
    float seconds;
    int etatanim;
    sprite_t image;
} game_t;
#endif

#ifndef GAME
    #define GAME
int create_button(game_t *game);
int create_sprite(game_t *game);
int start_game(game_t *game);
void check_border(game_t *game);
void random_spawn(game_t *game);
#endif
