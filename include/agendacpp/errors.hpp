//
// Created by tobias on 29/02/2020.
//

#ifndef INCLUDE_AGENDACPP_ERRORS_HPP_
#define INCLUDE_AGENDACPP_ERRORS_HPP_

#include <iostream>

class Errors {
 public:
  void Error(const char *msg, bool half = false);
  void Success(const char *msg);
};


#endif //INCLUDE_AGENDACPP_ERRORS_HPP_
