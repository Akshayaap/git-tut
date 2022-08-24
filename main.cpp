#include "game.cpp"

int main()
{
    Game game;
    while (true)
    {
        game.tick();
        game.draw();
    }
    return 0;
}