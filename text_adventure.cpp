#include <iostream> 

int main()
{
  //This is going to be an adventure, strap in and get ready!
  std::cout << "It is a dark and stormy day out on the sea. The waves are smashing against the port and starboard, causing the ship to rock back and forth. A rough way for any pirate to start their voyage to the unkown.\n";
  std::cout << "Suddenly, a dark glass bottle washing up from a wave and crashes upon the deck. The bottle shatters with a loud crash, the crew takes notice that there is a parchment roled up tight within the bottle.\n";
  std::cout << "The captain, Red Beard comes stumbling out of his quarters and rushes over to pick oup the parchment. The entire crew stops what they are doing to stare directly at the captain.\n";
  std::cout << "You are see glint in Red Bear's eye as he is reading the parchment. As the navigator of the ship you know what might be coming.\n";
  std::cout << "Suddenly, Red Beard shouts 'It's a map!' Then, within a moments notice he turns directs towards you. This can only me one thing in the eyes of a pirate captain.\n";
  std::cout << "================================\n";
  std::cout << "As the navigator what do you do?\n";

  // Choose one!
  char choice1 = 'A';
  char choice2 = 'A';
  char choice3 = 'A';

  std::cout << " A) Choose to follow the map from the bottle.\n";
  std::cout << " B) Choose to continue sailing to nearest town.\n";

  std::cin >> choice1;

  while(choice1 != 'A' && choice1 != 'a' && choice1 != 'B' && choice1 != 'b')
  {
    std::cout << "Quit lollygagging make a decision! \n";
    std::cin >> choice1;
  }

    if (choice1 == 'A' || choice1 == 'a')
    {
      std::cout << "Red Beard yells out 'Turn to the west!' The ship then hard turns as the crew hoistes the sails of the left of the ship to catch the wind. You look down at your compass and you are now heading directly towards the X that is clearly marked on the map.\n"; 
    }

    else if (choice1 == 'B' || choice1 == 'b')
    {
      std::cout << "The ship remains on course toward the city of Bridgetwon in Barbados. Suddenly, the storm takes a turn for the worst and lightning strikes the main hull. A giant hole appears! Due to the waves smashing against that same area the hole continues to grow. There is no way out. The ship sinks... The adventure ends.\n";
      return 0;
    }
  
  return 0;
}
