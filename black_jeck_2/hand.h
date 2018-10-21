#ifndef HAND_H_INCLUDED
#define HAND_H_INCLUDED


struct Hand
{
    std::vector<Card> m_hand;
    void push_back(Card card);
    std::string to_string();
    int get_score();
    bool is_on_game();
};

void Hand::push_back(Card card)
{
    m_hand.push_back(card);
}
std::string Hand::to_string()
{
    std::string result;
    for(unsigned int i = 0; i < m_hand.size(); ++i)
    {
        result += m_hand[i].to_string();

    }
    return result;
}
int Hand::get_score()
{
    int temp = 0;
    for(unsigned int i = 0;i < m_hand.size(); ++i)
    {
        temp += m_hand[i].m_weight;
    }
    return temp;
}
bool Hand::is_on_game()
{
    return get_score() < 22;
}

#endif // HAND_H_INCLUDED
