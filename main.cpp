#include <bits/stdc++.h>
using namespace std;
class Action;
enum class Data_type : int {
  Int,
  String,
  Bool
};
class Decision {
public:
  string        name;
  static bool   result;
  Action *      true_ptr;
  Action *      false_ptr;
};
class Action {
public:
  string        name;
  Data_type     data_type;
  unsigned int  length;
  Decision *    next_ptr;
};

int main() {
  vector<Action>   actions;
  vector<Decision> decisions;
  Action    a100 {"",Data_type::Bool,1,nullptr};
  Decision  d100 {"just do next",true, };

  cout << "###" << endl;
  return 0;
}
