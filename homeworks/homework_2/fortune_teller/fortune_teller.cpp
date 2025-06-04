#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <format>
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
  const std::array<string, 3> endings{
      "eats UB for breakfast",
      "finds errors quicker than the compiler",
      "is not afraid of C++ error messages"};

  cout << "Welcome to the fortune teller program!" << endl;
  cout << "Please enter your name:" << endl;
  string name{};
  cin >> name;

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
  const std::vector<string> adjectives{adj1, adj2};

  {
    cout << "Here is your description:" << endl;
    const std::size_t final_adj_index{name.length() % adjectives.size()};
    const std::size_t ending_index{name.length() % endings.size()};

    cout << name << ", the " << adjectives.at(final_adj_index) << ' '
    << seasons.at(season) << " that " << endings.at(ending_index) << endl;
    // cout << std::format("{}, the {} {} that {}",
    //   name,
    //   adjectives.at(final_adj_index),
    //   seasons.at(season),
    //   endings.at(ending_index)
    // ) << endl;
  }

  return 0;
}