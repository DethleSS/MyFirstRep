#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED
#include <iostream>
#include <vector>
#include "card.h"
#include <time.h>

Card::Suit suit_arr[4] {Card::Suit::hearts, Card::Suit::diamonds, Card::Suit::spades, Card::Suit::clubs};
Card::Value value_arr[13] {Card::Value::two,
          Card::Value::three,
          Card::Value::four,
          Card::Value::five,
          Card::Value::six,
          Card::Value::seven,
          Card::Value::eight,
          Card::Value::nine,
          Card::Value::ten,
          Card::Value::jack,
          Card::Value::queen,
          Card::Value::king,
          Card::Value::ace
};

Card::Card(Value value, Suit suit, int weight):m_value(value), m_suit(suit), m_weight(weight) {};

struct Deck
{
    Deck* d = nullptr;
    std::vector<Card> m_deck;
    Deck();
    Card& operator[](int i)
    {
        return m_deck[i];
    }
    Card get_card();


};

int get_weight(Card::Value value )
{
            switch(value)
        {
        case Card::Value::two :
            return 2;
        case Card::Value::three:
            return 3;
        case Card::Value::four:
            return 4;
        case Card::Value::five:
            return 5;
        case Card::Value::six:
            return 6;
        case Card::Value::seven:
            return 7;
        case Card::Value::eight:
            return 8;
        case Card::Value::nine:
            return 9;
        case Card::Value::ten:
            return 10;
        case Card::Value::jack:
            return 10;
        case Card::Value::queen:
            return 10;
        case Card::Value::king:
            return 10;
        case Card::Value::ace:
            return 11;
        }
}

Deck::Deck()
{

    for(int s = 0; s < 4; ++s)
    {
        for(int n = 0; n < 13; ++n)
        {
            m_deck.push_back(Card (value_arr[n], suit_arr[s], get_weight(value_arr[n]) ) );
        }
    }

}

Card Deck::get_card()
{
    srand(time(0));
    int temp;
    for(;;)
    {
         temp = rand() % 52;

         if(!m_deck[temp].is_on_hand)
         {
             m_deck[temp].is_on_hand = true;
             return m_deck[temp];

         }
    }









}





#endif // DECK_H_INCLUDED
