//Q98.Create a class Game with member function to stimulate a simple game with player action and scoring.
#include <iostream>
#include<string>
using namespace std;
class Game {
private:
    int score;  
public:
    Game() {
        score = 0;
    }
    void playerAction() {
        score++;  
        cout << "Player performed an action! Score: " << score << endl;
    }
    int getScore() {
        return score;
    }
};
int main() {
    Game myGame;
    myGame.playerAction();  
    myGame.playerAction();  
    myGame.playerAction();  
    cout << "Final Score: " << myGame.getScore() << endl;  
    return 0;
}
