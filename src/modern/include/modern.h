#ifndef MODERN_H
#define MODERN_H

#include <cstdint>

static_assert(sizeof(long long) == 8U, "uint64_t is NOT 8 bytes!");
static_assert(sizeof(long long) == sizeof(uint64_t), "uint64_t != long long!");

uint64_t magic_hash();

constexpr char version[] = "0.1.0";

enum class type
{
  invalid,
  local,
  remote
};

using logger = void(char const *const);

void log(logger = nullptr);

#endif // MODERN_H
