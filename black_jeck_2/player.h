#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "person.h"
#include "card.h"
#include "deck.h"
struct Player
{
    Person info;
    Deck* m_deck;
    std::vector<Card> hand;
    Player() = default;
    Player(Person person, Deck* deck);
    void get_hand();
    void get_card();

};
    void Player::get_hand()
    {
        hand.push_back(m_deck->get_card());
        hand.push_back(m_deck->get_card());
    }

    void Player::get_card()
    {
        hand.push_back(m_deck->get_card());
    }
    Player::Player(Person person, Deck* deck):info(person),m_deck(deck){};


#endif // PLAYER_H_INCLUDED
