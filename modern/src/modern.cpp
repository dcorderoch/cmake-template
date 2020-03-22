#include <modern.h>

uint64_t magic_hash()
{
  return 8ULL;
}

void log( logger l )
{
  if ( l != nullptr )
  {
    l( version );
  }
}
