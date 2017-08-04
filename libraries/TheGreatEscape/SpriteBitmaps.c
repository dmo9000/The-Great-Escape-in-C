/**
 * $D026: Sprite bitmaps and masks.
 */

#include <stdint.h>

#include "TheGreatEscape/Pixels.h"

#include "TheGreatEscape/SpriteBitmaps.h"

const uint8_t bitmap_commandant_facing_top_left_4[] =
{
  ________,________,
  ________,_XX_____,
  ________,XXXX____,
  ________,XXXXX___,
  ________,XXXXXX__,
  _______X,_XXXXX__,
  _______X,_XXXX___,
  ________,_____X__,
  ________,XXXXXXX_,
  ______XX,XXXXXXX_,
  _____XXX,XXXXX_X_,
  _____XXX,XXXXX_X_,
  _____XX_,XXXXX_X_,
  ____XXX_,XXXX_XX_,
  ____XXX_,XX___XX_,
  ____XXX_,__XXX___,
  _____XX_,XXXXX___,
  _____XX_,XXX_____,
  ____X__X,X__XX___,
  _____X__,_X_XX___,
  ______XX,X_XX____,
  ______XX,X_XX____,
  _______X,X_______,
  ______X_,_XXX____,
  ______XX,X_XX____,
  _______X,X_XX____,
  _____XXX,X_XX____,
  _______X,__XX____,
  ________,__X_____,
};

const uint8_t bitmap_commandant_facing_top_left_3[] =
{
  ________,________,
  ________,_XX_____,
  ________,XXXX____,
  ________,XXXXX___,
  ________,XXXXXX__,
  _______X,_XXXXX__,
  _______X,_XXXX___,
  ________,________,
  ________,XXXXXX__,
  ______XX,XXXXXXX_,
  ______XX,XXXXX_X_,
  _____XXX,XXXXX_X_,
  _____XX_,XXXX_XX_,
  _____XX_,XXXX_XX_,
  ____XXX_,XX___XX_,
  ____XX_X,__XXX_X_,
  ___X_X_X,XXXXX___,
  ___XX_XX,XXXX_XX_,
  ______XX,XX__X___,
  _____X__,___XX___,
  _____XXX,XX_XX___,
  ______XX,X_______,
  ______X_,__XX____,
  _______X,XX_X____,
  _______X,XX______,
  ________,XXX_____,
  _______X,_XX_____,
  ________,_XX_____,
  ________,XX______,
};

const uint8_t bitmap_commandant_facing_top_left_2[] =
{
  ________,________,
  ________,_XX_____,
  ________,XXXX____,
  ________,XXXXX___,
  ________,XXXXXX__,
  _______X,_XXXXX__,
  _______X,_XXXX___,
  ________,_____X__,
  _______X,XXXXXXX_,
  ______XX,XXXXXXX_,
  _____XXX,XXXXX_X_,
  _____XXX,XXXXX_X_,
  _____XX_,XXXXX_X_,
  _____XX_,XXXX_X__,
  ____XXX_,XX__X_X_,
  ____XXX_,__XXX_X_,
  ____XX_X,XXXXX___,
  _____X_X,XXX_____,
  ____X_XX,X__XX___,
  _____X__,_X_X____,
  ______XX,XX_X____,
  _____XXX,X_X_____,
  ______XX,X_X_____,
  ______XX,_X______,
  ________,X_X_____,
  ______XX,X_XX____,
  ______XX,X_X_____,
  _______X,X_______,
  _____XXX,X_______,
  _______X,X_______,
};

const uint8_t bitmap_commandant_facing_top_left_1[] =
{
  ________,________,
  ________,_XX_____,
  ________,XXXX____,
  ________,XXXXX___,
  ________,XXXXXX__,
  _______X,_XXXXX__,
  _______X,_XXXX___,
  ________,_____X__,
  ________,XXXXXXX_,
  ______XX,XXXXXXX_,
  _____XXX,XXXXX_X_,
  _____XX_,XXXXX_X_,
  _____XX_,XXXXX_X_,
  _____XXX,_XXXX_X_,
  ______XX,_XX__X__,
  _____XXX,___XX___,
  _____XX_,XXXXX___,
  ____X_X_,XXXX____,
  ____XX_X,XX__XX__,
  ______X_,___XXX__,
  _____XXX,XX_XX___,
  _____XXX,XX_XX___,
  ______XX,X_X_____,
  _____X__,__XXX___,
  _____XXX,X_XXX___,
  ______XX,X__XX___,
  ____X_XX,___XX___,
  _____XXX,__XX____,
};

const uint8_t bitmap_commandant_facing_bottom_right_1[] =
{
  ________,________,
  _______X,XX______,
  ______XX,XXX_____,
  _____XXX,XX______,
  ______XX,X_XX____,
  ________,_XX_____,
  _______X,X_______,
  _____XX_,X_XX____,
  ____XXXX,_XXXX___,
  ___XXXXX,X_X_X___,
  __XXXXXX,X_XX____,
  __XXX_XX,X_XX____,
  _XXX_XXX,X_X_X___,
  __XX_XXX,X___XX__,
  __X_____,_XXX_X__,
  ___X_XXX,X_XX____,
  __XX_XXX,X_______,
  ____X_XX,X_X_____,
  ____XX__,_XX_____,
  ____XXXX,_X______,
  ____XXX_,________,
  _______X,_X______,
  _____XXX,_X______,
  _____XXX,________,
  _____XXX,________,
  ______XX,________,
  ______XX,XX______,
};

const uint8_t bitmap_commandant_facing_bottom_right_2[] =
{
  ________,________,
  _______X,XX______,
  ______XX,XXX_____,
  _____XXX,XX______,
  ______XX,X_XX____,
  ________,_XX_____,
  _______X,X_______,
  ______X_,X_XX____,
  ____XXXX,_XX_X___,
  ___XXXXX,X_XX____,
  ___XXXXX,X_XX____,
  ___XX_XX,X_XX____,
  __XXX_XX,X_X_X___,
  __XXX_XX,X___X___,
  __XX_X__,_XXX____,
  __XX_XXX,X_XX____,
  __XX_XXX,X_X_X___,
  _____XXX,___X____,
  __X_X___,X_XXX___,
  ____XXXX,X_XXX___,
  ____XXXX,_XX_____,
  ____XXX_,___X____,
  _______X,_XXX____,
  ____XXX_,_XXX____,
  ____XXX_,_XX_____,
  ____XX__,__XXX___,
  ____XXX_,________,
  ______XX,________,
};

