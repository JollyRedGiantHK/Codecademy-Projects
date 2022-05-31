/* This program is going to be the game Rock, Paper, Scissors, Lizard, Spock. Made famous form renown TV show The Big Bang Theory.*/

#include <iostream>
#include <stdlib.h>

int main(){

  // Let's get crazy! Rock, Paper, Scicors, Lizard, Spock ✊✋✌️👌🖖
  srand (time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0;

  std::cout << "==================================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!!\n";
  std::cout << "==================================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 👌\n";
  std::cout << "5) 🖖\n";

  std::cout << "Shoot! ";

  std::cin >> user;

  if(user == 1){
    std::cout << "You chose ✊\n";
  }
  else if(user == 2){
    std::cout << "You chose ✋\n";
  }
  else if(user == 3){
    std::cout << "You chose ✌️\n";
  }
  else if(user == 4){
    std::cout << "You chose 👌\n";
  }
  else if(user == 5){
    std::cout << "You chose 🖖\n";
  }
  else{
    std::cout << "That is not an option!!\n";
  }

  if(computer == 1){
    std::cout << "The Computer chose ✊\n";
  }
  else if(computer == 2){
    std::cout << "The Computer chose ✋\n";
  }
  else if(computer == 3){
    std::cout << "The Computer chose ✌️\n";
  }
  else if(computer == 4){
    std::cout << "The Computer chose 👌\n";
  }
  else if(computer == 5){
    std::cout << "The Computer chose 🖖\n";
  }


  if(computer == user){
    std::cout << "It is a tie!\n";
  }

  else if(user = 1){
    if(computer == 3 || computer == 4){
      std::cout << "You win!!\n";
    }
    if(computer == 2 || computer == 5){
      std::cout << "You lose! WOMP!\n";
    }
  }

  else if(user = 2){
    if(computer == 1 || computer == 5){
      std::cout << "You win!!\n";
    }
    if(computer == 3 || computer == 4){
      std::cout << "You lose! WOMP!\n";
    }
  }

  else if(user = 3){
    if(computer == 2 || computer == 4){
      std::cout << "You win!!\n";
    }
    if(computer == 1 || computer == 5){
      std::cout << "You lose! WOMP!\n";
    }
  }

  else if(user = 4){
    if(computer == 2 || computer == 5){
      std::cout << "You win!!\n";
    }
    if(computer == 1 || computer == 3){
      std::cout << "You lose! WOMP!\n";
    }
  }

  else if(user = 5){
    if(computer == 1 || computer == 3){
      std::cout << "You win!!\n";
    }
    if(computer == 2 || computer == 4){
      std::cout << "You lose! WOMP!\n";
    }
  }

  return 0;
}
