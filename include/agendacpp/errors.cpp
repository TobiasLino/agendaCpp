//
// Created by tobias on 29/02/2020.
//

#include "errors.hpp"
void Errors::Error(const char *msg, bool half) {
  std::cout << "ERROR: " << msg << std::endl;
  if (half) exit(1);
}