const uint8_t bitmap_commandant_facing_bottom_right_3[] =
{
  ________,________,
  _______X,XX______,
  ______XX,XXX_____,
  _____XXX,XX______,
  ______XX,X_XX____,
  ________,_XX_____,
  _______X,X_______,
  ______X_,X_XX____,
  _____XXX,_XX_X___,
  ____XXXX,X_XX____,
  ____XXXX,X_XX____,
  ___XXX_X,X_XX____,
  ___XX_XX,X_X_X___,
  ___XX_XX,X___X___,
  ___XXX__,_XXX_X__,
  ____X_X_,X_XX_X__,
  _____XX_,X_X_____,
  ____X__X,X__X____,
  ____XXX_,_XXX____,
  ____XXXX,_XXX____,
  _____XX_,XXX_____,
  ____X___,________,
  ___XXXX_,XXX_____,
  ___XXX__,XXX_____,
  ___XX___,XXX_____,
  ___XX___,_XX_____,
  ____X___,_XXX____,
};

const uint8_t bitmap_commandant_facing_bottom_right_4[] =
{
  ________,________,
  _______X,XX______,
  ______XX,XXX_____,
  _____XXX,XX______,
  ______XX,X_XX____,
  ________,_XX_____,
  _______X,X_______,
  _____XX_,X_XX____,
  ____XXXX,_XX_X___,
  ___XXXXX,X_X_X___,
  ___XXXXX,X_XX____,
  __XXX_XX,X_XX____,
  __XXX_XX,X_XX____,
  __XXX_XX,X___X___,
  __XX____,_XXX____,
  __XX_XXX,X_XX____,
  ____XXXX,X_X_X___,
  __XX_XXX,___X____,
  ____X___,_XXX____,
  _____XXX,_XX_____,
  ______XX,_X______,
  _____X__,X_X_____,
  _____XXX,_XX_____,
  _____XXX,_X______,
  _____XX_,XX______,
  _____XX_,X_______,
  ______XX,_XX_____,
  ________,_XX_____,
};

const uint8_t bitmap_prisoner_facing_top_left_4[] =
{
  ________,________,
  ________,XXXX____,
  _______X,XXXX____,
  _______X,XX______,
  ________,XXXX____,
  _______X,________,
  ________,_XXXX___,
  ______XX,XXXXXX__,
  _____XXX,XXXX_X__,
  _____XXX,XXXX_X__,
  _____XX_,XXXX_X__,
  ____XXX_,XXXX_X__,
  ____XX_X,XXX_X___,
  ____XX_X,X__X_X__,
  ____XX__,_XXXX___,
  ___X_X_X,XXXXX___,
  ___XX_XX,XX_XX___,
  _____XXX,XX_XX___,
  ____XXXX,X_XX____,
  ____XXXX,_XXX____,
  _____XXX,_XXX____,
  _____XXX,_XXX____,
  ______XX,_XX_____,
  ______XX,_XX_____,
  ____XX__,_XX_____,
  ______XX,________,
  ________,_XX_____,
};

const uint8_t bitmap_prisoner_facing_top_left_3[] =
{
  ________,________,
  ________,XXXX____,
  _______X,XXXX____,
  _______X,XX______,
  ________,XXXX____,
  _______X,________,
  ________,_XXXX___,
  ______XX,XXXXXX__,
  _____XXX,XXXX_X__,
  _____XXX,XXXX_X__,
  ____XXXX,XXX_XX__,
  ____XXX_,XXX_XX__,
  ___XXX_X,XXX_XX__,
  ___XX_XX,X__X_X__,
  _X_X_X__,_XXX____,
  _XX_XXXX,XXXX_X__,
  ____XXXX,XX_X____,
  ____XXXX,XX_X____,
  _____XXX,X_XX____,
  _____XXX,X_X_____,
  _____XXX,X_X_____,
  _____XXX,_X______,
  ______XX,_X______,
  ______XX,X_______,
  _____X_X,X_______,
  ________,_X______,
  ______XX,XX______,
};

const uint8_t bitmap_prisoner_facing_top_left_2[] =
{
  ________,________,
  ________,XXXX____,
  _______X,XXXX____,
  _______X,XX______,
  ________,XXXX____,
  _______X,________,
  ________,_XXXX___,
  _______X,XXXXXX__,
  ______XX,XXXX_X__,
  _____XXX,XXXX_X__,
  _____XX_,XXXX_X__,
  _____XX_,XXXX_X__,
  ____XXX_,XXX__X__,
  ____XX_X,X__X_X__,
  ____XX__,_XXXX___,
  ___X_X_X,XXXXX___,
  ___XX_XX,XX_XX___,
  _____XXX,XX_XX___,
  ____XXXX,XX_X____,
  _____XXX,XX_X____,
  _____XXX,X_X_____,
  _____XXX,X_X_____,
  ______XX,X_X_____,
  ______XX,_X______,
  _______X,_XX_____,
  _____XX_,________,
  ______XX,________,
};

const uint8_t bitmap_prisoner_facing_top_left_1[] =
{
  ________,________,
  ________,XXXX____,
  _______X,XXXX____,
  _______X,XX______,
  ________,XXXX____,
  _______X,________,
  ________,_XXX____,
  _______X,XXXXX___,
  ______XX,XXXXX___,
  _____XXX,XXXXX___,
  _____XX_,XXXX____,
  ____XXX_,XXXX____,
  ____XXX_,XXX_X___,
  _____XX_,X___X___,
  _____XX_,_XXX____,
  ______X_,XXXX____,
  _____X_X,XX_X____,
  _____XX_,XX_X____,
  ____X__X,X_XX____,
  ____XXXX,X_X_____,
  ____XXXX,_XX_____,
  ____XXX_,XXX_____,
  ____XXX_,XXX_____,
  ____XX__,_X______,
  __XX_X__,__X_____,
  ___XX___,XXX_____,
};

