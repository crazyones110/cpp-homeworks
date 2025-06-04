#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  const std::map<string, string> seasons{
      {"spring", "STL guru"},
      {"summer", "C++ expert"},
      {"autumn", "coding beast"},
      {"winter", "software design hero"}};
  const std::vector<string> endings{
      "eats UB for breakfast",
      "finds errors quicker than the compiler",
      "is not afraid of C++ error messages"};

  cout << "Welcome to the fortune teller program!" << endl;
  cout << "Please enter your name:" << endl;
  string name{};
  cin >> name;

  std::vector<string> adjectives{};
  cout << "Please enter the time of year when you were born:" << endl
       << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
  string season{};
  cin >> season;
  cout << "Please enter an adjective:" << endl;
  string adj1{};
  cin >> adj1;
  cout << "Please enter another adjective:" << endl;
  string adj2{};
  cin >> adj2;
  adjectives.emplace_back(adj1);
  adjectives.emplace_back(adj2);

  {
    cout << "Here is your description:" << endl;
    std::size_t final_adj_index{name.length() % adjectives.size()};

    cout << name << ", the " << adjectives.at(final_adj_index) << ' '
    << seasons.at(season) << " that " << endings.at(name.length() % endings.size());
  }

  return 0;
}