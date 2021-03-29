#include <isa.h>
#include "local-include/reg.h"

const char *regsl[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


void isa_reg_display() {
  int i;
  for (i = R_EAX; i <= R_EDI; i ++) {
    printf("%-8s %-16x %-16d\n", regsl[i], reg_l(i), reg_l(i));
  }

  for (i = R_AX; i <= R_DI; i ++) {
    printf("%-8s %-16x %-16d\n", regsw[i], reg_w(i), reg_w(i));
  }

  for (i = R_AL; i <= R_BH; i ++) {
    printf("%-8s %-16x %-16d\n", regsb[i], reg_b(i), reg_b(i));
  }
}


word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
