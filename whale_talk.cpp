
#include <iostream>
#include <vector>
#include <string>
 
int main() 
{
 
  // Whale, whale, whale.
  // What have we got here?
 
 std::string input = "hi, human";

 /*std::cout << "This is a translater into whale talk.\n";
 std::cout << "Please enter what you want translated: \n";

 std::cin >> input;*/

 std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
 std::vector<char> result;

 for (int i = 0; i < input.size(); i++)
 {
   for(int v = 0; v < vowels.size(); v++)
   {
     if(input[i] == vowels[v])
     {
       result.push_back(input[i]); 
     
      if(input[i] == 'e' || input[i] == 'u')
      {
         result.push_back(input[i]);
      }
     } 
   }
 }
  for (int r = 0; r < result.size(); r++)
  {
    std::cout << result[r]; 
  }

  std::cout << "\n";

}