const uint8_t bitmap_prisoner_facing_bottom_right_1[] =
{
  ________,________,
  ______XX,X_______,
  _____X_X,XX______,
  _____XXX,X_______,
  _____X__,_X______,
  ______XX,X_______,
  ____XX_X,_XX_____,
  ___XXXX_,XXX_____,
  __XXXXX_,XXXX____,
  __XX_XXX,_X_X____,
  __XX_X_X,_X_X____,
  _XXX_XXX,_X_X____,
  _XX_XXXX,__XXX___,
  _XX_XXX_,_X_X_X__,
  _X_X___X,XX__XX__,
  _X_XXXXX,XX______,
  X__XXXX_,XX______,
  XX_XXXX_,XX______,
  ____XXXX,_X______,
  ____XXXX,_X______,
  _____XXX,________,
  _____XXX,________,
  ___X_XX_,________,
  ___X_XX_,________,
  _____X_X,________,
  ______XX,X_______,
};

const uint8_t bitmap_prisoner_facing_bottom_right_2[] =
{
  ________,________,
  ______XX,X_______,
  _____X_X,XX______,
  _____XXX,X_______,
  _____X__,_X______,
  ______XX,X_______,
  ____XX_X,_X______,
  ___XXXX_,XXX_____,
  __XXXXX_,XXX_____,
  __XX_XXX,_X_X____,
  _XXX_X_X,_X_X____,
  _XXX_XXX,_X_X____,
  _XXX_XXX,_X_X____,
  __XX_X__,__XX____,
  __XX__XX,XX______,
  __XX_XXX,XX_X____,
  ____XXXX,_X______,
  __XX_XXX,_XX_____,
  ____XXXX,_XX_____,
  __XXXXX_,XXX_____,
  ___XXXX_,XX______,
  ___XXXX_,XX______,
  ___XXX_X,X_______,
  ___XXX_X,________,
  ___XX_X_,X_______,
  ____X__X,XX______,
  ___X_X__,________,
  ____XXX_,________,
};

const uint8_t bitmap_prisoner_facing_bottom_right_3[] =
{
  ________,________,
  ______XX,X_______,
  _____X_X,XX______,
  _____XXX,X_______,
  _____X__,_X______,
  ______XX,X_______,
  ____XX_X,_X______,
  ___XXXX_,XXX_____,
  ___XXXX_,XXX_____,
  __XX_XXX,_X______,
  __XX_X_X,_X______,
  __XX_XXX,_X______,
  __XX_XXX,_X______,
  ___XX_X_,__X_____,
  ___XX__X,XX______,
  _____X_X,XX______,
  ____XX_X,_X______,
  ___X__XX,_XX_____,
  ___XXXX_,XXX_____,
  ___XXXX_,XXX_____,
  ___XXX__,XX______,
  __XXXX_X,XX______,
  __XXX__X,X_______,
  __XX___X,X_______,
  _X_X____,_X______,
  _XX_____,XXX_____,
  __XX____,________,
};

const uint8_t bitmap_prisoner_facing_bottom_right_4[] =
{
  ________,________,
  ______XX,X_______,
  _____X_X,XX______,
  _____XXX,X_______,
  _____X__,_X______,
  ______XX,X_______,
  ____XX_X,_XX_____,
  ___XXXX_,XXX_____,
  ___XXXX_,XXXX____,
  __XXX_XX,_X_X____,
  __XXX__X,_X_X____,
  __XX_XXX,_X_X____,
  __XX_XXX,_X_X____,
  __XX_XX_,__XX____,
  __X____X,XX__X___,
  __X_XXXX,XXX_X___,
  ___X_XXX,_XX_____,
  __XX_XXX,_XX_____,
  ____XXXX,_XX_____,
  ___XXXXX,_X______,
  _____XXX,_X______,
  _____XX_,XX______,
  ____XXX_,X_______,
  ____XX_X,X_______,
  ____X___,________,
  _____X_X,X_______,
  ____XXX_,XX______,
};

const uint8_t bitmap_crawl_facing_bottom_left_2[] =
{
  ________,________,________,
  ________,____X_X_,________,
  ________,__XXX__X,X_______,
  ________,XXXXXXX_,XX______,
  ______XX,XXXXXXX_,XX______,
  _____XXX,XXXXXXX_,XX______,
  ____X___,XXXXXXX_,XX______,
  _____XXX,_XXXXX_X,XX__XX__,
  ____XXXX,_XXXX_XX,XX_X_XX_,
  __X_XXXX,X_XX_X_X,XXXXX___,
  __XX_XXX,__XXX___,XXX_____,
  XX______,___XX___,________,
  _X______,__XX____,________,
  ________,___X____,________,
  ________,_XX_____,________,
};

const uint8_t bitmap_crawl_facing_bottom_left_1[] =
{
  ________,________,________,
  ________,____X_X_,________,
  ________,__XXXX_X,X_______,
  ________,XXXXXXX_,X_______,
  ______XX,XXXXXXX_,XX______,
  ______XX,XXXXXXX_,XX_XX___,
  ____XX_X,XXXXXX_X,XX__XX__,
  ___XXXX_,XXXXX_XX,X_X_____,
  ___XXXX_,XXXX_XXX,X__XX___,
  ___XXXX_,_XXX_XXX,__X_XX__,
  ____XX__,XXX_XXXX,XXXX____,
  __XX____,XXX_XXXX,XX______,
  ___X____,XX___XXX,________,
  _______X,X_______,________,
  _______X,________,________,
  _____XX_,________,________,
};

const uint8_t bitmap_crawl_facing_top_left_1[] =
{
  ______XX,X_______,________,
  _____XXX,X_X_____,________,
  _____XXX,_XXXX___,________,
  _____XX_,XXXXXXX_,________,
  _______X,XXXXXX__,________,
  _____XXX,XXXX__XX,X_______,
  XX__XXXX,XXX_XXXX,XX______,
  X_XXXXX_,XX_XXXXX,_X______,
  ___X____,__XXXXXX,_X______,
  ________,__XXXXX_,XX______,
  ________,_XXXXX_X,XX______,
  ________,_XXX__XX,X_______,
  ________,_XXXX__X,XX______,
  ________,___XX_X_,XXX_X___,
  ________,______XX,__X_XX__,
  ________,_______X,_____X__,
};

