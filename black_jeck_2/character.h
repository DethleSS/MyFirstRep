#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED
#include <string>
#include "deck.h"
struct Character
{
    Hand hand;
    Deck* m_deck;
    void get_card();
    int get_score();
    std::string hand_to_string();
};

void Character::get_card()
{
    hand.push_back(m_deck->get_card());
}


std::string Character::hand_to_string()
{
    return hand.to_string();
}

int Character::get_score()
{
    return hand.get_score();
}
#endif // CHARACTER_H_INCLUDED
