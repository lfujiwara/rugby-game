// Standard headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "defender.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter
const direction_t DIRS_DEF[] = {DIR_UP,         DIR_UP_RIGHT, DIR_RIGHT,
                                DIR_DOWN_RIGHT, DIR_DOWN,     DIR_DOWN_LEFT,
                                DIR_LEFT,       DIR_UP_LEFT};

#define DIRS_DEF_LEN (sizeof(DIRS_DEF) / sizeof(direction_t))

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(position_t defender_position,
                                      Spy attacker_spy) {

  UNUSED(defender_position);
  UNUSED(attacker_spy);

  // TODO: Implement Defender logic here
  return (direction_t)DIR_LEFT;
}

/*----------------------------------------------------------------------------*/
