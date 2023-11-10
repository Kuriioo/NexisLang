/**
 * @file Value.hpp 
 * @author Kurio
*/

#ifndef _KAFE_VALUE_HPP_
#define _KAFE_VALUE_HPP_


namespace Kafe 
{
  class VM;
  enum class ValueType
  {
    NUMBER = 0,
    STRING = 1
  };
  class Value
  {
  public:
    Value();
    Value(ValueType type);
  };
};


#endif