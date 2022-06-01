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

  char choice1 = 'A';

  // Choose one! Will you find out what the map says?

  std::cout << " A) Choose to follow the map from the bottle.\n";
  std::cout << " B) Choose to continue sailing to nearest town.\n";

  std::cin >> choice1;

  while (choice1 != 'A' && choice1 != 'a' && choice1 != 'B' && choice1 != 'b')
  {
    std::cout << "Quit lollygagging make a decision! \n";
    std::cin >> choice1;
  }

  if (choice1 == 'A' || choice1 == 'a')
  {
    std::cout << "Red Beard yells out 'Turn to the west!' The ship then hard turns as the crew hoistes the sails of the left of the ship to catch the wind.\n"; 
    std::cout << "You look down at your compass and you are now heading directly towards the X that is clearly marked on the map.\n"; 
  }

  else if (choice1 == 'B' || choice1 == 'b')
  {
    std::cout << "The ship remains on course toward the city of Bridgetwon in Barbados. Suddenly, the storm takes a turn for the worst and lightning strikes the main hull. A giant hole appears! Due to the waves smashing against that same area the hole continues to grow. There is no way out. The ship sinks...\n\n";
    std::cout << "Your adventure comes to an end.\n";
    
    return 0;
  }
  
  std::cout << "Thanks to your quick decision making the ship navigates out of the storm. As you continue following the map and the storm settles a mysterious island appears on the horizon. This islands shape is exactly how it is on the map. As the ship approaches you notice little sillouttes of human figures on the beach of the island.\n";
  std::cout << "Red Beard once again looks to you.\n";
  std::cout << "================================\n";
  std::cout << "'Do we approach the island straigt on and come face to face with the mysterious sillouttes or drop anchor and sneak around the back of the island on a row boat?'\n";

  // Choose one! Will this cause the fate of you and your crew?
  std::cout << " A) Approach the island head on.\n";
  std::cout << " B) Sneak around the back of the island.\n";

  char choice2 = 'A';

  std::cin >> choice2;

  while (choice2 != 'A' && choice2 != 'a' && choice2 != 'B' && choice2!= 'b')
  {
    std::cout << "Get on with it lad! Make a decision.\n";
    std::cin >> choice2;
  }

  if (choice2 == 'A' || choice2 == 'a' )
  {
    std::cout << "As ship starts to inch closer to the island, a member of the crew yells out 'CANNONBALL.' Instantly after that yell echos through the ship cannonballs start ripping through the ships sails and smashing into the deck. Red Beard screams 'Ready for battle!'\n";
    std::cout << "You race to the helm to turn the ship so that the starboard cannons face the island. But it is too late, there are too many cannon balls already baraging the ship. You witness one fly throught he front sail and colliding directly into Red Beard... The fate of the crew is settled.\n\n";
    std::cout << "Your adventure comes to an end.\n\n";

    return 0;
  }
  else if (choice2 == 'B' || choice2 == 'b') 
  {
    std::cout << "Red Beard grabs you and a small crew after lowering the anchor on the ship. With this small crew in a small row boat, you help navigate around the backside of the island. There is nobody on this side of the island. You spot a small cave and according to the map this is the way to go to get to that magical X mark.\n";
  }

  std::cout << "As the boat slowly wades down this cave Red Beard notices a fork where the cave splits to two seperate direction. He then turns to you again and with confidence lifts his hat in your direction.\n";

  //Last choice choose wisely! 
  std::cout << "================================\n";
  std::cout << "Which way do you decide to go? Left or Right?\n";

  std::cout << " A) Left\n";
  std::cout << " B) Right\n";

  char choice3 = 'A';

  std::cin >> choice3;

  while (choice3 != 'A' && choice3 != 'a' && choice3 != 'B' && choice3!= 'b')
  {
    std::cout << "This choice is going to determine everything! Hurry up and choose.\n";
    std::cin >> choice3;
  }

  if (choice3 == 'A' || choice3 == 'a' )
  {
    std::cout << "You choose left. As the rowboat goes deeper into the cave it starts to get darker and darker. The small crew that you brought with you starts to panic. Red Beard then calms the crew by noticing a small light in the distance. As you approach the light it become brighter and brighter. At the end is a room full of treasure! You and the crew load up as much as you can and take it back to the ship.\n\n";
    /*std::cout << "                 ____...------------...____ \n";
    std::cout << "           _.-'` /o/__ ____ __ __  __ \o\_`''-._ \n";
    std::cout << "         .'     / /                    \ \     '.\n";
    std::cout << "         |=====/o/======================\o\=====|\n";
    std::cout << "         |____/_/________..____..________\_\____|\n";
    std::cout << "         /   _/ \_     <_o#\__/#o_>     _/ \_   \\n";
    std::cout << "         \      \_________\####/_________/      /\n";
    std::cout << "          |===\!/========================\!/===| \n";
    std::cout << "          |   |=|          .---.         |=|   | \n";
    std::cout << "          |===|o|=========/     \========|o|===| \n";
    std::cout << "          |   | |         \() ()/        | |   | \n";
    std::cout << "          |===|o|======{'-.) A (.-'}=====|o|===| \n";
    std::cout << "          | __/ \__     '-.\uuu/.-'    __/ \__ | \n";
    std::cout << "          |         |==== .'.'^'.'.====|       | \n";
    std::cout << "          |  _\o/   __  {.' __  '.} _   _\o/  _| \n";
    std::cout << "          `""""-""""""""""""""""""""""""""-""""` \n";
    */
  }

  else if (choice2 == 'B' || choice2 == 'b')
  {
    std::cout << "You chose right. The cave becomes darker and darker. Suddenly there is a loud rushing of water and it is pulling the row boat in. There is nothing more anyone can do. The rowboat plunges over the edfe and there is a pit full of spikes at the bottom...\n";
    std::cout << "Your adventure comes to an end.\n\n";

    return 0;
  }

  std::cout << "You, Red Beard, and the crew bask in riches for the rest of your days.\n";
  std::cout << "===========================================\n";
  std::cout << "               T H E  E N D\n\n";

  return 0;
}