const uint8_t bitmap_crawl_facing_top_left_2[] =
{
  ______XX,X_______,________,
  _____XXX,X_______,________,
  _____XX_,_XXXX___,________,
  _____X_X,XXXXXXX_,________,
  ______XX,XXXXX___,________,
  _____XXX,XXXX_XXX,X_______,
  _____XXX,_XX_XXXX,XX______,
  ______XX,X__XXXXX,_X______,
  __XX_XXX,X__XXXXX,_X______,
  __X_XXXX,___XXXXX,________,
  ________,___XXXXX,________,
  ________,___XXXX_,________,
  ________,____XXX_,XX______,
  ________,____XXXX,________,
  ________,_____XXX,_XX_____,
  ________,_______X,__XX____,
};

const uint8_t mask_crawl_facing_top_left[] =
{
  XXXXX___,___XXXXX,XXXXXXXX,
  XXXX____,_____XXX,XXXXXXXX,
  XXXX____,_______X,XXXXXXXX,
  XXXX____,________,XXXXXXXX,
  XXXXX___,________,_XXXXXXX,
  __XX____,________,__XXXXXX,
  ________,________,___XXXXX,
  ________,________,___XXXXX,
  ________,________,___XXXXX,
  X_______,________,___XXXXX,
  XX_X____,________,___XXXXX,
  XXXXXXXX,________,__XXXXXX,
  XXXXXXXX,________,___X_XXX,
  XXXXXXXX,X_______,______XX,
  XXXXXXXX,XXX_____,_______X,
  XXXXXXXX,XXXXX___,_______X,
};

const uint8_t mask_various_facing_top_left_4[] =
{
  XXXXXXX_,____XXXX,
  XXXXXX__,_____XXX,
  XXXXX___,______XX,
  XXXXXX__,_______X,
  XXXXXX__,_______X,
  XXXXX___,_______X,
  XXXXXX__,_______X,
  XXXXX___,________,
  XXXX____,________,
  XXXX____,________,
  XXX_____,________,
  XXX_____,________,
  XXX_____,________,
  XX______,________,
  XX______,_______X,
  XX______,______XX,
  XX______,_______X,
  XXX_____,_______X,
  XX______,_______X,
  XXX_____,_______X,
  XXX_____,_______X,
  XXX_____,_______X,
  XXX_____,______XX,
  XXX_____,_____XXX,
  XX______,_____XXX,
  XXX_____,_____XXX,
  XXXX____,_____XXX,
  XXXXX___,_____XXX,
  XXXXXXX_,X___XXXX,
  XXXXXXXX,XX_XXXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
};

const uint8_t mask_various_facing_top_left_3[] =
{
  XXXXXXX_,____XXXX,
  XXXXXX__,_____XXX,
  XXXXX___,______XX,
  XXXXXX__,_______X,
  XXXXXX__,_______X,
  XXXXX___,_______X,
  XXXXXX__,_______X,
  XXXXX___,_______X,
  XXXX____,________,
  XXX_____,________,
  XX______,________,
  XX______,________,
  XX______,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  XX______,_______X,
  XX______,______XX,
  XX______,______XX,
  XX______,______XX,
  XX______,______XX,
  X_______,______XX,
  X_______,_____XXX,
  XX______,____XXXX,
  XXX_____,____XXXX,
  XXXX____,____XXXX,
  XXXXX___,____XXXX,
  XXXXXXX_,___XXXXX,
  XXXXXXXX,__XXXXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
};

const uint8_t mask_various_facing_top_left_2[] =
{
  XXXXXXX_,____XXXX,
  XXXXXX__,_____XXX,
  XXXXX___,_____XXX,
  XXXXXX__,______XX,
  XXXXXX__,_______X,
  XXXXX___,_______X,
  XXXXXX__,_______X,
  XXXXX___,_______X,
  XXXX____,________,
  XXX_____,________,
  XX______,________,
  XX______,________,
  XX______,________,
  XX______,_______X,
  X_______,________,
  X_______,________,
  X_______,_______X,
  XX______,______XX,
  X_______,______XX,
  XX______,______XX,
  XX______,______XX,
  XX______,______XX,
  XX______,_____XXX,
  XX______,____XXXX,
  XXX_____,____XXXX,
  XXXX____,_____XXX,
  XXXX____,____XXXX,
  XXX_____,___XXXXX,
  XXXX____,__XXXXXX,
  XXXXX___,__XXXXXX,
  XXXXXXX_,_XXXXXXX,
  XXXXXXXX,XXXXXXXX,
};

const uint8_t mask_various_facing_top_left_1[] =
{
  XXXXXXX_,____XXXX,
  XXXXXX__,_____XXX,
  XXXXX___,______XX,
  XXXXXX__,_______X,
  XXXXXX__,_______X,
  XXXXX___,_______X,
  XXXXXX__,_______X,
  XXXXXX__,________,
  XXXXX___,________,
  XXXX____,________,
  XXX_____,________,
  XXX_____,_______X,
  XXX_____,______XX,
  XXX_____,______XX,
  XXX_____,______XX,
  XXXX____,______XX,
  XXX_____,______XX,
  XXX_____,_______X,
  XXX_____,_______X,
  XXX_____,______XX,
  XXX_____,______XX,
  XXX_____,______XX,
  XX______,______XX,
  XX______,______XX,
  X_______,______XX,
  X_______,______XX,
  XX______,_____XXX,
  XXX_____,XX__XXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
};

const uint8_t mask_various_facing_bottom_right_1[] =
{
  XXXXX___,___XXXXX,
  XXXX____,____XXXX,
  XXX_____,____XXXX,
  XXX_____,_____XXX,
  XXXX____,____XXXX,
  XX______,____XXXX,
  X_______,_____XXX,
  XX______,______XX,
  X_______,______XX,
  ________,_____XXX,
  ________,_____XXX,
  ________,______XX,
  ________,_______X,
  ________,_______X,
  ________,_______X,
  ________,______XX,
  ________,____XXXX,
  ________,____XXXX,
  ________,____XXXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  XX______,____XXXX,
  XX______,___XXXXX,
  XXX_____,__XXXXXX,
  XXX_____,___XXXXX,
  XXXX_X__,____XXXX,
  XXXXXXX_,___XXXXX,
  XXXXXXXX,_XXXXXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
};

