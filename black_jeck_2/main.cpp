#include <iostream>
#include "deck.h"
#include "card.h"
#include "person.h"
#include "player.h"

int main()
{
    Deck deck;
    Player player(Person("Egor","Captain Vorobey"), &deck);
    for(;;)
    {

        player.get_hand();
        std::cout << deck.get_card().to_string() <<std::endl;

    }


    return 0;
}
