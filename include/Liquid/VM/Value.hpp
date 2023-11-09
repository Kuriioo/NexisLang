#ifndef _LIQUID_VALUE_HPP_
#define _LIQUID_VALUE_HPP_


namespace Liquid 
{
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