const uint8_t mask_various_facing_bottom_right_2[] =
{
  XXXXX___,___XXXXX,
  XXXX____,____XXXX,
  XXX_____,____XXXX,
  XXX_____,_____XXX,
  XXXX____,____XXXX,
  XXX_____,____XXXX,
  XX______,_____XXX,
  XX______,______XX,
  X_______,_____XXX,
  X_______,_____XXX,
  ________,_____XXX,
  ________,______XX,
  ________,______XX,
  ________,_____XXX,
  X_______,_____XXX,
  X_______,______XX,
  XX______,_____XXX,
  X_______,______XX,
  X_______,______XX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  XX______,______XX,
  XXX_____,______XX,
  XX______,__X__XXX,
  XXX_____,__XXXXXX,
  XXXX____,_XXXXXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
  XXXXXXXX,XXXXXXXX,
};

const uint8_t mask_various_facing_bottom_right_3[] =
{
  XXXXX___,___XXXXX,
  XXXX____,____XXXX,
  XXX_____,____XXXX,
  XXX_____,_____XXX,
  XXXX____,____XXXX,
  XX______,____XXXX,
  X_______,_____XXX,
  XX______,______XX,
  XX______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  ________,______XX,
  ________,______XX,
  ________,_______X,
  X_______,_______X,
  XX______,______XX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,____XXXX,
  X_______,_____XXX,
  ________,_____XXX,
  ________,____XXXX,
  ________,_____XXX,
  X_____XX,______XX,
  XX___XXX,XX___XXX,
};

const uint8_t mask_various_facing_bottom_right_4[] =
{
  XXXXX___,___XXXXX,
  XXXX____,____XXXX,
  XXX_____,____XXXX,
  XXX_____,_____XXX,
  XXXX____,____XXXX,
  XXX_____,____XXXX,
  XX______,_____XXX,
  XX______,______XX,
  XX______,______XX,
  X_______,_____XXX,
  X_______,_____XXX,
  ________,_____XXX,
  ________,______XX,
  ________,_____XXX,
  X_______,______XX,
  X_______,______XX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,_____XXX,
  X_______,____XXXX,
  XX______,___XXXXX,
  XX______,____XXXX,
  XXX_____,___XXXXX,
  XX______,____XXXX,
  XXX_____,_____XXX,
  XXXX____,____XXXX,
  XXXXX___,XXXXXXXX,
};

const uint8_t mask_crawl_facing_bottom_left[] =
{
  XXXXXXXX,XXXX_X_X,XXXXXXXX,
  XXXXXXXX,XX______,_XXXXXXX,
  XXXXXXXX,________,__XXXXXX,
  XXXXXX__,________,___XXXXX,
  XXXXX___,________,_____XXX,
  XXXX____,________,______XX,
  XXX_____,________,_______X,
  XX______,________,_______X,
  XX______,________,________,
  X_______,________,_______X,
  ________,________,______XX,
  ________,________,____XXXX,
  _____XX_,________,__XXXXXX,
  X_X_XX__,________,XXXXXXXX,
  XXXXX___,____XXXX,XXXXXXXX,
  XXXX____,___XXXXX,XXXXXXXX,
};

const uint8_t bitmap_guard_facing_top_left_4[] =
{
  ________,________,
  _______X,XXX_____,
  ______XX,XXXX____,
  _______X,XXXX____,
  _______X,XXX__X__,
  ______X_,XXXX_X__,
  _______X,____X___,
  ________,_XXXXX__,
  _____XXX,XXXXXX__,
  _____XXX,XX_XXX__,
  ____XXXX,XX___X__,
  ____XXX_,__XX_X__,
  ____XXX_,XXXX_X__,
  ___XXX_X,XX___X__,
  ___XXX__,__XXX___,
  ___XX_X_,_XXXX___,
  ___XX_X_,XX_XXX__,
  ______XX,XX_XXX__,
  ___XX_XX,XX_XXX__,
  _____XXX,XX_XXX__,
  ____XXXX,XX_XXX__,
  ____XXXX,X__XXX__,
  ____XXXX,X__XX___,
  _____XXX,_XX_____,
  ___XX___,_XXX____,
  ____XXX_,X_XX____,
  ________,XXX_____,
};

const uint8_t bitmap_guard_facing_top_left_3[] =
{
  ________,________,
  _______X,XXX_____,
  ______XX,XXXX____,
  _______X,XXXX____,
  _______X,XXX__X__,
  ______X_,XXXX_X__,
  _______X,_____X__,
  ________,_XXXX___,
  _____XXX,XXXXXX__,
  ____XXXX,X_X_XX__,
  ___XXXXX,X___XX__,
  ___XX___,_XX_XX__,
  ___XX_XX,XXX_X___,
  __XXX_XX,XX__X___,
  X_XX_X__,__XX____,
  X_X_XX__,XXXX____,
  ____XX_X,XXXXX___,
  ___XXXXX,X_XXX___,
  ___XXXXX,X_XXX___,
  ___XXXXX,__XXX___,
  ___XXXXX,__XXX___,
  ___XXXXX,__XXX___,
  __XXXXX_,__XXX___,
  __XXXX_X,X_XX____,
  ___XXX_X,________,
  ______XX,_X______,
  _____XX_,________,
};

const uint8_t bitmap_guard_facing_top_left_2[] =
{
  ________,________,
  _______X,XXX_____,
  ______XX,XXXX____,
  _______X,XXXX____,
  _______X,XXX__X__,
  ______X_,XXXX_X__,
  _______X,_____X__,
  ________,_XXXX___,
  _____XXX,XXXXXX__,
  ____XXXX,X_XXXX__,
  ___XXXXX,X____X__,
  ___XXXX_,_XXX_X__,
  ___XXX_X,XXX_X___,
  ___XX_XX,X__X____,
  __XXX___,_XXX____,
  __XX_X__,XXXXX___,
  __XX_X_X,X_XXX___,
  ____XXXX,X_XXX___,
  __X_XXXX,X_XXX___,
  ____XXXX,X_XXX___,
  ___XXXXX,X_XXX___,
  ___XXXXX,X_XXX___,
  ___XXXXX,X__X____,
  ___XXXXX,_X______,
  ____XXXX,_X______,
  ________,________,
  ______XX,________,
  ____X_XX,________,
  _____XX_,________,
};

