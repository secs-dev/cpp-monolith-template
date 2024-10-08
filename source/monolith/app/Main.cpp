#include <iostream>

#include "monolith/HelloWorld.hpp"

namespace monolith::app {

void Main() {
  std::cout << HelloWorld() << '\n';
}

}  // namespace monolith::app

int main() {
  monolith::app::Main();
}
