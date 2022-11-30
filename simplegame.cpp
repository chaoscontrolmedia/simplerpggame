#include <iostream>

using namespace std;

void character_sheet()
{
    cout << "Player is a hero who wants to program games and be rich." << endl;
}

int attacks()
{
    int damage = 21;
    return damage;
}

int enemy_attack()
{
    int damage = 25;
    return damage;
}

int blocking(int n)
{
    int block = n * .2;
    return block;
}

int main()
{

    int enemy_hp = 250;
    int player_hp = 200;
    int mana = 40;
    int critical_health = player_hp / 4;
    int mana_attack;
    int blocked_attack;
    int choice;

    cout << "Let's play my game. Press 0 to play,anything else to leave." << endl;
    cin >> choice;

    if (choice == 0)
    {
        cout << "Game Start" << endl;
    }

    else
    {
        return 0;
    }

    character_sheet();

    while (enemy_hp > 0 || player_hp > 0)
    {
        cout << "\nEnemy 1 HP:" << enemy_hp;
        cout << " Player 1 HP:" << player_hp;
        cout << " Player 1 Mana:" << mana << endl;

        cout << "Player 1-Attack 2-Block 3-Mana Attack";
        cin >> choice;
        if (choice == 1)
        {
            cout << "\nAttack does " << attacks() << " damage." << endl;
            enemy_hp -= attacks();
            cout << "Enemy has " << enemy_hp << "hp left." << endl;
        }
        if (choice == 2)
        {
            cout << "Blocking!";
            blocked_attack = (enemy_attack() * .2);
        }
        if (choice == 3)
        {

            mana_attack = (attacks() * 2.2);
            if (mana > 0)
            {
                enemy_hp -= mana_attack;
                mana -= 10;
                cout << "\nPlayer uses mana attack! " << mana_attack << " damage" << endl;
            }
            else
            {
                mana -= 0;
                cout << "Player is out of Mana.";
            }
        }

        if (choice == 2)
        {
            cout << "\nEnemy attacks! Enemy does " << blocked_attack << " damage" << endl;
            player_hp -= blocked_attack;
            cout << "\nPlayer has " << player_hp << " hp left" << endl;
        }
        else
        {

            cout << "Enemy attacks! Enemy does " << enemy_attack() << " damage" << endl;
            player_hp -= enemy_attack();
            cout << "\nPlayer has " << player_hp << " hp left" << endl;
        }

        if (player_hp <= critical_health)
        {
            cout << "Player has critical health!" << endl;
        }

        if (player_hp <= 0)
        {
            cout << "You died" << endl;
            return 0;
        }

        if (enemy_hp <= 0)
        {
            cout << "You defeated the enemy." << endl;
            return 0;
        }
    }
    //addition
    // enemy
    // hits
    // using while loop for game
    // blocking
    // critical health condition
    // game over
    // mana attack addition
    //running out of mana condition

    return 0;
}