#include <iostream> 

int main(){

  // The magic starts here!

  int g = 0;
  int h = 0;
  int r = 0;
  int s = 0;

  int answer1, answer2, answer3, answer4;

  std::cout << "The Sorting Hat Quiz!\n\n";

  // Question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n\n";

  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";

  std::cin >> answer1;

  if(answer1 == 1){
    h++;
  }
  else if(answer1 == 2){
    s++;
  }
  else if(answer1 == 3){
    r++;
  }
  else if(answer1 == 4){
    g++;
  }
  else {
    std::cout << "Invalid input\n";
  }

  //Question 2
  std::cout << "Q2) Dawn or Dusk?\n\n";

  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";

  std::cin >> answer2; 

  if(answer2 == 1){
    g++ && r++;
  }
  else if(answer2 == 2){
    h++ && s++;
  }
  else {
    std::cout << "Invalid input\n";
  }
  
  //Question 3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";

  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n";

  std::cin >> answer3;

  if(answer3 == 1){
    s++;
  }
  else if(answer3 == 2){
    h++;
  }
  else if(answer3 == 3){
    r++;
  }
  else if(answer3 == 4){
    g++;
  }
  else {
    std::cout << "Invalid input\n";
  }

  //Question 4
  std::cout << "Q4) WHich road tempts you most?\n\n";

  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient building)\n";

  std::cin >> answer4;

  if(answer4 == 1){
    h++;
  }
  else if(answer4 == 2){
    s++;
  }
  else if(answer4 == 3){
    g++;
  }
  else if(answer4 ==4){
    r++;
  }
  else {
    std::cout << "Invalid input\n";
  }

  int max = 0;

  std::string house;

  if(g > max) {
    max = g;
    house = "Gryffindor";
  }
  if (h > max){
    max = h;
    house = "Hufflepuff";
  }
  if (r > max){
    max = r;
    house = "Ravenclaw";
  }
  if (s > max){
    max = s;
    house = "Slytherin";
  }

  std::cout << house << "!\n";

}
