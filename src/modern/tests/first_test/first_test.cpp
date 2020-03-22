#include <modern.h>

int main( void )
{
  if ( magic_hash() != 8ULL )
  {
    return 1;
  }
  return 0;
}
