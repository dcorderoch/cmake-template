#include <modern.h>

#include <string>

static std::string s{};

void test( char const* const ca )
{
  s = ca;
}

int main( void )
{
  if( s != "" )
  {
    return 1;
  }

  log(test);

  if(s == "" )
  {
    return 1;
  }

  return 0;
}
