// Ladies and Gentlemen.
// Welcome to JAM.

// System includes
#include <iostream>

// Game includes
#include "game.h"

int main()
{
    // Main loop for the game.
    while ( Game::GetInstance().IsRunning() )
    {
        // Update the game.
        Game::GetInstance().Update();
    }

    return 0;
}
