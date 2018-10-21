#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "person.h"
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "character.h"
struct Player : Character
{
    Person info;
    int bank_player;
    bool make_bet(int value);
    Player() = default;
    Player(Person person, Deck* deck);
    void get_hand();
    bool is_on_game();



};
Player::Player(Person person, Deck* deck)
    {
        info = person;
        m_deck = deck;
        bank_player = 1000;
    };
    void Player::get_hand()
    {
        hand.push_back(m_deck->get_card());
        hand.push_back(m_deck->get_card());
    }

    bool Player::is_on_game()
{
    return get_score() < 22;
}
bool Player::make_bet(int value)
{
    if(value > bank_player)
    {
        return false;
    }
    bank_player -=value;
    return true;
}



#endif // PLAYER_H_INCLUDED
