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
<<<<<<< HEAD
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
=======
    void tick()
    {
    }
    void draw()
    {
    }
>>>>>>> tick and count methods of Game are called from main method in while(true) loop
};