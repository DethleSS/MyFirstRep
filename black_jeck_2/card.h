#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
struct Card
{

    enum Value {two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace};
    enum Suit {hearts, diamonds, spades, clubs};

    Value m_value;
    Suit m_suit;
    int m_weight;

    bool is_on_hand = false;
    Card() = default;
    Card(Value value, Suit suit, int weight);
    std::string suit_to_string();
    std::string value_to_string();
    std::string to_string();




};
std::string Card::suit_to_string()
{
    switch(m_suit)
    {
    case Suit::hearts:
        return std::string("h");
    case Suit::diamonds:
        return std::string("d");
    case Suit::spades:
        return std::string("s");
    case Suit::clubs:
        return std::string("c");

    }
}
std::string Card::value_to_string()
{
    switch(m_value)
    {
    case Value::two:
        return std::string("2");
    case Value::three:
        return std::string("3");
    case Value::four:
        return std::string("4");
    case Value::five:
        return std::string("5");
    case Value::six:
        return std::string("6");
    case Value::seven:
        return std::string("7");
    case Value::eight:
        return std::string("8");
    case Value::nine:
        return std::string("9");
    case Value::ten:
        return std::string("10");
    case Value::jack:
        return std::string("j");
    case Value::queen:
        return std::string("q");
    case Value::king:
        return std::string("k");
    case Value::ace:
        return std::string("a");


    }
}
std::string Card::to_string()
{
    return value_to_string() + suit_to_string();
}


#endif // CARD_H_INCLUDED
