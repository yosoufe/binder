// file: "api.h"
#pragma once

#include <stdint.h>
#include <cstddef>
#include <string>
#include <vector>

namespace ApiNameSpace
{
  struct Base0
  {
    virtual ~Base0(){};
    virtual Base0* copy() const = 0;
  };
  struct Base1 : public Base0
  {
    enum enumType
    {
      t1,  t2,  t3, t4
    };
    double v;
    enumType   e;
  };

  struct child: public Base1
  {
  	Base1* copy() const override {};
  };
}; // end of namespace

// add the instantiation of the vector
template class std::vector<ApiNameSpace::Base1*>;

namespace ApiNameSpace{
  class builder
  {
  public:
    builder(){};
    int nonVectorFunction (const char* ch, int a){};
    int someFunction1(const char* ch, std::vector<Base1*> bs){};
  };
};