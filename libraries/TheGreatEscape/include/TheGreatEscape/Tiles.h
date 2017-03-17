#ifndef TILES_H
#define TILES_H

#include <stdint.h>

/**
 * A tile index.
 */
typedef uint8_t tileindex_t;

/**
 * An 8-pixel wide row within a tile.
 */
typedef uint8_t tilerow_t;

/**
 * An 8-by-8 tile.
 */
typedef struct
{
  tilerow_t row[8];
}
tile_t;

#endif /* TILES_H */
