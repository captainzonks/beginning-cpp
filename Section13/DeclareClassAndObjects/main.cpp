// Section 13
// Declare Classes and Objects

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // attributes
    string name;
    int health;
    int xp;
    
    // methods
    void talk(string text_to_say);
    bool is_dead();
};

class Account {
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal);
    bool withdraw(double bal);
};

int main() {
    Account frank_account;
    Account jim_account;
    
    Player frank;
    Player hero;
    
    Player players[] {frank, hero};
    
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}