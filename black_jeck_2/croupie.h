#ifndef CROUPIE_H_INCLUDED
#define CROUPIE_H_INCLUDED
#include "player.h"
#include "character.h"


struct Croupie:Character
{
    int m_oponent_score;
    Croupie() = default;
    Croupie(Deck* deck);
    void get_cards();

};
 Croupie::Croupie(Deck* deck)
 {
    m_deck = deck;
 }
 void Croupie::get_cards()
 {
     get_card();
     for(;hand.get_score() < m_oponent_score;)
     {
         get_card();
     }
 }
#endif // CROUPIE_H_INCLUDED