const uint8_t bitmap_guard_facing_top_left_1[] =
{
  ________,________,
  _______X,XXX_____,
  ______XX,XXXX____,
  _______X,XXXX____,
  _______X,XXX__X__,
  ______X_,XXXX_X__,
  _______X,_____X__,
  ________,_XXXX___,
  ______XX,XXXXXX__,
  _____XXX,XX_XX___,
  ____XXXX,XX___X__,
  ____XX__,__XXX___,
  ____XX_X,XXXX____,
  ____XX_X,XX______,
  ____XXX_,__XXX___,
  _____XX_,_XXXX___,
  _____XX_,XX_XX___,
  ____X__X,XX_XX___,
  _____XX_,XX_XX___,
  ____X__X,XX_XX___,
  ____XXXX,X__XX___,
  ____XXXX,X__XX___,
  ___XXXXX,X__X____,
  ___XXXXX,_X______,
  __X__XXX,_XXX____,
  __XXX___,________,
  ___XX___,________,
};

const uint8_t bitmap_guard_facing_bottom_right_1[] =
{
  ________,________,
  ________,________,
  _____XXX,X_______,
  ____XXXX,XX______,
  ____XXXX,X_______,
  _____XXX,_X______,
  ____XX__,X_______,
  __X___XX,X_X_____,
  ___X_X__,_XXX____,
  ___X_XX_,XX_X____,
  _XX_X_X_,XX_X____,
  XXX_X_XX,_X_X____,
  XXX_X_XX,_X_X____,
  _XX__X_X,__XXX___,
  _XXX_X__,XX_X_X__,
  __X__X_X,_X__XX__,
  ___XX_X_,XXX_____,
  __X___X_,XXX_____,
  __XX_XX_,XXXX____,
  __XX_X_X,_XXX____,
  __XX__XX,X_XX____,
  __XXXXXX,X_XX____,
  __XXXXXX,X_X_____,
  ___XXXXX,X_______,
  ___XXXX_,_X______,
  _______X,X_______,
  ____X_XX,X_______,
  _____X_X,XXX_____,
  ________,X_______,
};

const uint8_t bitmap_guard_facing_bottom_right_2[] =
{
  ________,________,
  ________,________,
  _____XXX,X_______,
  ____XXXX,XX______,
  ____XXXX,X_______,
  _____XXX,_X______,
  ____XX__,X_______,
  ___X__XX,X_X_____,
  ___X_X__,_XXX____,
  ___X_XX_,XX_X____,
  ___X_XX_,XX_X____,
  __X_X_XX,_X_X____,
  _XX_X_XX,_X_X____,
  _XX_X_XX,___X____,
  _XX_X___,XX_X____,
  __XX_X_X,_XX_X___,
  __XX_X_X,_XX_X___,
  ____X_X_,XXX_____,
  ___XX_X_,XXXX____,
  __X__XX_,XXXX____,
  __XX_X_X,_XXX____,
  __XX__XX,_XXX____,
  __XXXXXX,_XX_____,
  __XXXXXX,________,
  __XXXXXX,_XX_____,
  ___XXX__,_XX_____,
  ______XX,__XX____,
  _____XX_,________,
  ______XX,X_______,
};

const uint8_t bitmap_guard_facing_bottom_right_3[] =
{
  ________,________,
  ________,________,
  _____XXX,X_______,
  ____XXXX,XX______,
  ____XXXX,X_______,
  _____XXX,_X______,
  ____XX__,X_______,
  __X___XX,X_X_____,
  ___X_X__,_XX_____,
  ___X_XX_,XX_X____,
  __X_X_X_,XX_X____,
  __X_X_XX,_X_X____,
  _XX_X_XX,_X______,
  _XXX_X_X,________,
  _XXX_X__,XXX_____,
  __XXX__X,_XX_____,
  ___X_X_X,_XX_____,
  __X_XX__,XXXX____,
  __XX__X_,XXXX____,
  __XX_XX_,XXXX____,
  __XX_X_X,_XXX____,
  __XX__X_,XXXX____,
  __XXXXX_,XX______,
  __XXXXX_,__XX____,
  ___XXXX_,_XXX____,
  _XX_____,_XX_____,
  _XXX____,_XXX____,
  __XXX___,__XXX___,
};

const uint8_t bitmap_guard_facing_bottom_right_4[] =
{
  ________,________,
  ________,________,
  _____XXX,X_______,
  ____XXXX,XX______,
  ____XXXX,X_______,
  _____XXX,_X______,
  ____XX__,X_______,
  ___X__XX,X_X_____,
  ___X_X__,_XXX____,
  ___X_XX_,XX_X____,
  ___X_XX_,XX_X____,
  __X_X_XX,_X_X____,
  _XX_X_XX,_X_X____,
  _XX_X_XX,___X____,
  _XX_X___,XX_X____,
  __XX_X_X,_XX_____,
  __XX_X_X,_XX_____,
  ____X_X_,XXX_____,
  ___XX_X_,XXXX____,
  __X__X_X,_XXX____,
  __X_X_XX,_XXX____,
  __X__XXX,X_XX____,
  __XXXXXX,X_XX____,
  ___XXXXX,X_______,
  ___XXXXX,_X______,
  ____XX__,X_______,
  ___X__X_,XX______,
  ____XXXX,_XX_____,
};

const uint8_t bitmap_dog_facing_top_left_1[] =
{
  ___XX_X_,XX______,________,
  ___XXXXX,X_______,________,
  ____X_XX,X_______,________,
  _____X__,XX______,________,
  ______XX,XXXX____,________,
  ______XX,XXXXXX__,________,
  _______X,XXXXXXXX,________,
  ____XXXX,XXXXXXXX,XX______,
  ___X__XX,XXXXXXXX,XXX_____,
  ________,_XXXXXXX,XXX_____,
  ________,___XXXXX,XXX_____,
  ________,______XX,XX_X____,
  ________,_______X,XX_X____,
  ________,________,X___X___,
  ________,________,X_X_____,
  ________,______XX,___X____,
};

