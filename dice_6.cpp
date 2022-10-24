#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
#include <windows.h>





struct players
{
  int player_one_scope = 0;
  int player_two_scope = 0;
  int count_of_games = 0;
  bool turn;
  short dice = 0;
  std::string player_check;
};

short randto()
{
    short min = 1;
    short max = 6;
    return min + rand() % (max-min);
}

void data_out(short dice)
{
    std::cout << "it's dice " << dice << "\n";
}

std::string check_player_turn(bool turn)
{
    if(turn == true)
    {
        return "it's player one play!";
    }
    else
    {
        return "it's player two play!";
    }
}
bool player_turn()
{
    short min = 0;
    short max = 1;
    short __turn = min + rand() % (max-min);
    if (__turn == 1)
    {
        return true;
    }
    else if(__turn == 0)
    {
        return false;
    }
}


void data_out(players some_players)
{
    std::cout << "player one scope:" << some_players.player_one_scope << "\n";
    std::cout << "player two scope:" << some_players.player_two_scope << "\n";
    std::cout << "games count:" << some_players.count_of_games << "\n";
};




void game_start(players some_players, int count_of_games)
{
    while(some_players.count_of_games!=count_of_games)
    {
        some_players.turn = player_turn();
        if(some_players.turn == true)
        {
            some_players.player_check = check_player_turn(some_players.turn);
            some_players.dice = randto();
            data_out(some_players.dice);
            some_players.player_one_scope +=some_players.dice;
            some_players.count_of_games++;
            data_out(some_players);
            Sleep(3000);
        }
        else
        {
            some_players.player_check = check_player_turn(some_players.turn);
            some_players.dice = randto();
            data_out(some_players.dice);
            some_players.player_two_scope +=some_players.dice;
            some_players.count_of_games++;
            data_out(some_players);
            Sleep(3000);
        }
    }
}




int main()
{

    players __players;
    srand(time(NULL));
    int x = 100;
    game_start(__players,x);

}
