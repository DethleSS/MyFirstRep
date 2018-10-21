#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "deck.h"
#include "player.h"
#include "croupie.h"


struct Round
{
    Player m_player;
    Croupie m_croupie;
    Round();
    Deck deck;
    int bet;
    void console_make_bet();
    void console_show_hand();
    void get_cards();
    void start();
    void console_start_croupie();
    bool player_is_win();
    void set_round_result();


};
Round::Round(): m_player( Person("Egor","Captain Vorobey"),&deck), m_croupie(&deck)
{

};
void Round::console_make_bet()
{

    std::cout << "Make bet " <<std::endl;

    for(;;)
    {
        std::cin >> bet;
        if(m_player.make_bet(bet))
        {
            return;
        }
        std::cout << "Please make correct bet" <<std::endl;

    }
}
void Round::console_show_hand()
{
    m_player.get_hand();
    std::cout << m_player.hand_to_string() <<std::endl;
}
void Round::get_cards()
{
    int answer;

    for(;;)
    {

        std::cout << "Your score " << m_player.get_score() <<std::endl;
        std::cout << "Do you want take card" <<std::endl;
        std::cin >> answer;
        if(answer)
        {
            system("cls");
            m_player.get_card();
            std::cout << m_player.hand_to_string() <<std::endl;

            if(!m_player.is_on_game())
            {
                std::cout << "you are loser" <<std::endl;
                bet = 0;
                return ;
            }

        }
        else
        {
            m_croupie.m_oponent_score = m_player.get_score();
            m_croupie.get_cards();

            std::cout << m_croupie.hand_to_string() <<std::endl;
            std::cout << m_croupie.get_score() <<std::endl;
            set_round_result();
            return;
        }
    }
}
bool Round::player_is_win()
{
    return m_player.get_score() > m_croupie.get_score() || m_croupie.get_score() > 22;
}
void Round::set_round_result()
{
    if(player_is_win())
    {
        std::cout << "Player win " <<std::endl;
    }
    else
    {
        std::cout << "You loser " <<std::endl;
    }
}
void Round::start()
{
    console_make_bet();
    console_show_hand();
    get_cards();

}

#endif // GAME_H_INCLUDED