const uint8_t bitmap_dog_facing_top_left_2[] =
{
  ___XX_X_,X_______,________,
  ___XXXXX,XX______,________,
  ____X_XX,X_______,________,
  _____X__,XX______,________,
  ______XX,XXXX____,________,
  ______XX,XXXXX___,________,
  ______XX,XXXXXXXX,________,
  _______X,XXXXXXXX,XX______,
  _______X,XXXXXXXX,XXX_____,
  _______X,_XXXXXXX,XXX_____,
  ______XX,___XX_XX,XXX_____,
  _____XX_,______XX,XX_X____,
  ________,______XX,X_XX____,
  ________,_______X,XX_X____,
  ________,________,_X______,
  ________,________,XX______,
};

const uint8_t bitmap_dog_facing_top_left_3[] =
{
  ___XX_X_,X_______,________,
  ___XXXXX,XX______,________,
  ____X_XX,X_______,________,
  _____X__,XX______,________,
  ______XX,XXX_____,________,
  ______XX,XXXXX___,________,
  ______XX,XXXXXXXX,________,
  ______XX,XXXXXXXX,XX______,
  _______X,XXXXXXXX,XXX_____,
  _______X,__XXXXXX,XXX_____,
  _______X,XX_XXX_X,XXX_____,
  ________,______XX,XX_X____,
  ________,_______X,X_XX____,
  ________,________,X__X____,
  ________,______XX,________,
};

const uint8_t bitmap_dog_facing_top_left_4[] =
{
  ___XX_X_,XX______,________,
  ___XXXXX,X_______,________,
  ____X_XX,X_______,________,
  _____X__,XX______,________,
  ______XX,XXXX____,________,
  ______XX,XXXXXX__,________,
  ______XX,XXXXXXXX,________,
  _______X,XXXXXXXX,XX______,
  _______X,XXXXXXXX,XXX_____,
  ______XX,_XXXXXXX,XXX_____,
  _____XX_,X_XXXX_X,XXX_____,
  ________,______XX,XX_X____,
  ________,______XX,__XX____,
  ________,____XXX_,XX__X___,
  ________,_______X,X_______,
};

const uint8_t mask_dog_facing_top_left[] =
{
  XX______,___XXXXX,XXXXXXXX,
  XX______,___XXXXX,XXXXXXXX,
  XXX_____,__XXXXXX,XXXXXXXX,
  XXXX____,____XXXX,XXXXXXXX,
  XXXXX___,______XX,XXXXXXXX,
  XXXXX___,________,XXXXXXXX,
  XXXX____,________,__XXXXXX,
  XXX_____,________,___XXXXX,
  XX______,________,____XXXX,
  XXX_X___,________,____XXXX,
  XXXX____,________,____XXXX,
  XXXX____,________,_____XXX,
  XXXXX__X,XXXX____,_____XXX,
  XXXXXXXX,XXX_____,______XX,
  XXXXXXXX,XXXX____,_____XXX,
  XXXXXXXX,XXXXX___,_____XXX,
};

const uint8_t bitmap_dog_facing_bottom_right_1[] =
{
  ________,________,________,
  ____XXX_,________,________,
  ___XXXXX,X_______,________,
  ___XXXXX,XX______,________,
  ___XXXXX,XXXX____,________,
  ___XXXXX,XXXXX___,________,
  ____XXXX,XXXXXX_X,X_______,
  ____XXX_,XXXXXXXX,________,
  _____X__,XXXXXXXX,XX______,
  ____X___,_XXXXXX_,XX______,
  ____X___,___XXX_X,XXX_____,
  ________,____XX__,_XX_____,
  ________,______X_,________,
  ________,_______X,X_______,
};

const uint8_t bitmap_dog_facing_bottom_right_2[] =
{
  ________,________,________,
  ____XXX_,________,________,
  ___XXXXX,________,________,
  ___XXXXX,XX______,________,
  ___XXXXX,XXX_____,________,
  ___XXXXX,XXXXX___,________,
  ____XXXX,XXXXXX_X,________,
  ___XXXX_,XXXXXXXX,________,
  _XX_X___,XXXXXXXX,XX______,
  ________,_XXXXXX_,XX______,
  ________,___XXX_X,XXX_____,
  ________,___XX___,_XX_____,
  ________,____X_X_,________,
  ________,___X__X_,________,
  ________,____X___,________,
};

const uint8_t bitmap_dog_facing_bottom_right_3[] =
{
  ________,________,________,
  ____XX__,________,________,
  ___XXXXX,________,________,
  ___XXXXX,XX______,________,
  ___XXXXX,XXX_____,________,
  ___XXXXX,XXXXX___,________,
  ____XXXX,XXXXXX_X,________,
  ____XXX_,XXXXXXXX,________,
  ___XX___,XXXXXXXX,XX______,
  ____X__X,_XXXXXX_,XX______,
  _____X__,___XX__X,XXX_____,
  ________,_XX_XX__,_XX_____,
  ________,___XX_X_,________,
};

const uint8_t bitmap_dog_facing_bottom_right_4[] =
{
  ________,________,________,
  ____XX__,________,________,
  ___XXXXX,________,________,
  ___XXXXX,XX______,________,
  ___XXXXX,XXXX____,________,
  ____XXXX,XXXXX___,________,
  ____XXXX,XXXXXX_X,X_______,
  ____XXX_,XXXXXXXX,________,
  _____XX_,_XXXXXXX,XX______,
  _____X__,_XXXXXX_,XX______,
  ______X_,___XXX_X,XXX_____,
  _______X,____X_X_,_XX_____,
  ________,____XX_X,________,
  ________,___XX___,________,
};

const uint8_t mask_dog_facing_bottom_right[] =
{
  XXXX___X,XXXXXXXX,XXXXXXXX,
  XXX_____,_XXXXXXX,XXXXXXXX,
  XX______,__XXXXXX,XXXXXXXX,
  XX______,____XXXX,XXXXXXXX,
  XX______,_____XXX,XXXXXXXX,
  XX______,______X_,_XXXXXXX,
  XXX_____,________,__XXXXXX,
  X_______,________,__XXXXXX,
  ________,________,___XXXXX,
  X_______,________,___XXXXX,
  XXX_____,________,____XXXX,
  XXXX____,________,____XXXX,
  XXXXXXX_,X_______,___XXXXX,
  XXXXXXXX,XX______,__XXXXXX,
  XXXXXXXX,XXX_____,_XXXXXXX,
  XXXXXXXX,XXXX_XXX,XXXXXXXX,
};


