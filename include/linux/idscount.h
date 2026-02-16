#ifndef _IDSCOUNT_H_
#define _IDSCOUNT_H_ 1

struct idscount_plat_data {
  int pin,
      mode,
      min0_us,
      min1_us,
      enel_mode,
      enel_space,
      enel_min_len_us,
      enel_max_len_us,
      enel_min_intra_us;
};

#endif	/* _IDSCOUNT_H_ */

