
/* Program: This is a two-player mathematical game of strategy. It is played by two
people with a pile of coins (or other tokens) between them. The players take turns removing
coins from the pile, always removing a non-zero square number of coins (1, 4, 9, 16, …).
The player who removes the last coin wins*/
// Author: Mohamed Abdelaziz Mohamed Abdelaziz
//ID: 20231246
// Version: 2.0
// Date: 1/3/2024
#include <iostream>
#include <cmath>
using namespace std;
int main(){
 //input from the user
  int coins;
  cout<<"enter number of coins :";
  cin>>coins;
  //output number of coins
  cout<<"number of coins:";
  cout<<coins<<endl;
while (true){
if (coins > 0) {
    //player 1 turn 
    int player1;
    cout<<"player 1 enter sqaure number:"<<endl;
    cin>>player1;
    //prossing of sum
    while (std::sqrt(player1) != static_cast<int>(std::sqrt(player1)) || player1 <= 0 || player1 > coins){
    cout<<"Erorre please enter a square number :";
    cin>>player1;
    }
    coins -=player1;
    cout<<"number of coins: ";
    cout<<coins<<endl;
    if (coins == 0){
        cout<<"palyer 1 win ! game over"<<endl;
        break;
    }
    }
    
//player 2 turn
    int player2;
    cout<<"player 2 enter sqaure number:"<<endl;
    cin>>player2;
    //prossing of sum
    while (std::sqrt(player2) != static_cast<int>(std::sqrt(player2)) || player2 <= 0 || player2 > coins){
        cout<<"Erorre please enter a square number :";
        cin>>player2;
    }
    coins -=player2;
    cout<<"number of coins: ";
    cout<<coins<<endl;
    if (coins == 0){
        cout<<"palyer 2 win Game over"<<endl;
        break;
    }
 
        
}
}
