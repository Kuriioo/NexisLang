/**
 * @file Value.hpp 
 * @author Kurio
*/

#ifndef _NEXIS_VALUE_HPP_
#define _NEXIS_VALUE_HPP_


namespace Nexis 
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