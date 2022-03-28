// Standard headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Internal headers
#include "dimension.h"
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "attacker.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter
const direction_t DIRS_ATK[] = {DIR_UP,         DIR_UP_RIGHT, DIR_RIGHT,
                                DIR_DOWN_RIGHT, DIR_DOWN,     DIR_DOWN_LEFT,
                                DIR_LEFT,       DIR_UP_LEFT};

#define DIRS_ATK_LEN (sizeof(DIRS_ATK) / sizeof(direction_t))

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_attacker_strategy(position_t attacker_position,
                                      Spy defender_spy) {
  UNUSED(attacker_position);
  UNUSED(defender_spy);
  srand(time(NULL));
  return DIRS_ATK[rand() % DIRS_ATK_LEN];
}

/*----------------------------------------------------------------------------*/
