// This is the original C++ code I wrote mostly by my self (Jon helped me with switch statements)

#include <iostream>

using namespace std;

int main(){

    int playerHealth = 115;
    int playerMaxhealth = 115;
    int playerDamage = 30;
    int potions = 3;
    int potionRegen = 50;
    int selection;

    int monsterHealth = 200;
    int monsterDamage = 28;


    while (monsterHealth > 0 && playerHealth > 0) {
        cout << "HP: " << playerHealth << " Potions: " << potions << endl;
        cout << "What is your move?: 1: Attack! or 2: Heal! " << endl;
        cin >> selection;
        switch(selection) {
            case 1:
            monsterHealth -= playerDamage;
            cout << "You dealt " << playerDamage << " HP!" << " The monster is currently at " << monsterHealth << "HP! " << endl;
            if (monsterHealth > 0) {
                playerHealth -= monsterDamage;
                cout << "The monster has hit you for " << monsterDamage << "HP! " << endl;
            }
            if (monsterHealth <= 0) {
                cout << "The monster has been slain! " << endl;
                cin.get(); cin.get();
                return 0;
            }
            break;
            case 2:
            if (potions == 0) {
                cout << "You have no more potions..." << endl;
                break;
            }
            if (playerHealth == playerMaxhealth) {
                cout << "You're already at full health!" << endl;
                break;
            }
            potions--;
            playerHealth += potionRegen;
            playerHealth -= monsterDamage;
            cout << "You used a potion and healed " << potionRegen << " HP! The monster hit you for " << monsterDamage << "!" << endl;
            if (playerHealth > playerMaxhealth){
                playerHealth = playerMaxhealth;
                cout << "You cannot heal above max health! " << endl;
            }
            break;
            default:
                cout << "Invalid choice, try again!" << endl;
                break;
        }
    }

    if (playerHealth <= 0) {
        cout << "You have been slain by the monster..." << endl;
    }

    cin.get(); cin.get();
    return 0;
}