/* Conv: Original game overlaps the end of flag_up and start of flag_down to
 * give flag_up an extra three rows of empty pixels.
 */

const uint8_t flag_up[3 * 25] =
{
  ________,________,________,
  ________,________,_XXXXX__,
  ________,______XX,XXXXXXX_,
  X_______,___XXXXX,XXXXXXX_,
  XXX_____,XXXXXXXX,X___XXX_,
  _XXXXXXX,XXXXXX__,_____XX_,
  _XXXXXXX,XXX_____,_____XX_,
  _XXXXXXX,________,_XXXXXX_,
  _XX_____,______XX,XXXXXXX_,
  _XX_____,___XXXXX,XXXXXXX_,
  __XX____,XXXXXXXX,XXXXXXX_,
  __XXXXXX,XXXXXXXX,____XX__,
  __XXXXXX,XXXXXX__,___XXX__,
  __XXXXXX,XXXX____,___XXX__,
  __XXXXXX,X_______,XXXXX___,
  __XX____,______XX,XXXXX___,
  _XXX____,____XXXX,XX______,
  _XX_____,_XXXXXX_,________,
  _XXXXXXX,XXXXX___,________,
  XXXXXXXX,XXX_____,________,
  ____XXXX,________,________,
  ________,________,________,
  ________,________,________, /* Conv: added */
  ________,________,________, /* Conv: added */
  ________,________,________, /* Conv: added */
};

const uint8_t flag_down[3 * 25] =
{
  ________,________,________,
  ________,________,________,
  ________,________,________,
  XXXXX___,________,________,
  _XXXXXXX,________,________,
  _XXXXXXX,XXX_____,________,
  __XXXXXX,XXXXXX__,___XXX__,
  __XX____,XXXXXXXX,XXXXXX__,
  __XX____,___XXXXX,XXXXXX__,
  __XX____,______XX,XX_XX___,
  __XXXXXX,________,___XX___,
  __XXXXXX,XXX_____,___XX___,
  __XXXXXX,XXXXXX__,__XXX___,
  __XXXXXX,XXXXXXXX,XXXX____,
  _XXX____,XXXXXXXX,XXXX____,
  _XX_____,___XXXXX,XXXX____,
  _XX_____,_____XXX,XXXX____,
  _XXXXXXX,________,XXXXX___,
  XXXXXXXX,XXX_____,___XX___,
  XX____XX,XXXXX___,___XX___,
  ________,_XXXXXXX,___XXX__,
  ________,____XXXX,XXXXXX__,
  ________,________,XXXX____,
  ________,________,________,
  ________,________,________,
};

const uint8_t bitmap_crate[] =
{
  ________,__XX____,________,
  ________,XXXXXX__,________,
  ______XX,XXXXXXXX,________,
  ____XXXX,XXX__XXX,XX______,
  __XXXXXX,X__XX__X,XXXX____,
  _X__XXX_,_XX__XX_,_XXXXX__,
  _XXX__XX,X__XX__X,XXXXXXXX,
  _XXXX___,XXX__XXX,XXXXXX__,
  _XXXX_XX,__XXXXXX,XXXX__XX,
  _XXXX_XX,XX__XXXX,XX__XXXX,
  __XXX_XX,XXXX__XX,__XXXXXX,
  _X__X_XX,XXXXXX__,XXXXXXXX,
  _XXX__XX,XXXXXX_X,XXXXXXXX,
  _XXXX___,XXXXXX_X,XXXXXX__,
  _XXXX_XX,__XXXX_X,XXXX__XX,
  _XXXX_XX,XX__XX_X,XX__XXXX,
  _XXXX_XX,XXXX___X,__XXXXXX,
  __XXX_XX,XXXXXX__,XXXXXXXX,
  ____X_XX,XXXXXX_X,XXXXXXXX,
  ______XX,XXXXXX_X,XXXXXXXX,
  ________,XXXXXX_X,XXXXXX__,
  ________,__XXXX_X,XXXX____,
  ________,____XX_X,XX______,
  ________,_______X,________,
};

const uint8_t mask_crate[] =
{
  XXXXXXXX,______XX,XXXXXXXX,
  XXXXXX__,________,XXXXXXXX,
  XXXX____,________,__XXXXXX,
  XX______,________,____XXXX,
  X_______,________,______XX,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  X_______,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  X_______,________,________,
  XX______,________,________,
  XXXX____,________,________,
  XXXXXX__,________,________,
  XXXXXXXX,________,______XX,
  XXXXXXXX,XX______,____XXXX,
  XXXXXXXX,XXXX____,__XXXXXX,
};

const uint8_t bitmap_stove[] =
{
  ___XXX__,________,
  ___X__XX,XX______,
  ____XX__,__XX____,
  ___X__XX,XX__X___,
  ___XXXXX,XXXXX___,
  ____XXXX,XXXX____,
  ___X__XX,XX__X___,
  ____XX__,__XX____,
  ____XXXX,XXXX____,
  ____XXXX,XXXX____,
  ___XXXXX,XXXXX___,
  ___XX__X,X__XX___,
  ___X_XX_,_XX_X___,
  __XX_X_X,X_X_XX__,
  __XX_XX_,_XX_XX__,
  __XXX_XX,XX_XXX__,
  __XXXX__,__XXXX__,
  __X_XXXX,XXXX_X__,
  ___X_XXX,XXX_X___,
  __XXX_XX,XX_XXX__,
  __XX__XX,XX__XX__,
  _XX_____,_____XX_,
};

const uint8_t mask_stove[] =
{
  XX______,__XXXXXX,
  XX______,____XXXX,
  XXX_____,_____XXX,
  XX______,______XX,
  XX______,______XX,
  XXX_____,_____XXX,
  XX______,______XX,
  XXX_____,_____XXX,
  XXX_____,_____XXX,
  XXX_____,_____XXX,
  XX______,______XX,
  XX______,______XX,
  XX______,______XX,
  X_______,_______X,
  X_______,_______X,
  X_______,_______X,
  X_______,_______X,
  X_______,_______X,
  XX______,______XX,
  X_______,_______X,
  X_______,_______X,
  ____XX__,__XX____,
};

// vim: ts=8 sts=2 sw=2 et


