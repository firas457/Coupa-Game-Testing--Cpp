#include "doctest.h"
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include <iostream>
#include <sstream>

using namespace coup;
TEST_CASE("game"){

Game game_1{};

Duke duke{game_1, "Kohen"};
Assassin assassin{game_1, "Razi"};
Ambassador ambassador{game_1, "Ameer"};
Captain captain2{game_1, "TAL"};
Captain captain1{game_1, "Gvier"};
Contessa contessa{game_1, "Almog"};

SUBCASE("income when your turn comes")
{
    CHECK_NOTHROW(duke.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_THROWS(captain1.income());
    CHECK_NOTHROW(captain2.income());
    CHECK_NOTHROW(captain1.income());
    CHECK_NOTHROW(contessa.income());
}

SUBCASE("forien_aid when your turn comes")
{
    CHECK_NOTHROW(duke.foreign_aid());
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK_NOTHROW(ambassador.foreign_aid());
    CHECK_THROWS(captain1.foreign_aid());
    CHECK_NOTHROW(captain2.foreign_aid());
    CHECK_NOTHROW(captain1.foreign_aid());
}
// it's contessa turn now

// all the players have 3 coins

////////   keep playing till captain1 turn comes  //////////
contessa.income();
duke.income();
assassin.income();
ambassador.income();
captain2.income();

// all the players have 4 coins

// captain1 has 6 coins
captain1.steal(duke);
// duke has 2 coins now

SUBCASE("block function")
{
    CHECK_THROWS(captain1.block(duke));
    CHECK_THROWS(captain1.block(duke));
    CHECK_THROWS(captain1.block(assassin));
    CHECK_THROWS(captain1.block(ambassador));
    CHECK_NOTHROW(ambassador.block(captain1)); // captin1 has 4 coins now(2 returned)
    CHECK_THROWS(captain1.block(contessa));
    CHECK_THROWS(captain1.block(captain2));
    CHECK_THROWS(ambassador.block(captain2));
    CHECK_THROWS(contessa.block(assassin));
    CHECK_THROWS(contessa.block(duke));
    CHECK_NOTHROW(contessa.block(ambassador));
}
// duke turn now

duke.income();
assassin.income();
ambassador.income();
captain2.income();

captain1.steal(ambassador);

SUBCASE("Ambassador block thief fucntion")
{
    CHECK_THROWS(ambassador.block_Thief(captain2));
    CHECK_THROWS(ambassador.block_Thief(assassin));
    CHECK_THROWS(ambassador.block_Thief(duke));
    CHECK_NOTHROW(ambassador.block_Thief(captain1));
    CHECK_THROWS(ambassador.block_Thief(contessa));
    CHECK_THROWS(ambassador.block_Thief(ambassador));
}



}