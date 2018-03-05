/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 926:  /* sync_xorsi */
    case 925:  /* sync_xorhi */
    case 924:  /* sync_xorqi */
    case 923:  /* sync_andsi */
    case 922:  /* sync_andhi */
    case 921:  /* sync_andqi */
    case 920:  /* sync_iorsi */
    case 919:  /* sync_iorhi */
    case 918:  /* sync_iorqi */
    case 917:  /* sync_subsi */
    case 916:  /* sync_subhi */
    case 915:  /* sync_subqi */
    case 914:  /* sync_addsi */
    case 913:  /* sync_addhi */
    case 912:  /* sync_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 911:  /* sync_lock_test_and_setsi */
    case 910:  /* sync_lock_test_and_sethi */
    case 909:  /* sync_lock_test_and_setqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 908:  /* sync_old_addsi */
    case 907:  /* sync_old_addhi */
    case 906:  /* sync_old_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 905:  /* *sync_compare_and_swap_ccsi */
    case 904:  /* *sync_compare_and_swap_cchi */
    case 903:  /* *sync_compare_and_swap_ccqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 1;
      break;

    case 902:  /* sync_compare_and_swapsi */
    case 901:  /* sync_compare_and_swaphi */
    case 900:  /* sync_compare_and_swapqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 816:  /* mmx_pi2fw */
    case 815:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 792:  /* sse3_monitor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 791:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 790:  /* *sse2_lfence */
    case 789:  /* *sse2_mfence */
    case 787:  /* *sse_sfence */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 897:  /* *mmx_maskmovq */
    case 784:  /* *sse2_maskmovdqu */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 894:  /* mmx_uavgv4hi3 */
    case 893:  /* mmx_uavgv8qi3 */
    case 843:  /* mmx_pmulhrwv4hi3 */
    case 779:  /* sse2_uavgv8hi3 */
    case 778:  /* sse2_uavgv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 768:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 886:  /* mmx_pshufw_1 */
    case 767:  /* sse2_pshuflw_1 */
    case 766:  /* sse2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 885:  /* mmx_pextrw */
    case 765:  /* sse2_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 884:  /* *mmx_pinsrw */
    case 764:  /* *sse2_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 877:  /* mmx_packuswb */
    case 876:  /* mmx_packssdw */
    case 875:  /* mmx_packsswb */
    case 755:  /* sse2_packuswb */
    case 754:  /* sse2_packssdw */
    case 753:  /* sse2_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 842:  /* mmx_pmaddwd */
    case 716:  /* sse2_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 844:  /* sse2_umulsidi3 */
    case 715:  /* sse2_umulv2siv2di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 841:  /* mmx_umulv4hi3_highpart */
    case 840:  /* mmx_smulv4hi3_highpart */
    case 714:  /* sse2_umulv8hi3_highpart */
    case 713:  /* sse2_smulv8hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 694:  /* *vec_concatv2df_sse3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 686:  /* sse2_shufpd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 809:  /* mmx_hsubv2sf3 */
    case 808:  /* mmx_haddv2sf3 */
    case 657:  /* sse3_hsubv2df3 */
    case 656:  /* sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 769:  /* sse2_loadld */
    case 635:  /* *vec_setv4sf_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 691:  /* sse2_movsd */
    case 631:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 690:  /* sse2_loadlpd */
    case 630:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 626:  /* sse_shufps_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 684:  /* *sse3_movddup */
    case 625:  /* sse3_movsldup */
    case 624:  /* sse3_movshdup */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 883:  /* mmx_punpckldq */
    case 882:  /* mmx_punpckhdq */
    case 881:  /* mmx_punpcklwd */
    case 880:  /* mmx_punpckhwd */
    case 879:  /* mmx_punpcklbw */
    case 878:  /* mmx_punpckhbw */
    case 763:  /* sse2_punpcklqdq */
    case 762:  /* sse2_punpckhqdq */
    case 761:  /* sse2_punpckldq */
    case 760:  /* sse2_punpckhdq */
    case 759:  /* sse2_punpcklwd */
    case 758:  /* sse2_punpckhwd */
    case 757:  /* sse2_punpcklbw */
    case 756:  /* sse2_punpckhbw */
    case 685:  /* sse2_unpcklpd */
    case 683:  /* sse2_unpckhpd */
    case 623:  /* sse_unpcklps */
    case 622:  /* sse_unpckhps */
    case 621:  /* sse_movlhps */
    case 620:  /* sse_movhlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 612:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 680:  /* sse2_cvtss2sd */
    case 679:  /* sse2_cvtsd2ss */
    case 673:  /* sse2_cvtsi2sd */
    case 614:  /* sse_cvtsi2ss */
    case 611:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 661:  /* sse2_ucomi */
    case 660:  /* sse2_comi */
    case 602:  /* sse_ucomi */
    case 601:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 659:  /* sse2_vmmaskcmpv2df3 */
    case 600:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 598:  /* sse3_hsubv4sf3 */
    case 597:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 810:  /* mmx_addsubv2sf3 */
    case 655:  /* sse3_addsubv2df3 */
    case 596:  /* sse3_addsubv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 677:  /* *sse2_cvtpd2dq */
    case 581:  /* sse_vmrsqrtv4sf2 */
    case 579:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 654:  /* sse2_vmsminv2df3 */
    case 653:  /* *sse2_vmsminv2df3_finite */
    case 650:  /* sse2_vmsmaxv2df3 */
    case 649:  /* *sse2_vmsmaxv2df3_finite */
    case 644:  /* sse2_vmdivv2df3 */
    case 642:  /* sse2_vmmulv2df3 */
    case 640:  /* sse2_vmsubv2df3 */
    case 638:  /* sse2_vmaddv2df3 */
    case 591:  /* sse_vmsminv4sf3 */
    case 590:  /* *sse_vmsminv4sf3_finite */
    case 587:  /* sse_vmsmaxv4sf3 */
    case 586:  /* *sse_vmsmaxv4sf3_finite */
    case 577:  /* sse_vmdivv4sf3 */
    case 575:  /* sse_vmmulv4sf3 */
    case 573:  /* sse_vmsubv4sf3 */
    case 571:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 555:  /* stack_tls_protect_test_si */
    case 554:  /* stack_protect_test_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 550:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 868:  /* mmx_nandv2si3 */
    case 867:  /* mmx_nandv4hi3 */
    case 866:  /* mmx_nandv8qi3 */
    case 744:  /* sse2_nandv2di3 */
    case 743:  /* sse2_nandv4si3 */
    case 742:  /* sse2_nandv8hi3 */
    case 741:  /* sse2_nandv16qi3 */
    case 689:  /* sse2_loadhpd */
    case 681:  /* *sse2_cvtpd2ps */
    case 678:  /* *sse2_cvttpd2dq */
    case 667:  /* *nanddf3 */
    case 663:  /* sse2_nandv2df3 */
    case 646:  /* sse2_vmsqrtv2df2 */
    case 628:  /* sse_loadhps */
    case 608:  /* *nandsf3 */
    case 604:  /* sse_nandv4sf3 */
    case 583:  /* sse_vmsqrtv4sf2 */
    case 548:  /* *sibcall_value_1 */
    case 547:  /* *call_value_1 */
    case 546:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 545:  /* *call_value_pop_1 */
    case 544:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 543:  /* allocate_stack_worker_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 895:  /* mmx_psadbw */
    case 807:  /* mmx_rsqit1v2sf3 */
    case 805:  /* mmx_rcpit2v2sf3 */
    case 804:  /* mmx_rcpit1v2sf3 */
    case 780:  /* sse2_psadbw */
    case 595:  /* *ieee_smaxv2df3 */
    case 594:  /* *ieee_sminv2df3 */
    case 593:  /* *ieee_smaxv4sf3 */
    case 592:  /* *ieee_sminv4sf3 */
    case 541:  /* *ieee_smaxdf3 */
    case 540:  /* *ieee_smindf3 */
    case 539:  /* *ieee_smaxsf3 */
    case 538:  /* *ieee_sminsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 890:  /* *mmx_concatv2si */
    case 874:  /* mmx_xorv2si3 */
    case 873:  /* mmx_xorv4hi3 */
    case 872:  /* mmx_xorv8qi3 */
    case 871:  /* mmx_iorv2si3 */
    case 870:  /* mmx_iorv4hi3 */
    case 869:  /* mmx_iorv8qi3 */
    case 865:  /* mmx_andv2si3 */
    case 864:  /* mmx_andv4hi3 */
    case 863:  /* mmx_andv8qi3 */
    case 862:  /* mmx_gtv2si3 */
    case 861:  /* mmx_gtv4hi3 */
    case 860:  /* mmx_gtv8qi3 */
    case 859:  /* mmx_eqv2si3 */
    case 858:  /* mmx_eqv4hi3 */
    case 857:  /* mmx_eqv8qi3 */
    case 855:  /* mmx_ashlv2si3 */
    case 854:  /* mmx_ashlv4hi3 */
    case 852:  /* mmx_lshrv2si3 */
    case 851:  /* mmx_lshrv4hi3 */
    case 850:  /* mmx_ashrv2si3 */
    case 849:  /* mmx_ashrv4hi3 */
    case 848:  /* mmx_sminv4hi3 */
    case 847:  /* mmx_uminv8qi3 */
    case 846:  /* mmx_smaxv4hi3 */
    case 845:  /* mmx_umaxv8qi3 */
    case 839:  /* mmx_mulv4hi3 */
    case 838:  /* mmx_ussubv4hi3 */
    case 837:  /* mmx_ussubv8qi3 */
    case 836:  /* mmx_sssubv4hi3 */
    case 835:  /* mmx_sssubv8qi3 */
    case 833:  /* mmx_subv2si3 */
    case 832:  /* mmx_subv4hi3 */
    case 831:  /* mmx_subv8qi3 */
    case 830:  /* mmx_usaddv4hi3 */
    case 829:  /* mmx_usaddv8qi3 */
    case 828:  /* mmx_ssaddv4hi3 */
    case 827:  /* mmx_ssaddv8qi3 */
    case 825:  /* mmx_addv2si3 */
    case 824:  /* mmx_addv4hi3 */
    case 823:  /* mmx_addv8qi3 */
    case 820:  /* *mmx_concatv2sf */
    case 813:  /* mmx_eqv2sf3 */
    case 812:  /* mmx_gev2sf3 */
    case 811:  /* mmx_gtv2sf3 */
    case 802:  /* mmx_sminv2sf3 */
    case 801:  /* mmx_smaxv2sf3 */
    case 800:  /* mmx_mulv2sf3 */
    case 799:  /* mmx_subv2sf3 */
    case 798:  /* mmx_addv2sf3 */
    case 777:  /* *vec_concatv2di */
    case 776:  /* *vec_concatv4si_1 */
    case 775:  /* *sse1_concatv2si */
    case 774:  /* *sse2_concatv2si */
    case 752:  /* *xorv2di3 */
    case 751:  /* *xorv4si3 */
    case 750:  /* *xorv8hi3 */
    case 749:  /* *xorv16qi3 */
    case 748:  /* *iorv2di3 */
    case 747:  /* *iorv4si3 */
    case 746:  /* *iorv8hi3 */
    case 745:  /* *iorv16qi3 */
    case 740:  /* *andv2di3 */
    case 739:  /* *andv4si3 */
    case 738:  /* *andv8hi3 */
    case 737:  /* *andv16qi3 */
    case 736:  /* sse2_gtv4si3 */
    case 735:  /* sse2_gtv8hi3 */
    case 734:  /* sse2_gtv16qi3 */
    case 733:  /* sse2_eqv4si3 */
    case 732:  /* sse2_eqv8hi3 */
    case 731:  /* sse2_eqv16qi3 */
    case 730:  /* *sminv8hi3 */
    case 729:  /* *uminv16qi3 */
    case 728:  /* *smaxv8hi3 */
    case 727:  /* *umaxv16qi3 */
    case 726:  /* sse2_lshrti3 */
    case 725:  /* sse2_ashlti3 */
    case 724:  /* ashlv2di3 */
    case 723:  /* ashlv4si3 */
    case 722:  /* ashlv8hi3 */
    case 721:  /* lshrv2di3 */
    case 720:  /* lshrv4si3 */
    case 719:  /* lshrv8hi3 */
    case 718:  /* ashrv4si3 */
    case 717:  /* ashrv8hi3 */
    case 712:  /* *mulv8hi3 */
    case 711:  /* sse2_ussubv8hi3 */
    case 710:  /* sse2_ussubv16qi3 */
    case 709:  /* sse2_sssubv8hi3 */
    case 708:  /* sse2_sssubv16qi3 */
    case 707:  /* *subv2di3 */
    case 706:  /* *subv4si3 */
    case 705:  /* *subv8hi3 */
    case 704:  /* *subv16qi3 */
    case 703:  /* sse2_usaddv8hi3 */
    case 702:  /* sse2_usaddv16qi3 */
    case 701:  /* sse2_ssaddv8hi3 */
    case 700:  /* sse2_ssaddv16qi3 */
    case 699:  /* *addv2di3 */
    case 698:  /* *addv4si3 */
    case 697:  /* *addv8hi3 */
    case 696:  /* *addv16qi3 */
    case 695:  /* *vec_concatv2df */
    case 669:  /* *xordf3 */
    case 668:  /* *iordf3 */
    case 666:  /* *anddf3 */
    case 665:  /* *xorv2df3 */
    case 664:  /* *iorv2df3 */
    case 662:  /* *andv2df3 */
    case 652:  /* *sminv2df3 */
    case 651:  /* *sminv2df3_finite */
    case 648:  /* *smaxv2df3 */
    case 647:  /* *smaxv2df3_finite */
    case 643:  /* *divv2df3 */
    case 641:  /* *mulv2df3 */
    case 639:  /* *subv2df3 */
    case 637:  /* *addv2df3 */
    case 634:  /* *sse_concatv4sf */
    case 633:  /* *sse_concatv2sf */
    case 610:  /* *xorsf3 */
    case 609:  /* *iorsf3 */
    case 607:  /* *andsf3 */
    case 606:  /* *xorv4sf3 */
    case 605:  /* *iorv4sf3 */
    case 603:  /* *andv4sf3 */
    case 589:  /* *sminv4sf3 */
    case 588:  /* *sminv4sf3_finite */
    case 585:  /* *smaxv4sf3 */
    case 584:  /* *smaxv4sf3_finite */
    case 576:  /* *divv4sf3 */
    case 574:  /* *mulv4sf3 */
    case 572:  /* *subv4sf3 */
    case 570:  /* *addv4sf3 */
    case 537:  /* smaxdf3 */
    case 536:  /* smindf3 */
    case 535:  /* smaxsf3 */
    case 534:  /* sminsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 530:  /* *movqicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 533:  /* *movxfcc_1 */
    case 532:  /* *movdfcc_1 */
    case 531:  /* *movsfcc_1_387 */
    case 529:  /* *movhicc_noc */
    case 528:  /* *movsicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 526:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 525:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 524:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 523:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 522:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 521:  /* *strsetqi_1 */
    case 520:  /* *strsethi_1 */
    case 519:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 518:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 517:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 516:  /* *strmovqi_1 */
    case 515:  /* *strmovhi_1 */
    case 514:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 504:  /* fistdi2_ceil_with_temp */
    case 493:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 508:  /* fistsi2_ceil_with_temp */
    case 507:  /* fisthi2_ceil_with_temp */
    case 503:  /* fistdi2_ceil */
    case 497:  /* fistsi2_floor_with_temp */
    case 496:  /* fisthi2_floor_with_temp */
    case 492:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 511:  /* frndintxf2_mask_pm */
    case 509:  /* frndintxf2_trunc */
    case 502:  /* *fistdi2_ceil_1 */
    case 501:  /* *fistsi2_ceil_1 */
    case 500:  /* *fisthi2_ceil_1 */
    case 498:  /* frndintxf2_ceil */
    case 491:  /* *fistdi2_floor_1 */
    case 490:  /* *fistsi2_floor_1 */
    case 489:  /* *fisthi2_floor_1 */
    case 487:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 512:  /* frndintxf2_mask_pm_i387 */
    case 510:  /* frndintxf2_trunc_i387 */
    case 506:  /* fistsi2_ceil */
    case 505:  /* fisthi2_ceil */
    case 499:  /* frndintxf2_ceil_i387 */
    case 495:  /* fistsi2_floor */
    case 494:  /* fisthi2_floor */
    case 488:  /* frndintxf2_floor_i387 */
    case 480:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 553:  /* stack_tls_protect_set_si */
    case 552:  /* stack_protect_set_si */
    case 486:  /* fistsi2_with_temp */
    case 485:  /* fisthi2_with_temp */
    case 479:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 473:  /* fyl2xp1_xf3 */
    case 472:  /* fyl2x_xf3 */
    case 471:  /* atan2xf3_1 */
    case 470:  /* atan2sf3_1 */
    case 469:  /* atan2df3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 464:  /* *sincosextendsfdf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 474:  /* *fxtractxf3 */
    case 468:  /* *tanxf3_1 */
    case 467:  /* *tansf3_1 */
    case 466:  /* *tandf3_1 */
    case 465:  /* sincosxf3 */
    case 463:  /* sincossf3 */
    case 462:  /* sincosdf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 674:  /* sse2_cvtsd2si */
    case 615:  /* sse_cvtss2si */
    case 460:  /* *cosextendsfdf2 */
    case 456:  /* *sinextendsfdf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 896:  /* mmx_pmovmskb */
    case 806:  /* mmx_rsqrtv2sf2 */
    case 803:  /* mmx_rcpv2sf2 */
    case 797:  /* sse_movntdi */
    case 783:  /* sse2_pmovmskb */
    case 782:  /* sse2_movmskpd */
    case 781:  /* sse_movmskps */
    case 671:  /* sse2_cvtpd2pi */
    case 618:  /* sse2_cvtps2dq */
    case 580:  /* sse_rsqrtv4sf2 */
    case 578:  /* sse_rcpv4sf2 */
    case 569:  /* sse3_lddqu */
    case 568:  /* sse2_movntsi */
    case 567:  /* sse2_movntv2di */
    case 566:  /* sse2_movntv2df */
    case 565:  /* sse_movntv4sf */
    case 564:  /* sse2_movdqu */
    case 563:  /* sse2_movupd */
    case 562:  /* sse_movups */
    case 484:  /* fistsi2 */
    case 483:  /* fisthi2 */
    case 482:  /* *fistsi2_1 */
    case 481:  /* *fisthi2_1 */
    case 478:  /* *fistdi2_1 */
    case 477:  /* frndintxf2 */
    case 475:  /* *f2xm1xf2 */
    case 461:  /* *cosxf2 */
    case 459:  /* *cossf2 */
    case 458:  /* *cosdf2 */
    case 457:  /* *sinxf2 */
    case 455:  /* *sinsf2 */
    case 454:  /* *sindf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 476:  /* *fscalexf4 */
    case 453:  /* fprem1xf4 */
    case 452:  /* fpremxf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 441:  /* *fop_xf_6_i387 */
    case 432:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 440:  /* *fop_xf_5_i387 */
    case 438:  /* *fop_xf_3si_i387 */
    case 437:  /* *fop_xf_3hi_i387 */
    case 431:  /* *fop_df_5_i387 */
    case 429:  /* *fop_df_3si_i387 */
    case 428:  /* *fop_df_3hi_i387 */
    case 419:  /* *fop_sf_3si_i387 */
    case 418:  /* *fop_sf_3hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 439:  /* *fop_xf_4_i387 */
    case 436:  /* *fop_xf_2si_i387 */
    case 435:  /* *fop_xf_2hi_i387 */
    case 430:  /* *fop_df_4_i387 */
    case 427:  /* *fop_df_2si_i387 */
    case 426:  /* *fop_df_2hi_i387 */
    case 417:  /* *fop_sf_2si_i387 */
    case 416:  /* *fop_sf_2hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 658:  /* sse2_maskcmpv2df3 */
    case 599:  /* sse_maskcmpv4sf3 */
    case 434:  /* *fop_xf_1_i387 */
    case 433:  /* *fop_xf_comm_i387 */
    case 425:  /* *fop_df_1_i387 */
    case 424:  /* *fop_df_1_sse */
    case 423:  /* *fop_df_1_mixed */
    case 422:  /* *fop_df_comm_i387 */
    case 421:  /* *fop_df_comm_sse */
    case 420:  /* *fop_df_comm_mixed */
    case 415:  /* *fop_sf_1_i387 */
    case 414:  /* *fop_sf_1_sse */
    case 413:  /* *fop_sf_1_mixed */
    case 412:  /* *fop_sf_comm_i387 */
    case 411:  /* *fop_sf_comm_sse */
    case 410:  /* *fop_sf_comm_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 409:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 407:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 406:  /* *tls_local_dynamic_base_32_sun */
    case 405:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 404:  /* *tls_global_dynamic_32_sun */
    case 403:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 402:  /* *bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 400:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 392:  /* return_indirect_internal */
    case 391:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 899:  /* mmx_femms */
    case 898:  /* mmx_emms */
    case 549:  /* trap */
    case 513:  /* cld */
    case 397:  /* leave */
    case 393:  /* nop */
    case 390:  /* return_internal_long */
    case 389:  /* return_internal */
      break;

    case 788:  /* sse2_clflush */
    case 785:  /* sse_ldmxcsr */
    case 394:  /* align */
    case 388:  /* blockage */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 384:  /* *call_pop_1 */
    case 383:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 382:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 381:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 380:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 379:  /* *fp_jcc_8si_387 */
    case 378:  /* *fp_jcc_8hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 376:  /* *fp_jcc_6_387 */
    case 374:  /* *fp_jcc_4_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 377:  /* *fp_jcc_7_387 */
    case 375:  /* *fp_jcc_5_387 */
    case 373:  /* *fp_jcc_3_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 372:  /* *fp_jcc_2_387 */
    case 371:  /* *fp_jcc_2_sse */
    case 370:  /* *fp_jcc_2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 369:  /* *fp_jcc_1_387 */
    case 368:  /* *fp_jcc_1_sse */
    case 367:  /* *fp_jcc_1_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 366:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 365:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 364:  /* *sse_setccdf */
    case 363:  /* *sse_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 352:  /* ix86_rotrdi3 */
    case 343:  /* ix86_rotldi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 300:  /* x86_shrd_1 */
    case 287:  /* x86_shld_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 266:  /* copysigndf3_var */
    case 261:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 265:  /* copysigndf3_const */
    case 260:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 267:  /* *absnegxf2_i387 */
    case 264:  /* *absnegdf2_i387 */
    case 263:  /* *absnegdf2_sse */
    case 262:  /* *absnegdf2_mixed */
    case 259:  /* *absnegsf2_i387 */
    case 258:  /* *absnegsf2_sse */
    case 257:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 285:  /* *one_cmplqi2_2 */
    case 283:  /* *one_cmplhi2_2 */
    case 281:  /* *one_cmplsi2_2 */
    case 256:  /* *negqi2_cmpz */
    case 254:  /* *neghi2_cmpz */
    case 252:  /* *negsi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 249:  /* *xorqi_cc_ext_1 */
    case 218:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 247:  /* *xorqi_2_slp */
    case 230:  /* *iorqi_2_slp */
    case 216:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 207:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 206:  /* *testqi_ext_2 */
    case 205:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 204:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 198:  /* *udivmodsi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 197:  /* udivmodsi4 */
    case 196:  /* divmodhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 199:  /* *udivmodhi_noext */
    case 195:  /* *divmodsi_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 194:  /* *divmodsi4_cltd */
    case 193:  /* *divmodsi4_nocltd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 190:  /* *smulsi3_highpart_insn */
    case 189:  /* *umulsi3_highpart_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 188:  /* *mulsidi3_insn */
    case 187:  /* *umulsidi3_insn */
    case 186:  /* *mulqihi3_insn */
    case 185:  /* *umulqihi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 181:  /* *subqi_3 */
    case 177:  /* *subhi_3 */
    case 174:  /* *subsi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 171:  /* subsi3_carry */
    case 170:  /* subhi3_carry */
    case 169:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 245:  /* *xorqi_ext_2 */
    case 244:  /* *xorqi_ext_1 */
    case 234:  /* *iorqi_ext_2 */
    case 233:  /* *iorqi_ext_1 */
    case 220:  /* *andqi_ext_2 */
    case 219:  /* *andqi_ext_1 */
    case 167:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 243:  /* xorqi_ext_0 */
    case 232:  /* iorqi_ext_0 */
    case 217:  /* andqi_ext_0 */
    case 166:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 360:  /* *rotrqi3_1_slp */
    case 358:  /* *rotrqi3_1_one_bit_slp */
    case 350:  /* *rotlqi3_1_slp */
    case 348:  /* *rotlqi3_1_one_bit_slp */
    case 338:  /* *lshrqi3_1_slp */
    case 336:  /* *lshrqi3_1_one_bit_slp */
    case 317:  /* *ashrqi3_1_slp */
    case 315:  /* *ashrqi3_1_one_bit_slp */
    case 242:  /* *xorqi_1_slp */
    case 228:  /* *iorqi_1_slp */
    case 213:  /* *andqi_1_slp */
    case 179:  /* *subqi_1_slp */
    case 161:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 342:  /* *lshrqi2_cconly */
    case 340:  /* *lshrqi2_one_bit_cconly */
    case 334:  /* *lshrhi3_cconly */
    case 332:  /* *lshrhi3_one_bit_cconly */
    case 328:  /* *lshrsi3_cconly */
    case 326:  /* *lshrsi3_one_bit_cconly */
    case 321:  /* *ashrqi3_cconly */
    case 319:  /* *ashrqi3_one_bit_cconly */
    case 313:  /* *ashrhi3_cconly */
    case 311:  /* *ashrhi3_one_bit_cconly */
    case 307:  /* *ashrsi3_cconly */
    case 305:  /* *ashrsi3_one_bit_cconly */
    case 298:  /* *ashlqi3_cconly */
    case 294:  /* *ashlhi3_cconly */
    case 290:  /* *ashlsi3_cconly */
    case 248:  /* *xorqi_cc_2 */
    case 240:  /* *xorhi_3 */
    case 237:  /* *xorsi_3 */
    case 231:  /* *iorqi_3 */
    case 226:  /* *iorhi_3 */
    case 223:  /* *iorsi_3 */
    case 165:  /* *addqi_5 */
    case 158:  /* *addhi_5 */
    case 152:  /* *addsi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 164:  /* *addqi_4 */
    case 157:  /* *addhi_4 */
    case 151:  /* *addsi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 163:  /* *addqi_3 */
    case 156:  /* *addhi_3 */
    case 150:  /* *addsi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 341:  /* *lshrqi2_cmp */
    case 339:  /* *lshrqi2_one_bit_cmp */
    case 333:  /* *lshrhi3_cmp */
    case 331:  /* *lshrhi3_one_bit_cmp */
    case 327:  /* *lshrsi3_cmp */
    case 325:  /* *lshrsi3_one_bit_cmp */
    case 320:  /* *ashrqi3_cmp */
    case 318:  /* *ashrqi3_one_bit_cmp */
    case 312:  /* *ashrhi3_cmp */
    case 310:  /* *ashrhi3_one_bit_cmp */
    case 306:  /* *ashrsi3_cmp */
    case 304:  /* *ashrsi3_one_bit_cmp */
    case 297:  /* *ashlqi3_cmp */
    case 293:  /* *ashlhi3_cmp */
    case 289:  /* *ashlsi3_cmp */
    case 246:  /* *xorqi_cc_1 */
    case 239:  /* *xorhi_2 */
    case 236:  /* *xorsi_2 */
    case 229:  /* *iorqi_2 */
    case 225:  /* *iorhi_2 */
    case 222:  /* *iorsi_2 */
    case 215:  /* *andqi_2 */
    case 214:  /* *andqi_2_maybe_si */
    case 211:  /* *andhi_2 */
    case 209:  /* *andsi_2 */
    case 180:  /* *subqi_2 */
    case 176:  /* *subhi_2 */
    case 173:  /* *subsi_2 */
    case 162:  /* *addqi_2 */
    case 155:  /* *addhi_2 */
    case 149:  /* *addsi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 147:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 146:  /* *lea_general_2 */
    case 145:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 143:  /* addqi3_cc */
    case 142:  /* *addsi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 141:  /* addsi3_carry */
    case 140:  /* addhi3_carry */
    case 139:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 542:  /* pro_epilogue_adjust_stack_1 */
    case 359:  /* *rotrqi3_1 */
    case 357:  /* *rotrqi3_1_one_bit */
    case 356:  /* *rotrhi3 */
    case 355:  /* *rotrhi3_one_bit */
    case 354:  /* *rotrsi3_1 */
    case 353:  /* *rotrsi3_1_one_bit */
    case 351:  /* *rotlqi3_1 */
    case 349:  /* *rotlqi3_1_one_bit */
    case 347:  /* *rotlhi3_1 */
    case 346:  /* *rotlhi3_1_one_bit */
    case 345:  /* *rotlsi3_1 */
    case 344:  /* *rotlsi3_1_one_bit */
    case 337:  /* *lshrqi3_1 */
    case 335:  /* *lshrqi3_1_one_bit */
    case 330:  /* *lshrhi3_1 */
    case 329:  /* *lshrhi3_1_one_bit */
    case 324:  /* *lshrsi3_1 */
    case 323:  /* *lshrsi3_1_one_bit */
    case 322:  /* *lshrdi3_1 */
    case 316:  /* *ashrqi3_1 */
    case 314:  /* *ashrqi3_1_one_bit */
    case 309:  /* *ashrhi3_1 */
    case 308:  /* *ashrhi3_1_one_bit */
    case 303:  /* *ashrsi3_1 */
    case 302:  /* *ashrsi3_1_one_bit */
    case 301:  /* ashrsi3_31 */
    case 299:  /* *ashrdi3_1 */
    case 296:  /* *ashlqi3_1 */
    case 295:  /* *ashlqi3_1_lea */
    case 292:  /* *ashlhi3_1 */
    case 291:  /* *ashlhi3_1_lea */
    case 288:  /* *ashlsi3_1 */
    case 286:  /* *ashldi3_1 */
    case 241:  /* *xorqi_1 */
    case 238:  /* *xorhi_1 */
    case 235:  /* *xorsi_1 */
    case 227:  /* *iorqi_1 */
    case 224:  /* *iorhi_1 */
    case 221:  /* *iorsi_1 */
    case 212:  /* *andqi_1 */
    case 210:  /* *andhi_1 */
    case 208:  /* *andsi_1 */
    case 192:  /* udivqi3 */
    case 191:  /* divqi3 */
    case 184:  /* *mulqi3_1 */
    case 183:  /* *mulhi3_1 */
    case 182:  /* *mulsi3_1 */
    case 178:  /* *subqi_1 */
    case 175:  /* *subhi_1 */
    case 172:  /* *subsi_1 */
    case 168:  /* *subdi3_1 */
    case 160:  /* *addqi_1 */
    case 159:  /* *addqi_1_lea */
    case 154:  /* *addhi_1 */
    case 153:  /* *addhi_1_lea */
    case 148:  /* *addsi_1 */
    case 138:  /* *adddi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 118:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 122:  /* fix_truncsi_i387_with_temp */
    case 121:  /* fix_trunchi_i387_with_temp */
    case 117:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 120:  /* fix_truncsi_i387 */
    case 119:  /* fix_trunchi_i387 */
    case 113:  /* fix_truncdi_i387_fisttp_with_temp */
    case 112:  /* fix_truncsi_i387_fisttp_with_temp */
    case 111:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 399:  /* *ffs_no_cmove */
    case 398:  /* *ffs_cmove */
    case 110:  /* fix_truncdi_i387_fisttp */
    case 109:  /* fix_truncsi_i387_fisttp */
    case 108:  /* fix_trunchi_i387_fisttp */
    case 101:  /* *truncxfdf2_i387 */
    case 99:  /* *truncxfdf2_mixed */
    case 97:  /* *truncxfsf2_i387 */
    case 95:  /* *truncxfsf2_mixed */
    case 93:  /* *truncdfsf_i387 */
    case 92:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 80:  /* *extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 527:  /* x86_movsicc_0_m1 */
    case 401:  /* ctzsi2 */
    case 255:  /* *negqi2_1 */
    case 253:  /* *neghi2_1 */
    case 251:  /* *negsi2_1 */
    case 250:  /* *negdi2_1 */
    case 116:  /* *fix_truncdi_i387_1 */
    case 115:  /* *fix_truncsi_i387_1 */
    case 114:  /* *fix_trunchi_i387_1 */
    case 79:  /* zero_extendsidi2_32 */
    case 77:  /* *zero_extendqisi2_movzbw_and */
    case 76:  /* *zero_extendqisi2_and */
    case 74:  /* *zero_extendqihi2_movzbw_and */
    case 73:  /* *zero_extendqihi2_and */
    case 71:  /* zero_extendhisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 54:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 888:  /* *vec_dupv4hi */
    case 682:  /* sse2_cvtps2pd */
    case 676:  /* sse2_cvtdq2pd */
    case 675:  /* sse2_cvttsd2si */
    case 616:  /* sse_cvttss2si */
    case 613:  /* sse_cvttps2pi */
    case 451:  /* *sqrtextenddfxf2_i387 */
    case 450:  /* *sqrtextendsfxf2_i387 */
    case 448:  /* *sqrtextendsfdf2_i387 */
    case 279:  /* *absextendsfxf2 */
    case 278:  /* *absextenddfxf2 */
    case 277:  /* *absextendsfdf2 */
    case 276:  /* *negextendsfxf2 */
    case 275:  /* *negextenddfxf2 */
    case 274:  /* *negextendsfdf2 */
    case 52:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 892:  /* *vec_extractv2si_1 */
    case 891:  /* *vec_extractv2si_0 */
    case 889:  /* *vec_dupv2si */
    case 887:  /* mmx_pswapdv2si2 */
    case 822:  /* *vec_extractv2sf_1 */
    case 821:  /* *vec_extractv2sf_0 */
    case 819:  /* *vec_dupv2sf */
    case 818:  /* mmx_pswapdv2sf2 */
    case 817:  /* mmx_floatv2si2 */
    case 814:  /* mmx_pf2id */
    case 773:  /* *vec_dupv2di */
    case 772:  /* *vec_dupv4si */
    case 771:  /* *sse2_storeq */
    case 770:  /* sse2_stored */
    case 693:  /* *vec_dupv2df */
    case 692:  /* *vec_dupv2df_sse3 */
    case 688:  /* sse2_storelpd */
    case 687:  /* sse2_storehpd */
    case 672:  /* sse2_cvttpd2pi */
    case 670:  /* sse2_cvtpi2pd */
    case 645:  /* sqrtv2df2 */
    case 636:  /* *vec_extractv4sf_0 */
    case 632:  /* *vec_dupv4sf */
    case 629:  /* sse_storelps */
    case 627:  /* sse_storehps */
    case 619:  /* sse2_cvttps2dq */
    case 617:  /* sse2_cvtdq2ps */
    case 582:  /* sqrtv4sf2 */
    case 449:  /* sqrtxf2 */
    case 447:  /* *sqrtdf2_i387 */
    case 446:  /* *sqrtdf2_sse */
    case 445:  /* *sqrtdf2_mixed */
    case 444:  /* *sqrtsf2_i387 */
    case 443:  /* *sqrtsf2_sse */
    case 442:  /* *sqrtsf2_mixed */
    case 284:  /* *one_cmplqi2_1 */
    case 282:  /* *one_cmplhi2_1 */
    case 280:  /* *one_cmplsi2_1 */
    case 273:  /* *absxf2_1 */
    case 272:  /* *absdf2_1 */
    case 271:  /* *abssf2_1 */
    case 270:  /* *negxf2_1 */
    case 269:  /* *negdf2_1 */
    case 268:  /* *negsf2_1 */
    case 137:  /* floatdixf2 */
    case 136:  /* floatsixf2 */
    case 135:  /* floathixf2 */
    case 134:  /* *floatdidf2_i387 */
    case 133:  /* *floatsidf2_i387 */
    case 132:  /* *floatsidf2_sse */
    case 131:  /* *floatsidf2_mixed */
    case 130:  /* *floathidf2_i387 */
    case 129:  /* *floatdisf2_i387 */
    case 128:  /* *floatsisf2_i387 */
    case 127:  /* *floatsisf2_sse */
    case 126:  /* *floatsisf2_mixed */
    case 125:  /* *floathisf2_i387 */
    case 107:  /* fix_truncdi_fisttp_i387_1 */
    case 106:  /* fix_truncsi_fisttp_i387_1 */
    case 105:  /* fix_trunchi_fisttp_i387_1 */
    case 104:  /* fix_truncdfsi_sse */
    case 103:  /* fix_truncsfsi_sse */
    case 102:  /* *truncxfdf2_i387_1 */
    case 100:  /* truncxfdf2_i387_noop */
    case 98:  /* *truncxfsf2_i387_1 */
    case 96:  /* truncxfsf2_i387_noop */
    case 94:  /* *truncdfsf2_i387_1 */
    case 91:  /* *truncdfsf_fast_i387 */
    case 90:  /* *truncdfsf_fast_sse */
    case 89:  /* *truncdfsf_fast_mixed */
    case 88:  /* *extenddfxf2_i387 */
    case 87:  /* *extendsfxf2_i387 */
    case 86:  /* *extendsfdf2_i387 */
    case 85:  /* *extendsfdf2_sse */
    case 84:  /* *extendsfdf2_mixed */
    case 83:  /* extendqisi2 */
    case 82:  /* extendqihi2 */
    case 81:  /* extendhisi2 */
    case 78:  /* *zero_extendqisi2_movzbw */
    case 75:  /* *zero_extendqihi2_movzbw */
    case 72:  /* *zero_extendhisi2_movzwl */
    case 51:  /* *movsi_extzv_1 */
    case 50:  /* *movqi_extv_1 */
    case 49:  /* *movhi_extv_1 */
    case 48:  /* *movsi_extv_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 47:  /* *movstrictqi_xor */
    case 41:  /* *movstricthi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 387:  /* *sibcall_1 */
    case 386:  /* *call_1 */
    case 385:  /* *call_0 */
    case 362:  /* *setcc_2 */
    case 53:  /* movsi_insv_1 */
    case 46:  /* *movstrictqi_1 */
    case 40:  /* *movstricthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 70:  /* swapxf */
    case 65:  /* *swapdf */
    case 60:  /* *swapsf */
    case 45:  /* *swapqi_2 */
    case 44:  /* *swapqi_1 */
    case 39:  /* *swaphi_2 */
    case 38:  /* *swaphi_1 */
    case 35:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 395:  /* set_got */
    case 31:  /* popsi1 */
    case 30:  /* *popsi1_epilogue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 33:  /* *movsi_or */
    case 32:  /* *movsi_xor */
    case 29:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 796:  /* *movv2sf_internal */
    case 795:  /* *movv2si_internal */
    case 794:  /* *movv4hi_internal */
    case 793:  /* *movv8qi_internal */
    case 561:  /* *movv2df_internal */
    case 560:  /* *movv4sf_internal */
    case 559:  /* *movv2di_internal */
    case 558:  /* *movv4si_internal */
    case 557:  /* *movv8hi_internal */
    case 556:  /* *movv16qi_internal */
    case 551:  /* *prefetch_3dnow */
    case 361:  /* *setcc_1 */
    case 144:  /* *lea_1 */
    case 69:  /* *movxf_integer */
    case 68:  /* *movxf_nointeger */
    case 67:  /* *pushxf_integer */
    case 66:  /* *pushxf_nointeger */
    case 64:  /* *movdf_integer */
    case 63:  /* *movdf_nointeger */
    case 62:  /* *pushdf_integer */
    case 61:  /* *pushdf_nointeger */
    case 59:  /* *movsf_1 */
    case 58:  /* *pushsf */
    case 57:  /* *movti_internal */
    case 56:  /* *movdi_2 */
    case 55:  /* *pushdi */
    case 43:  /* *movqi_1 */
    case 42:  /* *pushqi2 */
    case 37:  /* *movhi_1 */
    case 36:  /* *pushhi2 */
    case 34:  /* *movsi_1 */
    case 28:  /* *pushsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 396:  /* eh_return_si */
    case 124:  /* x86_fldcw_1 */
    case 21:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 786:  /* sse_stmxcsr */
    case 408:  /* *load_tp_si */
    case 123:  /* x86_fnstcw_1 */
    case 20:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 19:  /* *cmpfp_si */
    case 18:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 856:  /* mmx_ashldi3 */
    case 853:  /* mmx_lshrdi3 */
    case 834:  /* mmx_subdi3 */
    case 826:  /* mmx_adddi3 */
    case 17:  /* *cmpfp_u */
    case 16:  /* *cmpfp_xf */
    case 15:  /* *cmpfp_df */
    case 14:  /* *cmpfp_sf */
    case 13:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 12:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 11:  /* cmpqi_ext_3_insn */
    case 10:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 203:  /* *testqi_1 */
    case 202:  /* *testqi_1_maybe_si */
    case 201:  /* *testhi_1 */
    case 200:  /* testsi_1 */
    case 8:  /* *cmpqi_minus_1 */
    case 4:  /* *cmphi_minus_1 */
    case 1:  /* *cmpsi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 27:  /* *cmpfp_iu_387 */
    case 26:  /* *cmpfp_iu_sse */
    case 25:  /* *cmpfp_iu_mixed */
    case 24:  /* *cmpfp_i_i387 */
    case 23:  /* *cmpfp_i_sse */
    case 22:  /* *cmpfp_i_mixed */
    case 7:  /* *cmpqi_1 */
    case 6:  /* *cmpqi_ccno_1 */
    case 5:  /* *cmphi_1 */
    case 3:  /* *cmphi_ccno_1 */
    case 2:  /* *cmpsi_1_insn */
    case 0:  /* *cmpsi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    default:
      gcc_unreachable ();
    }
}
