#include "util.h"
class Game
{
private:
    int fps;
    int tickCount;

public:
    Game()
    {
    }
    ~Game()
    {
    }

public:
    void Update()
    {
    }
    void Render()
    {
    }

    void Go()
    {
        while (true)
        {
            Update();
            Render();
            sleep(30);
        }
    }
    void tick()
    {
    }
    void draw()
    {
    }
};