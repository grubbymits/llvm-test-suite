#include "harness.h"

__attribute__((__aligned__(16))) signed char sc[64];
__attribute__((__aligned__(16))) unsigned char uc[64];
__attribute__((__aligned__(16))) signed short ss[32];
__attribute__((__aligned__(16))) unsigned short us[32];
__attribute__((__aligned__(16))) signed int si[16];
__attribute__((__aligned__(16))) unsigned int ui[16];
__attribute__((__aligned__(16))) float f[16];

static void test() {
  vector unsigned char expected = {4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
  check (vec_all_eq(vec_lvsl(0, &sc[4]), expected), "sc");
  check (vec_all_eq(vec_lvsl(0, &uc[4]), expected), "uc");
  check (vec_all_eq(vec_lvsl(0, &ss[2]), expected), "ss");
  check (vec_all_eq(vec_lvsl(0, &us[2]), expected), "us");
  check (vec_all_eq(vec_lvsl(0, &si[1]), expected), "si");
  check (vec_all_eq(vec_lvsl(0, &ui[1]), expected), "ui");
  check (vec_all_eq(vec_lvsl(0, & f[1]), expected), "f");
}
