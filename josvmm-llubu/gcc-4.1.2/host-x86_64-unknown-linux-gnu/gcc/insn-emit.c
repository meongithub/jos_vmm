/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "ggc.h"

#include "basic-block.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* ../.././gcc/config/i386/i386.md:745 */
rtx
gen_cmpqi_ext_3_insn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	0),
	operand1));
}

/* ../.././gcc/config/i386/i386.md:939 */
rtx
gen_x86_fnstsw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (CCFPmode,
	18)),
	21));
}

/* ../.././gcc/config/i386/i386.md:951 */
rtx
gen_x86_sahf_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand0),
	22));
}

/* ../.././gcc/config/i386/i386.md:1116 */
rtx
gen_popsi1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)]))));
}

/* ../.././gcc/config/i386/i386.md:1772 */
rtx
gen_movsi_insv_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1);
}

/* ../.././gcc/config/i386/i386.md:2889 */
rtx
gen_swapxf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand0)));
}

/* ../.././gcc/config/i386/i386.md:2980 */
rtx
gen_zero_extendhisi2_and (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:3159 */
rtx
gen_zero_extendsidi2_32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:3353 */
rtx
gen_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:3406 */
rtx
gen_extendqihi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:3432 */
rtx
gen_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:3859 */
rtx
gen_truncxfsf2_i387_noop (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:3957 */
rtx
gen_truncxfdf2_i387_noop (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4126 */
rtx
gen_fix_truncsfsi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4135 */
rtx
gen_fix_truncdfsi_sse (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4163 */
rtx
gen_fix_trunchi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4163 */
rtx
gen_fix_truncsi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4163 */
rtx
gen_fix_truncdi_fisttp_i387_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4190 */
rtx
gen_fix_trunchi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:4190 */
rtx
gen_fix_truncsi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:4190 */
rtx
gen_fix_truncdi_i387_fisttp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:4203 */
rtx
gen_fix_trunchi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:4203 */
rtx
gen_fix_truncsi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:4203 */
rtx
gen_fix_truncdi_i387_fisttp_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:4276 */
rtx
gen_fix_truncdi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:4290 */
rtx
gen_fix_truncdi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:4334 */
rtx
gen_fix_trunchi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:4334 */
rtx
gen_fix_truncsi_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:4347 */
rtx
gen_fix_trunchi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* ../.././gcc/config/i386/i386.md:4347 */
rtx
gen_fix_truncsi_i387_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* ../.././gcc/config/i386/i386.md:4386 */
rtx
gen_x86_fnstcw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (HImode,
	18)),
	23));
}

/* ../.././gcc/config/i386/i386.md:4395 */
rtx
gen_x86_fldcw_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	18),
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand0),
	25));
}

/* ../.././gcc/config/i386/i386.md:4632 */
rtx
gen_floathixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4644 */
rtx
gen_floatsixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4656 */
rtx
gen_floatdixf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4806 */
rtx
gen_addqi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	gen_rtx_PLUS (QImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:4818 */
rtx
gen_addhi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	gen_rtx_PLUS (HImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:4830 */
rtx
gen_addsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:4867 */
rtx
gen_addqi3_cc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
}

/* ../.././gcc/config/i386/i386.md:6325 */
rtx
gen_addqi_ext_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:6559 */
rtx
gen_subqi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	gen_rtx_PLUS (QImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:6571 */
rtx
gen_subhi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	gen_rtx_PLUS (HImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:6583 */
rtx
gen_subsi3_carry (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7320 */
rtx
gen_divqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7330 */
rtx
gen_udivqi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7530 */
rtx
gen_divmodhi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7586 */
rtx
gen_udivmodsi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7697 */
rtx
gen_testsi_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

/* ../.././gcc/config/i386/i386.md:8326 */
rtx
gen_andqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:8732 */
rtx
gen_iorqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_IOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:9070 */
rtx
gen_xorqi_ext_0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:9555 */
rtx
gen_copysignsf3_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../.././gcc/config/i386/i386.md:9571 */
rtx
gen_copysignsf3_var (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	50)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode))));
}

/* ../.././gcc/config/i386/i386.md:9651 */
rtx
gen_copysigndf3_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	50));
}

/* ../.././gcc/config/i386/i386.md:9667 */
rtx
gen_copysigndf3_var (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5),
	50)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V2DFmode))));
}

/* ../.././gcc/config/i386/i386.md:10464 */
rtx
gen_x86_shld_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand0,
	operand2),
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:11354 */
rtx
gen_x86_shrd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	operand0,
	operand2),
	gen_rtx_ASHIFT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	operand2)))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:11398 */
rtx
gen_ashrsi3_31 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:12397 */
rtx
gen_ix86_rotldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../.././gcc/config/i386/i386.md:12621 */
rtx
gen_ix86_rotrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../.././gcc/config/i386/i386.md:13783 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* ../.././gcc/config/i386/i386.md:14128 */
rtx
gen_blockage (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	0);
}

/* ../.././gcc/config/i386/i386.md:14150 */
rtx
gen_return_internal (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* ../.././gcc/config/i386/i386.md:14161 */
rtx
gen_return_internal_long (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	26)));
}

/* ../.././gcc/config/i386/i386.md:14171 */
rtx
gen_return_pop_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* ../.././gcc/config/i386/i386.md:14180 */
rtx
gen_return_indirect_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

/* ../.././gcc/config/i386/i386.md:14188 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* ../.././gcc/config/i386/i386.md:14200 */
rtx
gen_align (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	7);
}

/* ../.././gcc/config/i386/i386.md:14221 */
rtx
gen_set_got (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	12)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:14270 */
rtx
gen_eh_return_si (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		operand0),
	27));
}

/* ../.././gcc/config/i386/i386.md:14290 */
rtx
gen_leave (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	6),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	6),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	6))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* ../.././gcc/config/i386/i386.md:14406 */
rtx
gen_ctzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:15283 */
rtx
gen_sqrtxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (XFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:15313 */
rtx
gen_fpremxf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	88)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	89)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		const0_rtx),
	38))));
}

/* ../.././gcc/config/i386/i386.md:15398 */
rtx
gen_fprem1xf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	90)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	91)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_UNSPEC (CCFPmode,
	gen_rtvec (1,
		const0_rtx),
	38))));
}

/* ../.././gcc/config/i386/i386.md:15571 */
rtx
gen_sincosdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* ../.././gcc/config/i386/i386.md:15606 */
rtx
gen_sincossf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* ../.././gcc/config/i386/i386.md:15684 */
rtx
gen_sincosxf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	80)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	81))));
}

/* ../.././gcc/config/i386/i386.md:15848 */
rtx
gen_atan2df3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* ../.././gcc/config/i386/i386.md:15889 */
rtx
gen_atan2sf3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode))));
}

/* ../.././gcc/config/i386/i386.md:15930 */
rtx
gen_atan2xf3_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:16106 */
rtx
gen_fyl2x_xf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:16292 */
rtx
gen_fyl2xp1_xf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	64)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:16867 */
rtx
gen_frndintxf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	65));
}

/* ../.././gcc/config/i386/i386.md:16945 */
rtx
gen_fistdi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:16956 */
rtx
gen_fistdi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:17010 */
rtx
gen_fisthi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* ../.././gcc/config/i386/i386.md:17010 */
rtx
gen_fistsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* ../.././gcc/config/i386/i386.md:17020 */
rtx
gen_fisthi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* ../.././gcc/config/i386/i386.md:17020 */
rtx
gen_fistsi2_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* ../.././gcc/config/i386/i386.md:17062 */
rtx
gen_frndintxf2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	70)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17087 */
rtx
gen_frndintxf2_floor_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	70)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:17176 */
rtx
gen_fistdi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:17190 */
rtx
gen_fistdi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:17236 */
rtx
gen_fisthi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:17236 */
rtx
gen_fistsi2_floor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:17249 */
rtx
gen_fisthi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* ../.././gcc/config/i386/i386.md:17249 */
rtx
gen_fistsi2_floor_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* ../.././gcc/config/i386/i386.md:17303 */
rtx
gen_frndintxf2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	71)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17328 */
rtx
gen_frndintxf2_ceil_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	71)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:17417 */
rtx
gen_fistdi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:17431 */
rtx
gen_fistdi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode))));
}

/* ../.././gcc/config/i386/i386.md:17477 */
rtx
gen_fisthi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:17477 */
rtx
gen_fistsi2_ceil (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:17490 */
rtx
gen_fisthi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* ../.././gcc/config/i386/i386.md:17490 */
rtx
gen_fistsi2_ceil_with_temp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

/* ../.././gcc/config/i386/i386.md:17544 */
rtx
gen_frndintxf2_trunc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	72)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17569 */
rtx
gen_frndintxf2_trunc_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	72)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:17627 */
rtx
gen_frndintxf2_mask_pm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	73)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17652 */
rtx
gen_frndintxf2_mask_pm_i387 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	73)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

/* ../.././gcc/config/i386/i386.md:17713 */
rtx
gen_cld (void)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	19),
	const0_rtx);
}

/* ../.././gcc/config/i386/i386.md:18652 */
rtx
gen_x86_movsicc_0_m1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	constm1_rtx,
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:18843 */
rtx
gen_sminsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:18852 */
rtx
gen_smaxsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:18861 */
rtx
gen_smindf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (DFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:18870 */
rtx
gen_smaxdf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (DFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:18996 */
rtx
gen_pro_epilogue_adjust_stack_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

/* ../.././gcc/config/i386/i386.md:19126 */
rtx
gen_allocate_stack_worker_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:20367 */
rtx
gen_trap (void)
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	const_int_rtx[MAX_SAVED_CONST_INT + (6)]);
}

/* ../.././gcc/config/i386/i386.md:20543 */
rtx
gen_stack_protect_set_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	100)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:20561 */
rtx
gen_stack_tls_protect_set_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	102)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_SCRATCH (SImode),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:20607 */
rtx
gen_stack_protect_test_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	101)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../.././gcc/config/i386/i386.md:20627 */
rtx
gen_stack_tls_protect_test_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (CCZmode,
	gen_rtvec (2,
		operand1,
		operand2),
	103)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* ../.././gcc/config/i386/sse.md:215 */
rtx
gen_sse_movups (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* ../.././gcc/config/i386/sse.md:224 */
rtx
gen_sse2_movupd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	34));
}

/* ../.././gcc/config/i386/sse.md:233 */
rtx
gen_sse2_movdqu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	34));
}

/* ../.././gcc/config/i386/sse.md:242 */
rtx
gen_sse_movntv4sf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	33));
}

/* ../.././gcc/config/i386/sse.md:251 */
rtx
gen_sse2_movntv2df (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DFmode,
	gen_rtvec (1,
		operand1),
	33));
}

/* ../.././gcc/config/i386/sse.md:260 */
rtx
gen_sse2_movntv2di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* ../.././gcc/config/i386/sse.md:269 */
rtx
gen_sse2_movntsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* ../.././gcc/config/i386/sse.md:278 */
rtx
gen_sse3_lddqu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (1,
		operand1),
	47));
}

/* ../.././gcc/config/i386/sse.md:321 */
rtx
gen_sse_vmaddv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:349 */
rtx
gen_sse_vmsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:377 */
rtx
gen_sse_vmmulv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:405 */
rtx
gen_sse_vmdivv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:417 */
rtx
gen_sse_rcpv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	35));
}

/* ../.././gcc/config/i386/sse.md:426 */
rtx
gen_sse_vmrcpv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	35),
	operand2,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:438 */
rtx
gen_sse_rsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	36));
}

/* ../.././gcc/config/i386/sse.md:447 */
rtx
gen_sse_vmrsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	36),
	operand2,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:459 */
rtx
gen_sqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V4SFmode,
	operand1));
}

/* ../.././gcc/config/i386/sse.md:467 */
rtx
gen_sse_vmsqrtv4sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:525 */
rtx
gen_sse_vmsmaxv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:580 */
rtx
gen_sse_vmsminv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:638 */
rtx
gen_sse3_addsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (5)]));
}

/* ../.././gcc/config/i386/sse.md:651 */
rtx
gen_sse3_haddv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../.././gcc/config/i386/sse.md:677 */
rtx
gen_sse3_hsubv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))))),
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../.././gcc/config/i386/sse.md:743 */
rtx
gen_sse_maskcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4SFmode,
		operand1,
		operand2));
}

/* ../.././gcc/config/i386/sse.md:753 */
rtx
gen_sse_vmmaskcmpv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), V4SFmode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:766 */
rtx
gen_sse_comi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:780 */
rtx
gen_sse_ucomi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx_COMPARE (CCFPUmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:832 */
rtx
gen_sse_nandv4sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SFmode,
	gen_rtx_NOT (V4SFmode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/sse.md:920 */
rtx
gen_sse_cvtpi2ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (V2SFmode,
	operand2)),
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (3)]));
}

/* ../.././gcc/config/i386/sse.md:932 */
rtx
gen_sse_cvtps2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* ../.././gcc/config/i386/sse.md:944 */
rtx
gen_sse_cvttps2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* ../.././gcc/config/i386/sse.md:955 */
rtx
gen_sse_cvtsi2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:981 */
rtx
gen_sse_cvtss2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* ../.././gcc/config/i386/sse.md:1007 */
rtx
gen_sse_cvttss2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:1031 */
rtx
gen_sse2_cvtdq2ps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V4SFmode,
	operand1));
}

/* ../.././gcc/config/i386/sse.md:1039 */
rtx
gen_sse2_cvtps2dq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30));
}

/* ../.././gcc/config/i386/sse.md:1048 */
rtx
gen_sse2_cvttps2dq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V4SImode,
	operand1));
}

/* ../.././gcc/config/i386/sse.md:1062 */
rtx
gen_sse_movhlps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../.././gcc/config/i386/sse.md:1080 */
rtx
gen_sse_movlhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../.././gcc/config/i386/sse.md:1098 */
rtx
gen_sse_unpckhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../.././gcc/config/i386/sse.md:1111 */
rtx
gen_sse_unpcklps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../.././gcc/config/i386/sse.md:1126 */
rtx
gen_sse3_movshdup (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../.././gcc/config/i386/sse.md:1141 */
rtx
gen_sse3_movsldup (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))));
}

/* ../.././gcc/config/i386/sse.md:1172 */
rtx
gen_sse_shufps_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED,
	rtx operand6 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SFmode,
	gen_rtx_VEC_CONCAT (V8SFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand3,
		operand4,
		operand5,
		operand6))));
}

/* ../.././gcc/config/i386/sse.md:1196 */
rtx
gen_sse_storehps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../.././gcc/config/i386/sse.md:1209 */
rtx
gen_sse_loadhps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	operand2));
}

/* ../.././gcc/config/i386/sse.md:1224 */
rtx
gen_sse_storelps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

/* ../.././gcc/config/i386/sse.md:1237 */
rtx
gen_sse_loadlps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	operand2,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))));
}

/* ../.././gcc/config/i386/sse.md:1252 */
rtx
gen_sse_movss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1415 */
rtx
gen_sse2_vmaddv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1443 */
rtx
gen_sse2_vmsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1471 */
rtx
gen_sse2_vmmulv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1499 */
rtx
gen_sse2_vmdivv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1511 */
rtx
gen_sqrtv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V2DFmode,
	operand1));
}

/* ../.././gcc/config/i386/sse.md:1519 */
rtx
gen_sse2_vmsqrtv2df2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SQRT (V2DFmode,
	operand1),
	operand2,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1577 */
rtx
gen_sse2_vmsmaxv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1632 */
rtx
gen_sse2_vmsminv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1644 */
rtx
gen_sse3_addsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2),
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1657 */
rtx
gen_sse3_haddv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* ../.././gcc/config/i386/sse.md:1675 */
rtx
gen_sse3_hsubv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* ../.././gcc/config/i386/sse.md:1708 */
rtx
gen_sse2_maskcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), V2DFmode,
		operand1,
		operand2));
}

/* ../.././gcc/config/i386/sse.md:1718 */
rtx
gen_sse2_vmmaskcmpv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), V2DFmode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1731 */
rtx
gen_sse2_comi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:1745 */
rtx
gen_sse2_ucomi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx_COMPARE (CCFPUmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:1797 */
rtx
gen_sse2_nandv2df3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DFmode,
	gen_rtx_NOT (V2DFmode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/sse.md:1885 */
rtx
gen_sse2_cvtpi2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2DFmode,
	operand1));
}

/* ../.././gcc/config/i386/sse.md:1894 */
rtx
gen_sse2_cvtpd2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	30));
}

/* ../.././gcc/config/i386/sse.md:1904 */
rtx
gen_sse2_cvttpd2pi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* ../.././gcc/config/i386/sse.md:1913 */
rtx
gen_sse2_cvtsi2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_VEC_DUPLICATE (V2DFmode,
	gen_rtx_FLOAT (DFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:1939 */
rtx
gen_sse2_cvtsd2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	30));
}

/* ../.././gcc/config/i386/sse.md:1965 */
rtx
gen_sse2_cvttsd2si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:1989 */
rtx
gen_sse2_cvtdq2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2DFmode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:2038 */
rtx
gen_sse2_cvtsd2ss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand2)),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:2052 */
rtx
gen_sse2_cvtss2sd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:2086 */
rtx
gen_sse2_cvtps2pd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (V2DFmode,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:2103 */
rtx
gen_sse2_unpckhpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../.././gcc/config/i386/sse.md:2151 */
rtx
gen_sse2_unpcklpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* ../.././gcc/config/i386/sse.md:2181 */
rtx
gen_sse2_shufpd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DFmode,
	gen_rtx_VEC_CONCAT (V4DFmode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand3,
		operand4))));
}

/* ../.././gcc/config/i386/sse.md:2201 */
rtx
gen_sse2_storehpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))));
}

/* ../.././gcc/config/i386/sse.md:2225 */
rtx
gen_sse2_storelpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* ../.././gcc/config/i386/sse.md:2255 */
rtx
gen_sse2_loadhpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2282 */
rtx
gen_sse2_loadlpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	operand2,
	gen_rtx_VEC_SELECT (DFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))));
}

/* ../.././gcc/config/i386/sse.md:2311 */
rtx
gen_sse2_movsd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2DFmode,
	operand2,
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:2433 */
rtx
gen_sse2_ssaddv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V16QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2433 */
rtx
gen_sse2_ssaddv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2443 */
rtx
gen_sse2_usaddv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V16QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2443 */
rtx
gen_sse2_usaddv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2470 */
rtx
gen_sse2_sssubv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V16QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2470 */
rtx
gen_sse2_sssubv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2480 */
rtx
gen_sse2_ussubv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V16QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2480 */
rtx
gen_sse2_ussubv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2550 */
rtx
gen_sse2_smulv8hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V8SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../.././gcc/config/i386/sse.md:2565 */
rtx
gen_sse2_umulv8hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_MULT (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../.././gcc/config/i386/sse.md:2580 */
rtx
gen_sse2_umulv2siv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DImode,
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_ZERO_EXTEND (V2DImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))));
}

/* ../.././gcc/config/i386/sse.md:2596 */
rtx
gen_sse2_pmaddwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)]))))),
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))),
	gen_rtx_SIGN_EXTEND (V4SImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)])))))));
}

/* ../.././gcc/config/i386/sse.md:2722 */
rtx
gen_ashrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2722 */
rtx
gen_ashrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2732 */
rtx
gen_lshrv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2732 */
rtx
gen_lshrv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2732 */
rtx
gen_lshrv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2DImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2742 */
rtx
gen_ashlv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2742 */
rtx
gen_ashlv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2742 */
rtx
gen_ashlv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2DImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2752 */
rtx
gen_sse2_ashlti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2776 */
rtx
gen_sse2_lshrti3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2963 */
rtx
gen_sse2_eqv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V16QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2963 */
rtx
gen_sse2_eqv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2963 */
rtx
gen_sse2_eqv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2973 */
rtx
gen_sse2_gtv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V16QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2973 */
rtx
gen_sse2_gtv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:2973 */
rtx
gen_sse2_gtv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/sse.md:3053 */
rtx
gen_sse2_nandv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V16QImode,
	gen_rtx_NOT (V16QImode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/sse.md:3053 */
rtx
gen_sse2_nandv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8HImode,
	gen_rtx_NOT (V8HImode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/sse.md:3053 */
rtx
gen_sse2_nandv4si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SImode,
	gen_rtx_NOT (V4SImode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/sse.md:3053 */
rtx
gen_sse2_nandv2di3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DImode,
	gen_rtx_NOT (V2DImode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/sse.md:3103 */
rtx
gen_sse2_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V8QImode,
	operand2)));
}

/* ../.././gcc/config/i386/sse.md:3115 */
rtx
gen_sse2_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8HImode,
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4HImode,
	operand2)));
}

/* ../.././gcc/config/i386/sse.md:3127 */
rtx
gen_sse2_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V16QImode,
	gen_rtx_US_TRUNCATE (V8QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V8QImode,
	operand2)));
}

/* ../.././gcc/config/i386/sse.md:3139 */
rtx
gen_sse2_punpckhbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const_int_rtx[MAX_SAVED_CONST_INT + (24)],
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (25)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (26)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)],
		const_int_rtx[MAX_SAVED_CONST_INT + (27)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (28)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (29)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (30)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)],
		const_int_rtx[MAX_SAVED_CONST_INT + (31)]))));
}

/* ../.././gcc/config/i386/sse.md:3158 */
rtx
gen_sse2_punpcklbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V16QImode,
	gen_rtx_VEC_CONCAT (V32QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (16,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (16)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (17)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (18)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (19)],
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (20)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (21)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (22)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (23)]))));
}

/* ../.././gcc/config/i386/sse.md:3177 */
rtx
gen_sse2_punpckhwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../.././gcc/config/i386/sse.md:3192 */
rtx
gen_sse2_punpcklwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	gen_rtx_VEC_CONCAT (V16HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../.././gcc/config/i386/sse.md:3207 */
rtx
gen_sse2_punpckhdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../.././gcc/config/i386/sse.md:3220 */
rtx
gen_sse2_punpckldq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	gen_rtx_VEC_CONCAT (V8SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../.././gcc/config/i386/sse.md:3233 */
rtx
gen_sse2_punpckhqdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../.././gcc/config/i386/sse.md:3246 */
rtx
gen_sse2_punpcklqdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2DImode,
	gen_rtx_VEC_CONCAT (V4DImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* ../.././gcc/config/i386/sse.md:3287 */
rtx
gen_sse2_pextrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* ../.././gcc/config/i386/sse.md:3313 */
rtx
gen_sse2_pshufd_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../.././gcc/config/i386/sse.md:3350 */
rtx
gen_sse2_pshuflw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		operand2,
		operand3,
		operand4,
		operand5,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../.././gcc/config/i386/sse.md:3391 */
rtx
gen_sse2_pshufhw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../.././gcc/config/i386/sse.md:3427 */
rtx
gen_sse2_loadld (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand2),
	operand1,
	const1_rtx));
}

/* ../.././gcc/config/i386/sse.md:3444 */
rtx
gen_sse2_stored (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* ../.././gcc/config/i386/sse.md:3698 */
rtx
gen_sse2_uavgv16qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V16QImode,
	gen_rtx_LSHIFTRT (V16HImode,
	gen_rtx_PLUS (V16HImode,
	gen_rtx_PLUS (V16HImode,
	gen_rtx_ZERO_EXTEND (V16HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V16HImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V16QImode,
	gen_rtvec (16,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* ../.././gcc/config/i386/sse.md:3722 */
rtx
gen_sse2_uavgv8hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8HImode,
	gen_rtx_LSHIFTRT (V8SImode,
	gen_rtx_PLUS (V8SImode,
	gen_rtx_PLUS (V8SImode,
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V8HImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* ../.././gcc/config/i386/sse.md:3744 */
rtx
gen_sse2_psadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* ../.././gcc/config/i386/sse.md:3754 */
rtx
gen_sse_movmskps (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* ../.././gcc/config/i386/sse.md:3763 */
rtx
gen_sse2_movmskpd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* ../.././gcc/config/i386/sse.md:3772 */
rtx
gen_sse2_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* ../.././gcc/config/i386/sse.md:3814 */
rtx
gen_sse_ldmxcsr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	3);
}

/* ../.././gcc/config/i386/sse.md:3822 */
rtx
gen_sse_stmxcsr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	4));
}

/* ../.././gcc/config/i386/sse.md:3847 */
rtx
gen_sse2_clflush (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	6);
}

/* ../.././gcc/config/i386/sse.md:3889 */
rtx
gen_sse3_mwait (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (2,
		operand0,
		operand1),
	9);
}

/* ../.././gcc/config/i386/sse.md:3897 */
rtx
gen_sse3_monitor (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	8);
}

/* ../.././gcc/config/i386/mmx.md:199 */
rtx
gen_sse_movntdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	33));
}

/* ../.././gcc/config/i386/mmx.md:214 */
rtx
gen_mmx_addv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:223 */
rtx
gen_mmx_subv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:241 */
rtx
gen_mmx_mulv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:250 */
rtx
gen_mmx_smaxv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:259 */
rtx
gen_mmx_sminv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:268 */
rtx
gen_mmx_rcpv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	39));
}

/* ../.././gcc/config/i386/mmx.md:277 */
rtx
gen_mmx_rcpit1v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	40));
}

/* ../.././gcc/config/i386/mmx.md:287 */
rtx
gen_mmx_rcpit2v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

/* ../.././gcc/config/i386/mmx.md:297 */
rtx
gen_mmx_rsqrtv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	42));
}

/* ../.././gcc/config/i386/mmx.md:306 */
rtx
gen_mmx_rsqit1v2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	43));
}

/* ../.././gcc/config/i386/mmx.md:316 */
rtx
gen_mmx_haddv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* ../.././gcc/config/i386/mmx.md:334 */
rtx
gen_mmx_hsubv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

/* ../.././gcc/config/i386/mmx.md:352 */
rtx
gen_mmx_addsubv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SFmode,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2),
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2),
	const1_rtx));
}

/* ../.././gcc/config/i386/mmx.md:371 */
rtx
gen_mmx_gtv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:380 */
rtx
gen_mmx_gev2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:389 */
rtx
gen_mmx_eqv2sf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:404 */
rtx
gen_mmx_pf2id (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

/* ../.././gcc/config/i386/mmx.md:412 */
rtx
gen_mmx_pf2iw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	gen_rtx_FIX (V2SImode,
	operand1))));
}

/* ../.././gcc/config/i386/mmx.md:423 */
rtx
gen_mmx_pi2fw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_TRUNCATE (V2HImode,
	operand1))));
}

/* ../.././gcc/config/i386/mmx.md:434 */
rtx
gen_mmx_floatv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	operand1));
}

/* ../.././gcc/config/i386/mmx.md:448 */
rtx
gen_mmx_pswapdv2sf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* ../.././gcc/config/i386/mmx.md:560 */
rtx
gen_mmx_addv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:560 */
rtx
gen_mmx_addv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:560 */
rtx
gen_mmx_addv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:570 */
rtx
gen_mmx_adddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
	38));
}

/* ../.././gcc/config/i386/mmx.md:581 */
rtx
gen_mmx_ssaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:581 */
rtx
gen_mmx_ssaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:591 */
rtx
gen_mmx_usaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:591 */
rtx
gen_mmx_usaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:601 */
rtx
gen_mmx_subv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:601 */
rtx
gen_mmx_subv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:601 */
rtx
gen_mmx_subv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:611 */
rtx
gen_mmx_subdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
	38));
}

/* ../.././gcc/config/i386/mmx.md:622 */
rtx
gen_mmx_sssubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:622 */
rtx
gen_mmx_sssubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:632 */
rtx
gen_mmx_ussubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:632 */
rtx
gen_mmx_ussubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:642 */
rtx
gen_mmx_mulv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:651 */
rtx
gen_mmx_smulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../.././gcc/config/i386/mmx.md:665 */
rtx
gen_mmx_umulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../.././gcc/config/i386/mmx.md:680 */
rtx
gen_mmx_pmaddwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)])))))));
}

/* ../.././gcc/config/i386/mmx.md:704 */
rtx
gen_mmx_pmulhrwv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		GEN_INT (32768L),
		GEN_INT (32768L),
		GEN_INT (32768L),
		GEN_INT (32768L)))),
	const_int_rtx[MAX_SAVED_CONST_INT + (16)])));
}

/* ../.././gcc/config/i386/mmx.md:722 */
rtx
gen_sse2_umulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))),
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))));
}

/* ../.././gcc/config/i386/mmx.md:738 */
rtx
gen_mmx_umaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:748 */
rtx
gen_mmx_smaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:758 */
rtx
gen_mmx_uminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:768 */
rtx
gen_mmx_sminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:778 */
rtx
gen_mmx_ashrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:778 */
rtx
gen_mmx_ashrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:788 */
rtx
gen_mmx_lshrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:788 */
rtx
gen_mmx_lshrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:798 */
rtx
gen_mmx_lshrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
	38));
}

/* ../.././gcc/config/i386/mmx.md:809 */
rtx
gen_mmx_ashlv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:809 */
rtx
gen_mmx_ashlv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:819 */
rtx
gen_mmx_ashldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
	38));
}

/* ../.././gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_eqv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_eqv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:836 */
rtx
gen_mmx_eqv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_gtv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_gtv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:846 */
rtx
gen_mmx_gtv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:862 */
rtx
gen_mmx_andv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:862 */
rtx
gen_mmx_andv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:862 */
rtx
gen_mmx_andv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:872 */
rtx
gen_mmx_nandv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8QImode,
	gen_rtx_NOT (V8QImode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:872 */
rtx
gen_mmx_nandv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4HImode,
	gen_rtx_NOT (V4HImode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:872 */
rtx
gen_mmx_nandv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2SImode,
	gen_rtx_NOT (V2SImode,
	operand1),
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:882 */
rtx
gen_mmx_iorv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:882 */
rtx
gen_mmx_iorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:882 */
rtx
gen_mmx_iorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:892 */
rtx
gen_mmx_xorv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8QImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:892 */
rtx
gen_mmx_xorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4HImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:892 */
rtx
gen_mmx_xorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2SImode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/mmx.md:909 */
rtx
gen_mmx_packsswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand2)));
}

/* ../.././gcc/config/i386/mmx.md:921 */
rtx
gen_mmx_packssdw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand2)));
}

/* ../.././gcc/config/i386/mmx.md:933 */
rtx
gen_mmx_packuswb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V4QImode,
	operand2)));
}

/* ../.././gcc/config/i386/mmx.md:945 */
rtx
gen_mmx_punpckhbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const_int_rtx[MAX_SAVED_CONST_INT + (12)],
		const_int_rtx[MAX_SAVED_CONST_INT + (5)],
		const_int_rtx[MAX_SAVED_CONST_INT + (13)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (14)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)],
		const_int_rtx[MAX_SAVED_CONST_INT + (15)]))));
}

/* ../.././gcc/config/i386/mmx.md:960 */
rtx
gen_mmx_punpcklbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V8QImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (8)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (9)],
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (10)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (11)]))));
}

/* ../.././gcc/config/i386/mmx.md:975 */
rtx
gen_mmx_punpckhwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)],
		const_int_rtx[MAX_SAVED_CONST_INT + (6)],
		const_int_rtx[MAX_SAVED_CONST_INT + (3)],
		const_int_rtx[MAX_SAVED_CONST_INT + (7)]))));
}

/* ../.././gcc/config/i386/mmx.md:988 */
rtx
gen_mmx_punpcklwd (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	gen_rtx_VEC_CONCAT (V8HImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (4)],
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (5)]))));
}

/* ../.././gcc/config/i386/mmx.md:1001 */
rtx
gen_mmx_punpckhdq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (3)]))));
}

/* ../.././gcc/config/i386/mmx.md:1014 */
rtx
gen_mmx_punpckldq (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_VEC_CONCAT (V4SImode,
	operand1,
	operand2),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const_int_rtx[MAX_SAVED_CONST_INT + (2)]))));
}

/* ../.././gcc/config/i386/mmx.md:1055 */
rtx
gen_mmx_pextrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* ../.././gcc/config/i386/mmx.md:1081 */
rtx
gen_mmx_pshufw_1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		operand2,
		operand3,
		operand4,
		operand5))));
}

/* ../.././gcc/config/i386/mmx.md:1103 */
rtx
gen_mmx_pswapdv2si2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

/* ../.././gcc/config/i386/mmx.md:1290 */
rtx
gen_mmx_uavgv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V8QImode,
	gen_rtx_LSHIFTRT (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_PLUS (V8HImode,
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V8HImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V8HImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* ../.././gcc/config/i386/mmx.md:1318 */
rtx
gen_mmx_uavgv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx)));
}

/* ../.././gcc/config/i386/mmx.md:1337 */
rtx
gen_mmx_psadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	46));
}

/* ../.././gcc/config/i386/mmx.md:1347 */
rtx
gen_mmx_pmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	32));
}

/* ../.././gcc/config/i386/mmx.md:1389 */
rtx
gen_mmx_emms (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	2),
		gen_hard_reg_clobber (XFmode, 8),
		gen_hard_reg_clobber (XFmode, 9),
		gen_hard_reg_clobber (XFmode, 10),
		gen_hard_reg_clobber (XFmode, 11),
		gen_hard_reg_clobber (XFmode, 12),
		gen_hard_reg_clobber (XFmode, 13),
		gen_hard_reg_clobber (XFmode, 14),
		gen_hard_reg_clobber (XFmode, 15),
		gen_hard_reg_clobber (DImode, 29),
		gen_hard_reg_clobber (DImode, 30),
		gen_hard_reg_clobber (DImode, 31),
		gen_hard_reg_clobber (DImode, 32),
		gen_hard_reg_clobber (DImode, 33),
		gen_hard_reg_clobber (DImode, 34),
		gen_hard_reg_clobber (DImode, 35),
		gen_hard_reg_clobber (DImode, 36)));
}

/* ../.././gcc/config/i386/mmx.md:1412 */
rtx
gen_mmx_femms (void)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	5),
		gen_hard_reg_clobber (XFmode, 8),
		gen_hard_reg_clobber (XFmode, 9),
		gen_hard_reg_clobber (XFmode, 10),
		gen_hard_reg_clobber (XFmode, 11),
		gen_hard_reg_clobber (XFmode, 12),
		gen_hard_reg_clobber (XFmode, 13),
		gen_hard_reg_clobber (XFmode, 14),
		gen_hard_reg_clobber (XFmode, 15),
		gen_hard_reg_clobber (DImode, 29),
		gen_hard_reg_clobber (DImode, 30),
		gen_hard_reg_clobber (DImode, 31),
		gen_hard_reg_clobber (DImode, 32),
		gen_hard_reg_clobber (DImode, 33),
		gen_hard_reg_clobber (DImode, 34),
		gen_hard_reg_clobber (DImode, 35),
		gen_hard_reg_clobber (DImode, 36)));
}

/* ../.././gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swaphi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:22 */
rtx
gen_sync_compare_and_swapsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:86 */
rtx
gen_sync_old_addqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:86 */
rtx
gen_sync_old_addhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:86 */
rtx
gen_sync_old_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:98 */
rtx
gen_sync_lock_test_and_setqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* ../.././gcc/config/i386/sync.md:98 */
rtx
gen_sync_lock_test_and_sethi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* ../.././gcc/config/i386/sync.md:98 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	12)),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2)));
}

/* ../.././gcc/config/i386/sync.md:107 */
rtx
gen_sync_addqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_PLUS (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:107 */
rtx
gen_sync_addhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_PLUS (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:107 */
rtx
gen_sync_addsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:117 */
rtx
gen_sync_subqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_MINUS (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:117 */
rtx
gen_sync_subhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_MINUS (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:117 */
rtx
gen_sync_subsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_MINUS (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:127 */
rtx
gen_sync_iorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_IOR (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:127 */
rtx
gen_sync_iorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_IOR (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:127 */
rtx
gen_sync_iorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_IOR (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:137 */
rtx
gen_sync_andqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_AND (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:137 */
rtx
gen_sync_andhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_AND (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:137 */
rtx
gen_sync_andsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_AND (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:147 */
rtx
gen_sync_xorqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (1,
		gen_rtx_XOR (QImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:147 */
rtx
gen_sync_xorhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (1,
		gen_rtx_XOR (HImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/sync.md:147 */
rtx
gen_sync_xorsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_XOR (SImode,
	operand0,
	operand1)),
	13)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:496 */
rtx
gen_cmpdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 501 "../.././gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (DImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:509 */
rtx
gen_cmpsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 514 "../.././gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (SImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:522 */
rtx
gen_cmphi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 527 "../.././gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (HImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:535 */
rtx
gen_cmpqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 540 "../.././gcc/config/i386/i386.md"
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (QImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:609 */
rtx
gen_cmpsi_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:733 */
rtx
gen_cmpqi_ext_3 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	0),
	operand1));
}

/* ../.././gcc/config/i386/i386.md:796 */
rtx
gen_cmpxf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 801 "../.././gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:807 */
rtx
gen_cmpdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 812 "../.././gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:818 */
rtx
gen_cmpsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 823 "../.././gcc/config/i386/i386.md"
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1064 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1068 "../.././gcc/config/i386/i386.md"
ix86_expand_move (SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1266 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1270 "../.././gcc/config/i386/i386.md"
ix86_expand_move (HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1395 */
rtx
gen_movstricthi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1399 "../.././gcc/config/i386/i386.md"
{
  /* Don't generate memory->memory moves, go through a register */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (HImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1425 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1429 "../.././gcc/config/i386/i386.md"
ix86_expand_move (QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1522 */
rtx
gen_reload_outqi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1527 "../.././gcc/config/i386/i386.md"
{
  rtx op0, op1, op2;
  op0 = operands[0]; op1 = operands[1]; op2 = operands[2];

  gcc_assert (!reg_overlap_mentioned_p (op2, op0));
  if (! q_regs_operand (op1, QImode))
    {
      emit_insn (gen_movqi (op2, op1));
      op1 = op2;
    }
  emit_insn (gen_movqi (op0, op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1565 */
rtx
gen_movstrictqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1569 "../.././gcc/config/i386/i386.md"
{
  /* Don't generate memory->memory moves, go through a register.  */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (QImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1803 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1807 "../.././gcc/config/i386/i386.md"
ix86_expand_move (DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1949 */
extern rtx gen_split_943 (rtx, rtx *);
rtx
gen_split_943 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1955 "../.././gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:1958 */
extern rtx gen_split_944 (rtx, rtx *);
rtx
gen_split_944 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1965 "../.././gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2108 */
rtx
gen_movti (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2112 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    ix86_expand_move (TImode, operands);
  else
    ix86_expand_vector_move (TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2206 */
extern rtx gen_split_946 (rtx, rtx *);
rtx
gen_split_946 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2212 "../.././gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2214 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2218 "../.././gcc/config/i386/i386.md"
ix86_expand_move (SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2246 */
extern rtx gen_split_948 (rtx, rtx *);
rtx
gen_split_948 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2254 "../.././gcc/config/i386/i386.md"
operands[1] = avoid_constant_pool_reference (operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2258 */
extern rtx gen_split_949 (rtx, rtx *);
rtx
gen_split_949 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-4)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2376 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2380 "../.././gcc/config/i386/i386.md"
ix86_expand_move (DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2412 */
extern rtx gen_split_951 (rtx, rtx *);
rtx
gen_split_951 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2418 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2428 */
extern rtx gen_split_952 (rtx, rtx *);
rtx
gen_split_952 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2433 "../.././gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2680 */
extern rtx gen_split_953 (rtx, rtx *);
rtx
gen_split_953 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2692 "../.././gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2709 */
rtx
gen_movxf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2713 "../.././gcc/config/i386/i386.md"
ix86_expand_move (XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2746 */
extern rtx gen_split_955 (rtx, rtx *);
rtx
gen_split_955 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2754 "../.././gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2756 */
extern rtx gen_split_956 (rtx, rtx *);
rtx
gen_split_956 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 2762 "../.././gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2842 */
extern rtx gen_split_957 (rtx, rtx *);
rtx
gen_split_957 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2855 "../.././gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2857 */
extern rtx gen_split_958 (rtx, rtx *);
rtx
gen_split_958 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2866 "../.././gcc/config/i386/i386.md"
{
  rtx c = avoid_constant_pool_reference (operands[1]);
  rtx r = operands[0];

  if (GET_CODE (r) == SUBREG)
    r = SUBREG_REG (r);

  if (SSE_REG_P (r))
    {
      if (!standard_sse_constant_p (c))
	FAIL;
    }
  else if (FP_REG_P (r))
    {
      if (!standard_80387_constant_p (c))
	FAIL;
    }
  else if (MMX_REG_P (r))
    FAIL;

  operands[1] = c;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2957 */
extern rtx gen_split_959 (rtx, rtx *);
rtx
gen_split_959 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2963 "../.././gcc/config/i386/i386.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2967 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2971 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    {
      operands[1] = force_reg (HImode, operands[1]);
      emit_insn (gen_zero_extendhisi2_and (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:2989 */
extern rtx gen_split_961 (rtx, rtx *);
rtx
gen_split_961 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 2996 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535L))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3006 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:3041 */
extern rtx gen_split_963 (rtx, rtx *);
rtx
gen_split_963 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3053 */
extern rtx gen_split_964 (rtx, rtx *);
rtx
gen_split_964 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3063 "../.././gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3066 */
extern rtx gen_split_965 (rtx, rtx *);
rtx
gen_split_965 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3074 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255L))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3076 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:3111 */
extern rtx gen_split_967 (rtx, rtx *);
rtx
gen_split_967 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3123 */
extern rtx gen_split_968 (rtx, rtx *);
rtx
gen_split_968 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3134 "../.././gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3137 */
extern rtx gen_split_969 (rtx, rtx *);
rtx
gen_split_969 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 3145 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255L))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3148 */
rtx
gen_zero_extendsidi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3152 "../.././gcc/config/i386/i386.md"
if (!TARGET_64BIT)
     {
       emit_insn (gen_zero_extendsidi2_32 (operands[0], operands[1]));
       DONE;
     }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3192 */
extern rtx gen_split_971 (rtx, rtx *);
rtx
gen_split_971 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3199 "../.././gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3201 */
extern rtx gen_split_972 (rtx, rtx *);
rtx
gen_split_972 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3209 "../.././gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3229 */
rtx
gen_extendsidi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3235 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_extendsidi2_rex64 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3280 */
extern rtx gen_split_974 (rtx, rtx *);
rtx
gen_split_974 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 3292 "../.././gcc/config/i386/i386.md"
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand1),
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3295 */
extern rtx gen_split_975 (rtx, rtx *);
rtx
gen_split_975 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3302 "../.././gcc/config/i386/i386.md"
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[1]) == 0
      && true_regnum (operands[2]) == 1
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[2], operands[1], GEN_INT (31)));
    }
  else
    {
      emit_move_insn (operands[2], operands[1]);
      emit_insn (gen_ashrsi3_31 (operands[2], operands[2], GEN_INT (31)));
    }
  emit_move_insn (operands[4], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3325 */
extern rtx gen_split_976 (rtx, rtx *);
rtx
gen_split_976 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 3332 "../.././gcc/config/i386/i386.md"
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  if (true_regnum (operands[3]) != true_regnum (operands[1]))
    emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[3]) == 0
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[4], operands[3], GEN_INT (31)));
      DONE;
    }

  if (true_regnum (operands[4]) != true_regnum (operands[1]))
    emit_move_insn (operands[4], operands[1]);

  emit_insn (gen_ashrsi3_31 (operands[4], operands[4], GEN_INT (31)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3461 */
extern rtx gen_split_977 (rtx, rtx *);
rtx
gen_split_977 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (-8)])));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3481 */
extern rtx gen_split_978 (rtx, rtx *);
rtx
gen_split_978 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3487 "../.././gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3497 */
extern rtx gen_split_979 (rtx, rtx *);
rtx
gen_split_979 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3503 "../.././gcc/config/i386/i386.md"
operands[2] = GEN_INT (TARGET_128BIT_LONG_DOUBLE ? -16 : -12);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3513 */
rtx
gen_extendsfdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3517 "../.././gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3586 */
rtx
gen_extendsfxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3590 "../.././gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    operands[1] = validize_mem (force_const_mem (SFmode, operands[1]));
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3625 */
rtx
gen_extenddfxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3629 "../.././gcc/config/i386/i386.md"
{
  /* ??? Needed for compress_float_constant since all fp constants
     are LEGITIMATE_CONSTANT_P.  */
  if (GET_CODE (operands[1]) == CONST_DOUBLE)
    operands[1] = validize_mem (force_const_mem (DFmode, operands[1]));
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3672 */
rtx
gen_truncdfsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3677 "../.././gcc/config/i386/i386.md"
{
  if (MEM_P (operands[0]) && MEM_P (operands[1]))
    operands[1] = force_reg (DFmode, operands[1]);

  if (TARGET_SSE2 && TARGET_SSE_MATH && !TARGET_MIX_SSE_I387)
    ;
  else if (flag_unsafe_math_optimizations)
    ;
  else
    {
      rtx temp = assign_386_stack_local (SFmode, SLOT_TEMP);
      emit_insn (gen_truncdfsf2_with_temp (operands[0], operands[1], temp));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3693 */
rtx
gen_truncdfsf2_with_temp (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* ../.././gcc/config/i386/i386.md:3809 */
extern rtx gen_split_985 (rtx, rtx *);
rtx
gen_split_985 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3817 "../.././gcc/config/i386/i386.md"
{
  operands[1] = gen_rtx_REG (SFmode, true_regnum (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3823 */
rtx
gen_truncxfsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3829 "../.././gcc/config/i386/i386.md"
{
  if (flag_unsafe_math_optimizations)
    {
      rtx reg = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SFmode);
      emit_insn (gen_truncxfsf2_i387_noop (reg, operands[1]));
      if (reg != operands[0])
	emit_move_insn (operands[0], reg);
      DONE;
    }
  else
    operands[2] = assign_386_stack_local (SFmode, SLOT_TEMP);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3900 */
extern rtx gen_split_987 (rtx, rtx *);
rtx
gen_split_987 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 3908 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3910 */
extern rtx gen_split_988 (rtx, rtx *);
rtx
gen_split_988 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3917 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3921 */
rtx
gen_truncxfdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3927 "../.././gcc/config/i386/i386.md"
{
  if (flag_unsafe_math_optimizations)
    {
      rtx reg = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DFmode);
      emit_insn (gen_truncxfdf2_i387_noop (reg, operands[1]));
      if (reg != operands[0])
	emit_move_insn (operands[0], reg);
      DONE;
    }
  else
    operands[2] = assign_386_stack_local (DFmode, SLOT_TEMP);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:3998 */
extern rtx gen_split_990 (rtx, rtx *);
rtx
gen_split_990 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 4006 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4008 */
extern rtx gen_split_991 (rtx, rtx *);
rtx
gen_split_991 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 4015 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4019 */
rtx
gen_fix_truncxfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4024 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4032 */
rtx
gen_fix_truncsfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4037 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncsfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4032 */
rtx
gen_fix_truncdfdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4037 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncdi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncdfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4056 */
rtx
gen_fix_truncxfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4061 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4069 */
rtx
gen_fix_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4074 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (SSE_FLOAT_MODE_P (SFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncsfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4069 */
rtx
gen_fix_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4074 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP
      && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
   {
     emit_insn (gen_fix_truncsi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
  if (SSE_FLOAT_MODE_P (DFmode))
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncdfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4093 */
rtx
gen_fix_truncsfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4099 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4093 */
rtx
gen_fix_truncdfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4099 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4093 */
rtx
gen_fix_truncxfhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4099 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_FISTTP)
   {
     emit_insn (gen_fix_trunchi_fisttp_i387_1 (operands[0], operands[1]));
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4145 */
extern rtx gen_peephole2_1001 (rtx, rtx *);
rtx
gen_peephole2_1001 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "Y", DFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4152 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4145 */
extern rtx gen_peephole2_1002 (rtx, rtx *);
rtx
gen_peephole2_1002 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "Y", DFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4152 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4154 */
extern rtx gen_peephole2_1003 (rtx, rtx *);
rtx
gen_peephole2_1003 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "x", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4161 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4154 */
extern rtx gen_peephole2_1004 (rtx, rtx *);
rtx
gen_peephole2_1004 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "x", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 4161 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4163 */
extern rtx gen_split_1005 (rtx, rtx *);
rtx
gen_split_1005 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4175 "../.././gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_trunchi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fix_trunchi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4163 */
extern rtx gen_split_1006 (rtx, rtx *);
rtx
gen_split_1006 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4175 "../.././gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncsi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fix_truncsi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4163 */
extern rtx gen_split_1007 (rtx, rtx *);
rtx
gen_split_1007 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4175 "../.././gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncdi_i387_fisttp (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fix_truncdi_i387_fisttp_with_temp (operands[0],
							    operands[1],
							    operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4217 */
extern rtx gen_split_1008 (rtx, rtx *);
rtx
gen_split_1008 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4226 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4217 */
extern rtx gen_split_1009 (rtx, rtx *);
rtx
gen_split_1009 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4226 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4217 */
extern rtx gen_split_1010 (rtx, rtx *);
rtx
gen_split_1010 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4226 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4228 */
extern rtx gen_split_1011 (rtx, rtx *);
rtx
gen_split_1011 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4236 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4228 */
extern rtx gen_split_1012 (rtx, rtx *);
rtx
gen_split_1012 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4236 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4228 */
extern rtx gen_split_1013 (rtx, rtx *);
rtx
gen_split_1013 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4236 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4243 */
extern rtx gen_split_1014 (rtx, rtx *);
rtx
gen_split_1014 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4255 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_trunchi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fix_trunchi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4243 */
extern rtx gen_split_1015 (rtx, rtx *);
rtx
gen_split_1015 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4255 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncsi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fix_truncsi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4243 */
extern rtx gen_split_1016 (rtx, rtx *);
rtx
gen_split_1016 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4255 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncdi_i387 (operands[0], operands[1],
					 operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fix_truncdi_i387_with_temp (operands[0], operands[1],
						     operands[2], operands[3],
						     operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4305 */
extern rtx gen_split_1017 (rtx, rtx *);
rtx
gen_split_1017 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4318 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4320 */
extern rtx gen_split_1018 (rtx, rtx *);
rtx
gen_split_1018 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4332 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4361 */
extern rtx gen_split_1019 (rtx, rtx *);
rtx
gen_split_1019 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4372 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4361 */
extern rtx gen_split_1020 (rtx, rtx *);
rtx
gen_split_1020 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 4372 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4374 */
extern rtx gen_split_1021 (rtx, rtx *);
rtx
gen_split_1021 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4384 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4374 */
extern rtx gen_split_1022 (rtx, rtx *);
rtx
gen_split_1022 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 4384 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4410 */
rtx
gen_floathisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4414 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_SSE_MATH)
    {
      emit_insn (gen_floatsisf2 (operands[0],
				 convert_to_mode (SImode, operands[1], 0)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4435 */
rtx
gen_floatsisf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4478 */
rtx
gen_floatdisf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4521 */
rtx
gen_floathidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4525 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_SSE2 && TARGET_SSE_MATH)
    {
      emit_insn (gen_floatsidf2 (operands[0],
				 convert_to_mode (SImode, operands[1], 0)));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4546 */
rtx
gen_floatsidf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4589 */
rtx
gen_floatdidf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* ../.././gcc/config/i386/i386.md:4669 */
extern rtx gen_split_1029 (rtx, rtx *);
rtx
gen_split_1029 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4676 "../.././gcc/config/i386/i386.md"
{
  operands[2] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[2] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[2]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], operands[2]));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4684 */
rtx
gen_floatunssisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 4688 "../.././gcc/config/i386/i386.md"
x86_emit_floatuns (operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4748 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4754 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4764 */
extern rtx gen_split_1032 (rtx, rtx *);
rtx
gen_split_1032 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 4778 "../.././gcc/config/i386/i386.md"
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand4),
	operand5)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4879 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 4885 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4923 */
extern rtx gen_split_1034 (rtx, rtx *);
rtx
gen_split_1034 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4938 "../.././gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_PLUS (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:4975 */
extern rtx gen_split_1035 (rtx, rtx *);
rtx
gen_split_1035 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 4989 "../.././gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:5024 */
extern rtx gen_split_1036 (rtx, rtx *);
rtx
gen_split_1036 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5038 "../.././gcc/config/i386/i386.md"
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  operands[4] = gen_lowpart (Pmode, operands[4]);
  pat = gen_rtx_PLUS (Pmode,
  		      gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1],
		      					 operands[2]),
				    operands[3]),
  		      operands[4]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:5398 */
extern rtx gen_split_1037 (rtx, rtx *);
rtx
gen_split_1037 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 5406 "../.././gcc/config/i386/i386.md"
{
  rtx pat;
  /* In -fPIC mode the constructs like (const (unspec [symbol_ref]))
     may confuse gen_lowpart.  */
  if (GET_MODE (operands[0]) != Pmode)
    {
      operands[1] = gen_lowpart (Pmode, operands[1]);
      operands[2] = gen_lowpart (Pmode, operands[2]);
    }
  operands[0] = gen_lowpart (SImode, operands[0]);
  pat = gen_rtx_PLUS (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:5766 */
rtx
gen_addhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 5772 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:6021 */
rtx
gen_addqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6027 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (PLUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:6418 */
rtx
gen_addxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (XFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:6425 */
rtx
gen_adddf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:6432 */
rtx
gen_addsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:6478 */
rtx
gen_subdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6484 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:6494 */
extern rtx gen_split_1044 (rtx, rtx *);
rtx
gen_split_1044 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 6507 "../.././gcc/config/i386/i386.md"
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand5))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:6608 */
rtx
gen_subsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6614 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:6693 */
rtx
gen_subhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6699 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:6737 */
rtx
gen_subqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 6743 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (MINUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:6794 */
rtx
gen_subxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (XFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:6801 */
rtx
gen_subdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:6808 */
rtx
gen_subsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:6849 */
rtx
gen_mulsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:6905 */
rtx
gen_mulhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:6933 */
rtx
gen_mulqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:6957 */
rtx
gen_umulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:6983 */
rtx
gen_mulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (HImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7034 */
rtx
gen_umulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7086 */
rtx
gen_mulsidi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7148 */
rtx
gen_umulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7240 */
rtx
gen_smulsi3_highpart (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7297 */
rtx
gen_mulxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:7304 */
rtx
gen_muldf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:7311 */
rtx
gen_mulsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:7342 */
rtx
gen_divxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (XFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:7349 */
rtx
gen_divdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:7356 */
rtx
gen_divsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

/* ../.././gcc/config/i386/i386.md:7448 */
rtx
gen_divmodsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:7496 */
extern rtx gen_split_1067 (rtx, rtx *);
rtx
gen_split_1067 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 7513 "../.././gcc/config/i386/i386.md"
{
  /* Avoid use of cltd in favor of a mov+shift.  */
  if (!TARGET_USE_CLTD && !optimize_size)
    {
      if (true_regnum (operands[1]))
        emit_move_insn (operands[0], operands[1]);
      else
	emit_move_insn (operands[3], operands[1]);
      operands[4] = operands[3];
    }
  else
    {
      gcc_assert (!true_regnum (operands[1]));
      operands[4] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (SImode,
	operand4,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	gen_rtx_REG (SImode,
	0),
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_MOD (SImode,
	gen_rtx_REG (SImode,
	0),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:7612 */
extern rtx gen_split_1068 (rtx, rtx *);
rtx
gen_split_1068 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7627 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:7629 */
rtx
gen_udivmodhi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 7639 "../.././gcc/config/i386/i386.md"
operands[4] = gen_reg_rtx (HImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (HImode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:7711 */
rtx
gen_testsi_ccno_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

/* ../.././gcc/config/i386/i386.md:7733 */
rtx
gen_testqi_ccz_1 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand0,
	operand1),
	const0_rtx));
}

/* ../.././gcc/config/i386/i386.md:7781 */
rtx
gen_testqi_ext_ccno_0 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand1),
	const0_rtx));
}

/* ../.././gcc/config/i386/i386.md:7901 */
extern rtx gen_split_1073 (rtx, rtx *);
rtx
gen_split_1073 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 7911 "../.././gcc/config/i386/i386.md"
{
  rtx val = operands[2];
  HOST_WIDE_INT len = INTVAL (operands[3]);
  HOST_WIDE_INT pos = INTVAL (operands[4]);
  HOST_WIDE_INT mask;
  enum machine_mode mode, submode;

  mode = GET_MODE (val);
  if (GET_CODE (val) == MEM)
    {
      /* ??? Combine likes to put non-volatile mem extractions in QImode
	 no matter the size of the test.  So find a mode that works.  */
      if (! MEM_VOLATILE_P (val))
	{
	  mode = smallest_mode_for_size (pos + len, MODE_INT);
	  val = adjust_address (val, mode, 0);
	}
    }
  else if (GET_CODE (val) == SUBREG
	   && (submode = GET_MODE (SUBREG_REG (val)),
	       GET_MODE_BITSIZE (mode) > GET_MODE_BITSIZE (submode))
	   && pos + len <= GET_MODE_BITSIZE (submode))
    {
      /* Narrow a paradoxical subreg to prevent partial register stalls.  */
      mode = submode;
      val = SUBREG_REG (val);
    }
  else if (mode == HImode && pos + len <= 8)
    {
      /* Small HImode tests can be converted to QImode.  */
      mode = QImode;
      val = gen_lowpart (QImode, val);
    }

  if (len == HOST_BITS_PER_WIDE_INT)
    mask = -1;
  else
    mask = ((HOST_WIDE_INT)1 << len) - 1;
  mask <<= pos;

  operands[2] = gen_rtx_AND (mode, val, gen_int_mode (mask, mode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:7959 */
extern rtx gen_split_1074 (rtx, rtx *);
rtx
gen_split_1074 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7977 "../.././gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_int_mode (INTVAL (operands[3]) >> 8, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:7980 */
extern rtx gen_split_1075 (rtx, rtx *);
rtx
gen_split_1075 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 7996 "../.././gcc/config/i386/i386.md"
operands[2] = gen_lowpart (QImode, operands[2]);
   operands[3] = gen_lowpart (QImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (QImode,
	operand2,
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8069 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8075 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8115 */
extern rtx gen_split_1077 (rtx, rtx *);
rtx
gen_split_1077 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 8122 "../.././gcc/config/i386/i386.md"
operands[1] = gen_lowpart (HImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8124 */
extern rtx gen_split_1078 (rtx, rtx *);
rtx
gen_split_1078 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 8131 "../.././gcc/config/i386/i386.md"
operands[1] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8133 */
extern rtx gen_split_1079 (rtx, rtx *);
rtx
gen_split_1079 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
#line 8150 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8191 */
rtx
gen_andhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8197 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8236 */
rtx
gen_andqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8242 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (AND, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8432 */
extern rtx gen_split_1082 (rtx, rtx *);
rtx
gen_split_1082 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8447 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8453 */
extern rtx gen_split_1083 (rtx, rtx *);
rtx
gen_split_1083 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8468 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_AND (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8524 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8530 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8617 */
rtx
gen_iorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8623 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8660 */
rtx
gen_iorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8666 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (IOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8805 */
extern rtx gen_split_1087 (rtx, rtx *);
rtx
gen_split_1087 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8820 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_IOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8826 */
extern rtx gen_split_1088 (rtx, rtx *);
rtx
gen_split_1088 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 8841 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_IOR (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8900 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 8906 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:8994 */
rtx
gen_xorhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9000 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9037 */
rtx
gen_xorqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9043 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (XOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9226 */
rtx
gen_xorqi_cc_ext_1 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2))));
}

/* ../.././gcc/config/i386/i386.md:9246 */
extern rtx gen_split_1093 (rtx, rtx *);
rtx
gen_split_1093 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 9261 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   operands[2] = gen_int_mode ((INTVAL (operands[2]) >> 8) & 0xff, SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9267 */
extern rtx gen_split_1094 (rtx, rtx *);
rtx
gen_split_1094 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 9282 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (QImode, operands[0]);
   operands[1] = gen_lowpart (QImode, operands[1]);
   operands[2] = gen_lowpart (QImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx_XOR (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9325 */
rtx
gen_negdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9330 "../.././gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9340 */
extern rtx gen_split_1096 (rtx, rtx *);
rtx
gen_split_1096 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 9359 "../.././gcc/config/i386/i386.md"
split_di (operands+1, 1, operands+2, operands+3);
   split_di (operands+0, 1, operands+0, operands+1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_NEG (SImode,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand3),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_NEG (SImode,
	copy_rtx (operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9387 */
rtx
gen_negsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9392 "../.././gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9447 */
rtx
gen_neghi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9452 "../.././gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (HImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9474 */
rtx
gen_negqi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9479 "../.././gcc/config/i386/i386.md"
ix86_expand_unary_operator (NEG, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (QImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9503 */
rtx
gen_negsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9507 "../.././gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9509 */
rtx
gen_abssf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9513 "../.././gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9545 */
rtx
gen_copysignsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9550 "../.././gcc/config/i386/i386.md"
{
  ix86_expand_copysign (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9555 */
extern rtx gen_split_1103 (rtx, rtx *);
rtx
gen_split_1103 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9566 "../.././gcc/config/i386/i386.md"
{
  ix86_split_copysign_const (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9583 */
extern rtx gen_split_1104 (rtx, rtx *);
rtx
gen_split_1104 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9594 "../.././gcc/config/i386/i386.md"
{
  ix86_split_copysign_var (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9599 */
rtx
gen_negdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9603 "../.././gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9605 */
rtx
gen_absdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9609 "../.././gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9641 */
rtx
gen_copysigndf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 9646 "../.././gcc/config/i386/i386.md"
{
  ix86_expand_copysign (operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9651 */
extern rtx gen_split_1108 (rtx, rtx *);
rtx
gen_split_1108 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9662 "../.././gcc/config/i386/i386.md"
{
  ix86_split_copysign_const (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9679 */
extern rtx gen_split_1109 (rtx, rtx *);
rtx
gen_split_1109 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 9690 "../.././gcc/config/i386/i386.md"
{
  ix86_split_copysign_var (operands);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9695 */
rtx
gen_negxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9699 "../.././gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (NEG, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9701 */
rtx
gen_absxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 9705 "../.././gcc/config/i386/i386.md"
ix86_expand_fp_absneg_operator (ABS, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9719 */
extern rtx gen_split_1112 (rtx, rtx *);
rtx
gen_split_1112 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_e (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9727 */
extern rtx gen_split_1113 (rtx, rtx *);
rtx
gen_split_1113 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 9735 "../.././gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[0]);
  enum machine_mode vmode = GET_MODE (operands[2]);
  rtx tmp;
  
  operands[0] = simplify_gen_subreg (vmode, operands[0], mode, 0);
  operands[1] = simplify_gen_subreg (vmode, operands[1], mode, 0);
  if (operands_match_p (operands[0], operands[2]))
    {
      tmp = operands[1];
      operands[1] = operands[2];
      operands[2] = tmp;
    }
  if (GET_CODE (operands[3]) == ABS)
    tmp = gen_rtx_AND (vmode, operands[1], operands[2]);
  else
    tmp = gen_rtx_XOR (vmode, operands[1], operands[2]);
  operands[3] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9755 */
extern rtx gen_split_1114 (rtx, rtx *);
rtx
gen_split_1114 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9763 "../.././gcc/config/i386/i386.md"
{ 
  rtx tmp;
  operands[0] = gen_lowpart (SImode, operands[0]);
  if (GET_CODE (operands[1]) == ABS)
    {
      tmp = gen_int_mode (0x7fffffff, SImode);
      tmp = gen_rtx_AND (SImode, operands[0], tmp);
    }
  else
    {
      tmp = gen_int_mode (0x80000000, SImode);
      tmp = gen_rtx_XOR (SImode, operands[0], tmp);
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9779 */
extern rtx gen_split_1115 (rtx, rtx *);
rtx
gen_split_1115 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9787 "../.././gcc/config/i386/i386.md"
{
  rtx tmp;
  if (TARGET_64BIT)
    {
      tmp = gen_lowpart (DImode, operands[0]);
      tmp = gen_rtx_ZERO_EXTRACT (DImode, tmp, const1_rtx, GEN_INT (63));
      operands[0] = tmp;

      if (GET_CODE (operands[1]) == ABS)
	tmp = const0_rtx;
      else
	tmp = gen_rtx_NOT (DImode, tmp);
    }
  else
    {
      operands[0] = gen_highpart (SImode, operands[0]);
      if (GET_CODE (operands[1]) == ABS)
	{
	  tmp = gen_int_mode (0x7fffffff, SImode);
	  tmp = gen_rtx_AND (SImode, operands[0], tmp);
	}
      else
	{
	  tmp = gen_int_mode (0x80000000, SImode);
	  tmp = gen_rtx_XOR (SImode, operands[0], tmp);
	}
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9817 */
extern rtx gen_split_1116 (rtx, rtx *);
rtx
gen_split_1116 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9825 "../.././gcc/config/i386/i386.md"
{
  rtx tmp;
  operands[0] = gen_rtx_REG (SImode,
			     true_regnum (operands[0])
			     + (TARGET_64BIT ? 1 : 2));
  if (GET_CODE (operands[1]) == ABS)
    {
      tmp = GEN_INT (0x7fff);
      tmp = gen_rtx_AND (SImode, operands[0], tmp);
    }
  else
    {
      tmp = GEN_INT (0x8000);
      tmp = gen_rtx_XOR (SImode, operands[0], tmp);
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:9843 */
extern rtx gen_split_1117 (rtx, rtx *);
rtx
gen_split_1117 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 9851 "../.././gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[0]);
  int size = mode == XFmode ? 10 : GET_MODE_SIZE (mode);
  rtx tmp;

  operands[0] = adjust_address (operands[0], QImode, size - 1);
  if (GET_CODE (operands[1]) == ABS)
    {
      tmp = gen_int_mode (0x7f, QImode);
      tmp = gen_rtx_AND (QImode, operands[0], tmp);
    }
  else
    {
      tmp = gen_int_mode (0x80, QImode);
      tmp = gen_rtx_XOR (QImode, operands[0], tmp);
    }
  operands[1] = tmp;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10019 */
rtx
gen_one_cmplsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10023 "../.././gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10054 */
extern rtx gen_split_1119 (rtx, rtx *);
rtx
gen_split_1119 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10067 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (SImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10082 */
extern rtx gen_split_1120 (rtx, rtx *);
rtx
gen_split_1120 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10095 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (SImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	constm1_rtx))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10097 */
rtx
gen_one_cmplhi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10101 "../.././gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10123 */
extern rtx gen_split_1122 (rtx, rtx *);
rtx
gen_split_1122 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10136 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (HImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (HImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10139 */
rtx
gen_one_cmplqi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 10143 "../.././gcc/config/i386/i386.md"
ix86_expand_unary_operator (NOT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (QImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10167 */
extern rtx gen_split_1124 (rtx, rtx *);
rtx
gen_split_1124 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 10180 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_XOR (QImode,
	operand3,
	constm1_rtx),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_XOR (QImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10292 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10297 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10443 */
extern rtx gen_peephole2_1126 (rtx, rtx *);
rtx
gen_peephole2_1126 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 10452 "../.././gcc/config/i386/i386.md"
ix86_split_ashl (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10454 */
extern rtx gen_split_1127 (rtx, rtx *);
rtx
gen_split_1127 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10462 "../.././gcc/config/i386/i386.md"
ix86_split_ashl (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10481 */
rtx
gen_x86_shift_adj_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)]),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand1,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand3,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10497 */
rtx
gen_x86_shift_adj_2 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10502 "../.././gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  ix86_expand_clear (operands[1]);

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10525 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10531 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10573 */
extern rtx gen_split_1131 (rtx, rtx *);
rtx
gen_split_1131 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10582 "../.././gcc/config/i386/i386.md"
{
  rtx pat;
  enum machine_mode mode = GET_MODE (operands[0]);

  if (GET_MODE_SIZE (mode) < 4)
    operands[0] = gen_lowpart (SImode, operands[0]);
  if (mode != Pmode)
    operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_int_mode (1 << INTVAL (operands[2]), Pmode);

  pat = gen_rtx_MULT (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10600 */
extern rtx gen_split_1132 (rtx, rtx *);
rtx
gen_split_1132 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 10608 "../.././gcc/config/i386/i386.md"
{
  rtx pat, clob;
  emit_move_insn (operands[1], operands[0]);
  pat = gen_rtx_SET (VOIDmode, operands[0],
		     gen_rtx_ASHIFT (GET_MODE (operands[0]),
				     operands[0], operands[2]));
  clob = gen_rtx_CLOBBER (VOIDmode, gen_rtx_REG (CCmode, FLAGS_REG));
  emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2, pat, clob)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10784 */
rtx
gen_ashlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10790 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:10940 */
rtx
gen_ashlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 10946 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11206 */
rtx
gen_ashrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11211 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11333 */
extern rtx gen_peephole2_1136 (rtx, rtx *);
rtx
gen_peephole2_1136 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 11342 "../.././gcc/config/i386/i386.md"
ix86_split_ashr (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11344 */
extern rtx gen_split_1137 (rtx, rtx *);
rtx
gen_split_1137 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11352 "../.././gcc/config/i386/i386.md"
ix86_split_ashr (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11370 */
rtx
gen_x86_shift_adj_3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11375 "../.././gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  emit_insn (gen_ashrsi3_31 (operands[1], operands[1], GEN_INT (31)));

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11431 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11437 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11582 */
rtx
gen_ashrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11588 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11681 */
rtx
gen_ashrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11687 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ASHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11867 */
rtx
gen_lshrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 11872 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11977 */
extern rtx gen_peephole2_1143 (rtx, rtx *);
rtx
gen_peephole2_1143 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 11986 "../.././gcc/config/i386/i386.md"
ix86_split_lshr (operands, operands[3], DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11988 */
extern rtx gen_split_1144 (rtx, rtx *);
rtx
gen_split_1144 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 11996 "../.././gcc/config/i386/i386.md"
ix86_split_lshr (operands, NULL_RTX, DImode); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:11998 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12004 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12150 */
rtx
gen_lshrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12156 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12249 */
rtx
gen_lshrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12255 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (LSHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12377 */
rtx
gen_rotldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12383 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      ix86_expand_binary_operator (ROTATE, DImode, operands);
      DONE;
    }
  if (!const_1_to_31_operand (operands[2], VOIDmode))
    FAIL;
  emit_insn (gen_ix86_rotldi3 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12397 */
extern rtx gen_split_1149 (rtx, rtx *);
rtx
gen_split_1149 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 12419 "../.././gcc/config/i386/i386.md"
split_di (operands, 1, operands + 4, operands + 5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand4),
	operand2),
	gen_rtx_LSHIFTRT (SImode,
	operand5,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand5),
	copy_rtx (operand2)),
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand3),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12447 */
rtx
gen_rotlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12453 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12506 */
rtx
gen_rotlhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12512 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12540 */
rtx
gen_rotlqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12546 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATE, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12601 */
rtx
gen_rotrdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12607 "../.././gcc/config/i386/i386.md"
{
  if (TARGET_64BIT)
    {
      ix86_expand_binary_operator (ROTATERT, DImode, operands);
      DONE;
    }
  if (!const_1_to_31_operand (operands[2], VOIDmode))
    FAIL;
  emit_insn (gen_ix86_rotrdi3 (operands[0], operands[1], operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12621 */
extern rtx gen_split_1154 (rtx, rtx *);
rtx
gen_split_1154 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 12643 "../.././gcc/config/i386/i386.md"
split_di (operands, 1, operands + 4, operands + 5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand4),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand4),
	operand2),
	gen_rtx_ASHIFT (SImode,
	operand5,
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand5),
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand5),
	copy_rtx (operand2)),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand3),
	gen_rtx_MINUS (QImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (32)],
	copy_rtx (operand2))))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12671 */
rtx
gen_rotrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12677 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12733 */
rtx
gen_rotrhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12739 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12767 */
rtx
gen_rotrqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 12773 "../.././gcc/config/i386/i386.md"
ix86_expand_binary_operator (ROTATERT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 17));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12830 */
rtx
gen_extv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 12836 "../.././gcc/config/i386/i386.md"
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12847 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 12853 "../.././gcc/config/i386/i386.md"
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:12864 */
rtx
gen_insv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 12870 "../.././gcc/config/i386/i386.md"
{
  /* Handle insertions to %ah et al.  */
  if (INTVAL (operands[1]) != 8 || INTVAL (operands[2]) != 8)
    FAIL;

  /* From mips.md: insert_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! ext_register_operand (operands[0], VOIDmode))
    FAIL;

  if (TARGET_64BIT)
    emit_insn (gen_movdi_insv_1_rex64 (operands[0], operands[3]));
  else
    emit_insn (gen_movsi_insv_1 (operands[0], operands[3]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (VOIDmode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13039 */
rtx
gen_seq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13043 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (EQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13045 */
rtx
gen_sne (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13049 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (NE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13051 */
rtx
gen_sgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13055 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (GT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13057 */
rtx
gen_sgtu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13061 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (GTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13063 */
rtx
gen_slt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13067 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (LT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13069 */
rtx
gen_sltu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13073 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (LTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13075 */
rtx
gen_sge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13079 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (GE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13081 */
rtx
gen_sgeu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13085 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (GEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13087 */
rtx
gen_sle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13091 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (LE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13093 */
rtx
gen_sleu (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13097 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (LEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13099 */
rtx
gen_sunordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13103 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13105 */
rtx
gen_sordered (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13109 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (ORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13111 */
rtx
gen_suneq (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13115 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNEQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13117 */
rtx
gen_sunge (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13121 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNGE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13123 */
rtx
gen_sungt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13127 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13129 */
rtx
gen_sunle (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13133 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNLE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13135 */
rtx
gen_sunlt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13139 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (UNLT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13141 */
rtx
gen_sltgt (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 13145 "../.././gcc/config/i386/i386.md"
if (ix86_expand_setcc (LTGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13173 */
extern rtx gen_split_1179 (rtx, rtx *);
rtx
gen_split_1179 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13180 "../.././gcc/config/i386/i386.md"
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13184 */
extern rtx gen_split_1180 (rtx, rtx *);
rtx
gen_split_1180 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13191 "../.././gcc/config/i386/i386.md"
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13195 */
extern rtx gen_split_1181 (rtx, rtx *);
rtx
gen_split_1181 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13202 "../.././gcc/config/i386/i386.md"
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, ix86_reverse_condition (GET_CODE (new_op1),
					     GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13215 */
extern rtx gen_split_1182 (rtx, rtx *);
rtx
gen_split_1182 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13222 "../.././gcc/config/i386/i386.md"
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, ix86_reverse_condition (GET_CODE (new_op1),
					     GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13266 */
rtx
gen_beq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13272 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (EQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13274 */
rtx
gen_bne (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13280 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (NE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13282 */
rtx
gen_bgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13288 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (GT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13290 */
rtx
gen_bgtu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13296 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (GTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13298 */
rtx
gen_blt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13304 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (LT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13306 */
rtx
gen_bltu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13312 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (LTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13314 */
rtx
gen_bge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13320 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (GE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13322 */
rtx
gen_bgeu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13328 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (GEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13330 */
rtx
gen_ble (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13336 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (LE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13338 */
rtx
gen_bleu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13344 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (LEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13346 */
rtx
gen_bunordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13352 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (UNORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13354 */
rtx
gen_bordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13360 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (ORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13362 */
rtx
gen_buneq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13368 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (UNEQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13370 */
rtx
gen_bunge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13376 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (UNGE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13378 */
rtx
gen_bungt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13384 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (UNGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13386 */
rtx
gen_bunle (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13392 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (UNLE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13394 */
rtx
gen_bunlt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13400 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (UNLT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13402 */
rtx
gen_bltgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 13408 "../.././gcc/config/i386/i386.md"
ix86_expand_branch (LTGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13454 */
extern rtx gen_split_1201 (rtx, rtx *);
rtx
gen_split_1201 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13466 "../.././gcc/config/i386/i386.md"
{
  PUT_MODE (operands[0], VOIDmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13470 */
extern rtx gen_split_1202 (rtx, rtx *);
rtx
gen_split_1202 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 13482 "../.././gcc/config/i386/i386.md"
{
  rtx new_op0 = copy_rtx (operands[0]);
  operands[0] = new_op0;
  PUT_MODE (new_op0, VOIDmode);
  PUT_CODE (new_op0, ix86_reverse_condition (GET_CODE (new_op0),
					     GET_MODE (XEXP (new_op0, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op0, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13702 */
extern rtx gen_split_1203 (rtx, rtx *);
rtx
gen_split_1203 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13713 "../.././gcc/config/i386/i386.md"
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
	                operands[3], operands[4], NULL_RTX, NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13719 */
extern rtx gen_split_1204 (rtx, rtx *);
rtx
gen_split_1204 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13731 "../.././gcc/config/i386/i386.md"
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
	     		operands[3], operands[4], operands[5], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13737 */
extern rtx gen_split_1205 (rtx, rtx *);
rtx
gen_split_1205 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13750 "../.././gcc/config/i386/i386.md"
{
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[2]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13737 */
extern rtx gen_split_1206 (rtx, rtx *);
rtx
gen_split_1206 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13750 "../.././gcc/config/i386/i386.md"
{
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[2]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13759 */
extern rtx gen_split_1207 (rtx, rtx *);
rtx
gen_split_1207 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13772 "../.././gcc/config/i386/i386.md"
{
  operands[7] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[7]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13759 */
extern rtx gen_split_1208 (rtx, rtx *);
rtx
gen_split_1208 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 13772 "../.././gcc/config/i386/i386.md"
{
  operands[7] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[7] = gen_rtx_FLOAT (GET_MODE (operands[1]), operands[7]);
  ix86_split_fp_branch (swap_condition (GET_CODE (operands[0])),
			operands[3], operands[7],
			operands[4], operands[5], operands[6], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13798 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* ../.././gcc/config/i386/i386.md:13817 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 13821 "../.././gcc/config/i386/i386.md"
{
  /* In PIC mode, the table entries are stored GOT (32-bit) or PC (64-bit)
     relative.  Convert the relative address to an absolute address.  */
  if (flag_pic)
    {
      rtx op0, op1;
      enum rtx_code code;

      if (TARGET_64BIT)
	{
	  code = PLUS;
	  op0 = operands[0];
	  op1 = gen_rtx_LABEL_REF (Pmode, operands[1]);
	}
      else if (TARGET_MACHO || HAVE_AS_GOTOFF_IN_DATA)
	{
	  code = PLUS;
	  op0 = operands[0];
	  op1 = pic_offset_table_rtx;
	}
      else
	{
	  code = MINUS;
	  op0 = pic_offset_table_rtx;
	  op1 = operands[0];
	}

      operands[0] = expand_simple_binop (Pmode, code, op0, op1, NULL_RTX, 0,
					 OPTAB_DIRECT);
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13871 */
extern rtx gen_peephole2_1211 (rtx, rtx *);
rtx
gen_peephole2_1211 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 13884 "../.././gcc/config/i386/i386.md"
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), FLAGS_REG);
  operands[5] = gen_lowpart (QImode, operands[3]);
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13892 */
extern rtx gen_peephole2_1212 (rtx, rtx *);
rtx
gen_peephole2_1212 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 13906 "../.././gcc/config/i386/i386.md"
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), FLAGS_REG);
  operands[5] = gen_lowpart (QImode, operands[3]);
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13920 */
rtx
gen_call_pop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 13927 "../.././gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], operands[3], 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand3)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13967 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 13972 "../.././gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], NULL, 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:13977 */
rtx
gen_sibcall (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 13982 "../.././gcc/config/i386/i386.md"
{
  ix86_expand_call (NULL, operands[0], operands[1], operands[2], NULL, 1);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14049 */
rtx
gen_call_value_pop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 14057 "../.././gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2],
		    operands[3], operands[4], 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand4)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14063 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 14070 "../.././gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2], operands[3], NULL, 0);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14075 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 14082 "../.././gcc/config/i386/i386.md"
{
  ix86_expand_call (operands[0], operands[1], operands[2], operands[3], NULL, 1);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14089 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 14095 "../.././gcc/config/i386/i386.md"
{
  int i;

  /* In order to give reg-stack an easier job in validating two
     coprocessor registers as containing a possible return value,
     simply pretend the untyped call returns a complex long double
     value.  */

  ix86_expand_call ((TARGET_FLOAT_RETURNS_IN_80387
		     ? gen_rtx_REG (XCmode, FIRST_FLOAT_REG) : NULL),
		    operands[0], const0_rtx, GEN_INT (SSE_REGPARM_MAX - 1),
		    NULL, 0);

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  emit_insn (gen_blockage (const0_rtx));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14138 */
rtx
gen_return (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14141 "../.././gcc/config/i386/i386.md"
{
  if (current_function_pops_args)
    {
      rtx popc = GEN_INT (current_function_pops_args);
      emit_jump_insn (gen_return_pop_internal (popc));
      DONE;
    }
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14216 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14219 "../.././gcc/config/i386/i386.md"
ix86_expand_prologue (); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14238 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14241 "../.././gcc/config/i386/i386.md"
ix86_expand_epilogue (1); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14243 */
rtx
gen_sibcall_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
#line 14246 "../.././gcc/config/i386/i386.md"
ix86_expand_epilogue (0); DONE;
  }
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14248 */
rtx
gen_eh_return (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 14251 "../.././gcc/config/i386/i386.md"
{
  rtx tmp, sa = EH_RETURN_STACKADJ_RTX, ra = operands[0];

  /* Tricky bit: we write the address of the handler to which we will
     be returning into someone else's stack frame, one word below the
     stack address we wish to restore.  */
  tmp = gen_rtx_PLUS (Pmode, arg_pointer_rtx, sa);
  tmp = plus_constant (tmp, -UNITS_PER_WORD);
  tmp = gen_rtx_MEM (Pmode, tmp);
  emit_move_insn (tmp, ra);

  if (Pmode == SImode)
    emit_jump_insn (gen_eh_return_si (sa));
  else
    emit_jump_insn (gen_eh_return_di (sa));
  emit_barrier ();
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14270 */
extern rtx gen_split_1225 (rtx, rtx *);
rtx
gen_split_1225 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14278 "../.././gcc/config/i386/i386.md"
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14280 */
extern rtx gen_split_1226 (rtx, rtx *);
rtx
gen_split_1226 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 14288 "../.././gcc/config/i386/i386.md"
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14306 */
rtx
gen_ffssi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:14315 */
extern rtx gen_split_1228 (rtx, rtx *);
rtx
gen_split_1228 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 14332 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	constm1_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_EQ (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	copy_rtx (operand2),
	copy_rtx (operand0))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14334 */
extern rtx gen_split_1229 (rtx, rtx *);
rtx
gen_split_1229 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 14352 "../.././gcc/config/i386/i386.md"
{
  operands[3] = gen_lowpart (QImode, operands[2]);
  ix86_expand_clear (operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	copy_rtx (operand1))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand3),
	gen_rtx_EQ (QImode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IOR (SImode,
	copy_rtx (operand0),
	copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	const1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14422 */
rtx
gen_clzsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)],
	gen_rtx_CLZ (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand0,
	const_int_rtx[MAX_SAVED_CONST_INT + (31)])),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14498 */
rtx
gen_tls_global_dynamic_32 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14509 "../.././gcc/config/i386/i386.md"
{
  if (flag_pic)
    operands[2] = pic_offset_table_rtx;
  else
    {
      operands[2] = gen_reg_rtx (Pmode);
      emit_insn (gen_set_got (operands[2]));
    }
  operands[3] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand2,
		operand1,
		operand3),
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14531 */
rtx
gen_tls_global_dynamic_64 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 14537 "../.././gcc/config/i386/i386.md"
{
  operands[2] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (DImode,
	gen_rtx_MEM (QImode,
	operand2),
	const0_rtx)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14568 */
rtx
gen_tls_local_dynamic_base_32 (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx operand4 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
#line 14576 "../.././gcc/config/i386/i386.md"
{
  if (flag_pic)
    operands[1] = pic_offset_table_rtx;
  else
    {
      operands[1] = gen_reg_rtx (Pmode);
      emit_insn (gen_set_got (operands[1]));
    }
  operands[2] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14597 */
rtx
gen_tls_local_dynamic_base_64 (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
#line 14602 "../.././gcc/config/i386/i386.md"
{
  operands[1] = ix86_tls_get_addr ();
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (DImode,
	gen_rtx_MEM (QImode,
	operand1),
	const0_rtx)),
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	18))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:14609 */
extern rtx gen_split_1235 (rtx, rtx *);
rtx
gen_split_1235 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 14629 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand3,
		operand2),
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	operand5),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15154 */
extern rtx gen_split_1236 (rtx, rtx *);
rtx
gen_split_1236 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15162 "../.././gcc/config/i386/i386.md"
{ 
  operands[4] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[4],
					  operands[2])));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15154 */
extern rtx gen_split_1237 (rtx, rtx *);
rtx
gen_split_1237 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15162 "../.././gcc/config/i386/i386.md"
{ 
  operands[4] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[4],
					  operands[2])));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15174 */
extern rtx gen_split_1238 (rtx, rtx *);
rtx
gen_split_1238 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15182 "../.././gcc/config/i386/i386.md"
{
  operands[4] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[1],
					  operands[4])));
  ix86_free_from_memory (GET_MODE (operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15174 */
extern rtx gen_split_1239 (rtx, rtx *);
rtx
gen_split_1239 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 15182 "../.././gcc/config/i386/i386.md"
{
  operands[4] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[1],
					  operands[4])));
  ix86_free_from_memory (GET_MODE (operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15196 */
rtx
gen_sqrtsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15200 "../.././gcc/config/i386/i386.md"
{
  if (!TARGET_SSE_MATH)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15234 */
rtx
gen_sqrtdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15238 "../.././gcc/config/i386/i386.md"
{
  if (!(TARGET_SSE2 && TARGET_SSE_MATH))
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15329 */
rtx
gen_fmodsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15336 "../.././gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn(gen_extendsfxf2 (op1, operands[1]));
  emit_insn(gen_extendsfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fpremxf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15354 */
rtx
gen_fmoddf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15361 "../.././gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_extenddfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fpremxf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15379 */
rtx
gen_fmodxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15385 "../.././gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  emit_label (label);

  emit_insn (gen_fpremxf4 (operands[1], operands[2],
			   operands[1], operands[2]));
  ix86_emit_fp_unordered_jump (label);

  emit_move_insn (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15414 */
rtx
gen_dremsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15421 "../.././gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn(gen_extendsfxf2 (op1, operands[1]));
  emit_insn(gen_extendsfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fprem1xf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15439 */
rtx
gen_dremdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15446 "../.././gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  rtx op1 = gen_reg_rtx (XFmode);
  rtx op2 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_extenddfxf2 (op2, operands[2]));

  emit_label (label);

  emit_insn (gen_fprem1xf4 (op1, op2, op1, op2));
  ix86_emit_fp_unordered_jump (label);

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15464 */
rtx
gen_dremxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15470 "../.././gcc/config/i386/i386.md"
{
  rtx label = gen_label_rtx ();

  emit_label (label);

  emit_insn (gen_fprem1xf4 (operands[1], operands[2],
			    operands[1], operands[2]));
  ix86_emit_fp_unordered_jump (label);

  emit_move_insn (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15584 */
extern rtx gen_split_1248 (rtx, rtx *);
rtx
gen_split_1248 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15593 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15595 */
extern rtx gen_split_1249 (rtx, rtx *);
rtx
gen_split_1249 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15604 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15619 */
extern rtx gen_split_1250 (rtx, rtx *);
rtx
gen_split_1250 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15628 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15630 */
extern rtx gen_split_1251 (rtx, rtx *);
rtx
gen_split_1251 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15639 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15656 */
extern rtx gen_split_1252 (rtx, rtx *);
rtx
gen_split_1252 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15668 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		gen_rtx_FLOAT_EXTEND (DFmode,
	operand2)),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15670 */
extern rtx gen_split_1253 (rtx, rtx *);
rtx
gen_split_1253 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15682 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		gen_rtx_FLOAT_EXTEND (DFmode,
	operand2)),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15696 */
extern rtx gen_split_1254 (rtx, rtx *);
rtx
gen_split_1254 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15705 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	60)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15707 */
extern rtx gen_split_1255 (rtx, rtx *);
rtx
gen_split_1255 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 15716 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	61)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15736 */
extern rtx gen_peephole2_1256 (rtx, rtx *);
rtx
gen_peephole2_1256 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 15747 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15749 */
rtx
gen_tandf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15758 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (DFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15780 */
extern rtx gen_peephole2_1258 (rtx, rtx *);
rtx
gen_peephole2_1258 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 15791 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15793 */
rtx
gen_tansf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15802 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (SFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15823 */
extern rtx gen_peephole2_1260 (rtx, rtx *);
rtx
gen_peephole2_1260 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 15834 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	82)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		copy_rtx (operand2)),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15836 */
rtx
gen_tanxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15844 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	82)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	83)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15861 */
rtx
gen_atan2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15868 "../.././gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (DFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2df3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15875 */
rtx
gen_atandf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15884 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (DFmode);
  emit_move_insn (operands[2], CONST1_RTX (DFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15902 */
rtx
gen_atan2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15909 "../.././gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (SFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2sf3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15916 */
rtx
gen_atansf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15925 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (SFmode);
  emit_move_insn (operands[2], CONST1_RTX (SFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15942 */
rtx
gen_atan2xf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 15948 "../.././gcc/config/i386/i386.md"
{
  rtx copy = gen_reg_rtx (XFmode);
  emit_move_insn (copy, operands[1]);
  emit_insn (gen_atan2xf3_1 (operands[0], copy, operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15955 */
rtx
gen_atanxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15963 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[2], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15968 */
rtx
gen_asindf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 15983 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand2),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:15992 */
rtx
gen_asinsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16007 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand2),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16016 */
rtx
gen_asinxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16028 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<6; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MULT (XFmode,
	operand1,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_SQRT (XFmode,
	operand4)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand5,
		operand1),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16037 */
rtx
gen_acosdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16052 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand6),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16061 */
rtx
gen_acossf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16076 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<8; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[4], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand2,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_SQRT (XFmode,
	operand5)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand6),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16085 */
rtx
gen_acosxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16097 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<6; i++)
    operands[i] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MULT (XFmode,
	operand1,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_SQRT (XFmode,
	operand4)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand5),
	62)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16118 */
rtx
gen_logsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16130 "../.././gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16141 */
rtx
gen_logdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16153 "../.././gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16164 */
rtx
gen_logxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16171 "../.././gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (4); /* fldln2 */
  emit_move_insn (operands[2], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16179 */
rtx
gen_log10sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16191 "../.././gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16202 */
rtx
gen_log10df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16214 "../.././gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[3], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16225 */
rtx
gen_log10xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16232 "../.././gcc/config/i386/i386.md"
{
  rtx temp;

  operands[2] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (3); /* fldlg2 */
  emit_move_insn (operands[2], temp);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16240 */
rtx
gen_log2sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16252 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16260 */
rtx
gen_log2df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16272 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);

  emit_move_insn (operands[3], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand2,
		operand3),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16280 */
rtx
gen_log2xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16287 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[2], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	63)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16304 */
rtx
gen_log1psf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16310 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  ix86_emit_i387_log1p (op0, op1);
  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16320 */
rtx
gen_log1pdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16326 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  ix86_emit_i387_log1p (op0, op1);
  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16336 */
rtx
gen_log1pxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16341 "../.././gcc/config/i386/i386.md"
{
  ix86_emit_i387_log1p (operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16358 */
rtx
gen_logbsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16370 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	84)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	85)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16376 */
rtx
gen_logbdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16388 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
  operands[4] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	84)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	85)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16394 */
rtx
gen_logbxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16402 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	84)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	85)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16406 */
rtx
gen_ilogbsi2 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 16418 "../.././gcc/config/i386/i386.md"
{
  operands[2] = gen_reg_rtx (XFmode);
  operands[3] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	84)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	85)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand3)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16447 */
rtx
gen_expsf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16466 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16477 */
rtx
gen_expdf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16496 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16507 */
rtx
gen_expxf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16522 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[7], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_PLUS (XFmode,
	operand6,
	operand7)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16533 */
rtx
gen_exp10sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16552 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16563 */
rtx
gen_exp10df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[12];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16582 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<12; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[8], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_PLUS (XFmode,
	operand7,
	operand8)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand5),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand10)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16593 */
rtx
gen_exp10xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16608 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (6); /* fldl2t */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[7], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_PLUS (XFmode,
	operand6,
	operand7)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand8,
		operand4),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16619 */
rtx
gen_exp2sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16637 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16645 */
rtx
gen_exp2df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[10];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16663 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<10; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16671 */
rtx
gen_exp2xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[9];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16685 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=2; i<9; i++)
    operands[i] = gen_reg_rtx (XFmode);
  emit_move_insn (operands[6], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand2),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MINUS (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	67)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_PLUS (XFmode,
	operand5,
	operand6)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand3),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16693 */
rtx
gen_expm1df2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx operand13;
  rtx operand14;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[15];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16719 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<15; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[10], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
    operand13 = operands[13];
    operand14 = operands[14];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	86)),
		gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand13,
	gen_rtx_MINUS (XFmode,
	operand11,
	operand10)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand14,
	gen_rtx_PLUS (XFmode,
	operand13,
	operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand14)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16730 */
rtx
gen_expm1sf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx operand13;
  rtx operand14;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[15];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16756 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<15; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[3], temp);
  emit_move_insn (operands[10], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
    operand13 = operands[13];
    operand14 = operands[14];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_MULT (XFmode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand4),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_MINUS (XFmode,
	operand4,
	operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand6),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	86)),
		gen_rtx_SET (VOIDmode,
	operand9,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand7,
		operand5),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	86)),
		gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand10,
		operand9),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand13,
	gen_rtx_MINUS (XFmode,
	operand11,
	operand10)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand14,
	gen_rtx_PLUS (XFmode,
	operand13,
	operand8)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand14)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16767 */
rtx
gen_expm1xf2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx operand9;
  rtx operand10;
  rtx operand11;
  rtx operand12;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[13];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16790 "../.././gcc/config/i386/i386.md"
{
  rtx temp;
  int i;

  for (i=2; i<13; i++)
    operands[i] = gen_reg_rtx (XFmode);
  temp = standard_80387_constant_rtx (5); /* fldl2e */
  emit_move_insn (operands[2], temp);
  emit_move_insn (operands[9], CONST1_RTX (XFmode));  /* fld1 */
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
    operand8 = operands[8];
    operand9 = operands[9];
    operand10 = operands[10];
    operand11 = operands[11];
    operand12 = operands[12];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand3),
	65)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_MINUS (XFmode,
	operand3,
	operand4)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand5),
	67)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand6,
		operand4),
	87)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand10,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand8),
	86)),
		gen_rtx_SET (VOIDmode,
	operand11,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand9,
		operand8),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand12,
	gen_rtx_MINUS (XFmode,
	operand10,
	operand9)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (XFmode,
	operand12,
	operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16801 */
rtx
gen_ldexpdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16817 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<7; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16824 */
rtx
gen_ldexpsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16840 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<7; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	86)),
		gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand3,
		operand4),
	87)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16847 */
rtx
gen_ldexpxf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 16859 "../.././gcc/config/i386/i386.md"
{
  int i;

  for (i=3; i<5; i++)
    operands[i] = gen_reg_rtx (XFmode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_FLOAT (XFmode,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand3),
	86)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (2,
		operand1,
		operand3),
	87)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16877 */
rtx
gen_rintdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16883 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2 (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16894 */
rtx
gen_rintsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16900 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2 (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16911 */
rtx
gen_rintxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 16916 "../.././gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2 (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16921 */
extern rtx gen_split_1308 (rtx, rtx *);
rtx
gen_split_1308 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 16931 "../.././gcc/config/i386/i386.md"
{
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2 (operands[0], operands[1]));
  else
    {
      operands[2] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_with_temp (operands[0], operands[1],
					 operands[2]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16968 */
extern rtx gen_split_1309 (rtx, rtx *);
rtx
gen_split_1309 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 16978 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16980 */
extern rtx gen_split_1310 (rtx, rtx *);
rtx
gen_split_1310 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 16989 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66)),
		gen_rtx_CLOBBER (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16991 */
extern rtx gen_split_1311 (rtx, rtx *);
rtx
gen_split_1311 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17001 "../.././gcc/config/i386/i386.md"
{
  operands[2] = assign_386_stack_local (HImode, SLOT_TEMP);
  emit_insn (gen_fisthi2_with_temp (operands[0], operands[1],
					operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:16991 */
extern rtx gen_split_1312 (rtx, rtx *);
rtx
gen_split_1312 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17001 "../.././gcc/config/i386/i386.md"
{
  operands[2] = assign_386_stack_local (SImode, SLOT_TEMP);
  emit_insn (gen_fistsi2_with_temp (operands[0], operands[1],
					operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17031 */
extern rtx gen_split_1313 (rtx, rtx *);
rtx
gen_split_1313 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 17040 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17031 */
extern rtx gen_split_1314 (rtx, rtx *);
rtx
gen_split_1314 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 17040 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17042 */
extern rtx gen_split_1315 (rtx, rtx *);
rtx
gen_split_1315 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 17050 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17042 */
extern rtx gen_split_1316 (rtx, rtx *);
rtx
gen_split_1316 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 17050 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17052 */
rtx
gen_lrinthi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* ../.././gcc/config/i386/i386.md:17052 */
rtx
gen_lrintsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* ../.././gcc/config/i386/i386.md:17052 */
rtx
gen_lrintdi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	66));
}

/* ../.././gcc/config/i386/i386.md:17062 */
extern rtx gen_split_1320 (rtx, rtx *);
rtx
gen_split_1320 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17073 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);

  emit_insn (gen_frndintxf2_floor_i387 (operands[0], operands[1],
					operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17100 */
rtx
gen_floorxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17105 "../.././gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_floor (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17110 */
rtx
gen_floordf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17116 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_floor (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17127 */
rtx
gen_floorsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17133 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_floor (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17144 */
extern rtx gen_split_1324 (rtx, rtx *);
rtx
gen_split_1324 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17155 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fisthi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fisthi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17144 */
extern rtx gen_split_1325 (rtx, rtx *);
rtx
gen_split_1325 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17155 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistsi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fistsi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17144 */
extern rtx gen_split_1326 (rtx, rtx *);
rtx
gen_split_1326 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17155 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_FLOOR] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_FLOOR);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2_floor (operands[0], operands[1],
				      operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_floor_with_temp (operands[0], operands[1],
						  operands[2], operands[3],
						  operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17205 */
extern rtx gen_split_1327 (rtx, rtx *);
rtx
gen_split_1327 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17219 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17221 */
extern rtx gen_split_1328 (rtx, rtx *);
rtx
gen_split_1328 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17234 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17263 */
extern rtx gen_split_1329 (rtx, rtx *);
rtx
gen_split_1329 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17276 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17263 */
extern rtx gen_split_1330 (rtx, rtx *);
rtx
gen_split_1330 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17276 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17278 */
extern rtx gen_split_1331 (rtx, rtx *);
rtx
gen_split_1331 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17290 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17278 */
extern rtx gen_split_1332 (rtx, rtx *);
rtx
gen_split_1332 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17290 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17292 */
rtx
gen_lfloorhi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17292 */
rtx
gen_lfloorsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17292 */
rtx
gen_lfloordi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	74)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17303 */
extern rtx gen_split_1336 (rtx, rtx *);
rtx
gen_split_1336 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17314 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);

  emit_insn (gen_frndintxf2_ceil_i387 (operands[0], operands[1],
				       operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17341 */
rtx
gen_ceilxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17346 "../.././gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_ceil (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17351 */
rtx
gen_ceildf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17357 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_ceil (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17368 */
rtx
gen_ceilsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17374 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_ceil (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17385 */
extern rtx gen_split_1340 (rtx, rtx *);
rtx
gen_split_1340 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17396 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fisthi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, SLOT_TEMP);
      emit_insn (gen_fisthi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17385 */
extern rtx gen_split_1341 (rtx, rtx *);
rtx
gen_split_1341 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17396 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistsi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, SLOT_TEMP);
      emit_insn (gen_fistsi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17385 */
extern rtx gen_split_1342 (rtx, rtx *);
rtx
gen_split_1342 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17396 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_CEIL] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_CEIL);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fistdi2_ceil (operands[0], operands[1],
				     operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, SLOT_TEMP);
      emit_insn (gen_fistdi2_ceil_with_temp (operands[0], operands[1],
						 operands[2], operands[3],
						 operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17446 */
extern rtx gen_split_1343 (rtx, rtx *);
rtx
gen_split_1343 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17460 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17462 */
extern rtx gen_split_1344 (rtx, rtx *);
rtx
gen_split_1344 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
#line 17475 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17504 */
extern rtx gen_split_1345 (rtx, rtx *);
rtx
gen_split_1345 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17517 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17504 */
extern rtx gen_split_1346 (rtx, rtx *);
rtx
gen_split_1346 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 17517 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17519 */
extern rtx gen_split_1347 (rtx, rtx *);
rtx
gen_split_1347 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17531 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17519 */
extern rtx gen_split_1348 (rtx, rtx *);
rtx
gen_split_1348 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 17531 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17533 */
rtx
gen_lceilhi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17533 */
rtx
gen_lceilsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17533 */
rtx
gen_lceildi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	75)),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:17544 */
extern rtx gen_split_1352 (rtx, rtx *);
rtx
gen_split_1352 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17555 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_TRUNC] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_TRUNC);

  emit_insn (gen_frndintxf2_trunc_i387 (operands[0], operands[1],
					operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17582 */
rtx
gen_btruncxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17587 "../.././gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_trunc (operands[0], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17592 */
rtx
gen_btruncdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17598 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_trunc (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17609 */
rtx
gen_btruncsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17615 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_trunc (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17627 */
extern rtx gen_split_1356 (rtx, rtx *);
rtx
gen_split_1356 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 17638 "../.././gcc/config/i386/i386.md"
{
  ix86_optimize_mode_switching[I387_MASK_PM] = 1;

  operands[2] = assign_386_stack_local (HImode, SLOT_CW_STORED);
  operands[3] = assign_386_stack_local (HImode, SLOT_CW_MASK_PM);

  emit_insn (gen_frndintxf2_mask_pm_i387 (operands[0], operands[1],
					  operands[2], operands[3]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17665 */
rtx
gen_nearbyintxf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17670 "../.././gcc/config/i386/i386.md"
{
  emit_insn (gen_frndintxf2_mask_pm (operands[0], operands[1]));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17676 */
rtx
gen_nearbyintdf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17682 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extenddfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_mask_pm (op0, op1));

  emit_insn (gen_truncxfdf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17693 */
rtx
gen_nearbyintsf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 17699 "../.././gcc/config/i386/i386.md"
{
  rtx op0 = gen_reg_rtx (XFmode);
  rtx op1 = gen_reg_rtx (XFmode);

  emit_insn (gen_extendsfxf2 (op1, operands[1]));
  emit_insn (gen_frndintxf2_mask_pm (op0, op1));

  emit_insn (gen_truncxfsf2_i387_noop (operands[0], op0));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17719 */
rtx
gen_movmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 17725 "../.././gcc/config/i386/i386.md"
{
 if (ix86_expand_movmem (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17748 */
rtx
gen_strmov (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 17756 "../.././gcc/config/i386/i386.md"
{
  rtx adjust = GEN_INT (GET_MODE_SIZE (GET_MODE (operands[1])));

  /* If .md ever supports :P for Pmode, these can be directly
     in the pattern above.  */
  operands[5] = gen_rtx_PLUS (Pmode, operands[0], adjust);
  operands[6] = gen_rtx_PLUS (Pmode, operands[2], adjust);

  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmov_singleop (operands[0], operands[1],
				      operands[2], operands[3],
				      operands[5], operands[6]));
      DONE;
    }

  operands[4] = gen_reg_rtx (GET_MODE (operands[1]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand4));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand5),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	operand6),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:17775 */
rtx
gen_strmov_singleop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand1,
	operand3),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand4),
		gen_rtx_SET (VOIDmode,
	operand2,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* ../.././gcc/config/i386/i386.md:17898 */
rtx
gen_rep_mov (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5,
	rtx operand6)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand5),
		gen_rtx_SET (VOIDmode,
	operand2,
	operand6),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand3),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* ../.././gcc/config/i386/i386.md:18007 */
rtx
gen_setmemsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18013 "../.././gcc/config/i386/i386.md"
{
 /* If value to set is not zero, use the library routine.  */
 if (operands[2] != const0_rtx)
   FAIL;

 if (ix86_expand_clrmem (operands[0], operands[1], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18044 */
rtx
gen_strset (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 18051 "../.././gcc/config/i386/i386.md"
{
  if (GET_MODE (operands[1]) != GET_MODE (operands[2]))
    operands[1] = adjust_address_nv (operands[1], GET_MODE (operands[2]), 0);

  /* If .md ever supports :P for Pmode, this can be directly
     in the pattern above.  */
  operands[3] = gen_rtx_PLUS (Pmode, operands[0],
			      GEN_INT (GET_MODE_SIZE (GET_MODE
						      (operands[2]))));
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strset_singleop (operands[0], operands[1], operands[2],
				      operands[3]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand3),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18068 */
rtx
gen_strset_singleop (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand1,
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* ../.././gcc/config/i386/i386.md:18168 */
rtx
gen_rep_stos (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	operand4),
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

/* ../.././gcc/config/i386/i386.md:18267 */
rtx
gen_cmpstrnsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#line 18274 "../.././gcc/config/i386/i386.md"
{
  rtx addr1, addr2, out, outlow, count, countreg, align;

  /* Can't use this if the user has appropriated esi or edi.  */
  if (global_regs[4] || global_regs[5])
    FAIL;

  out = operands[0];
  if (GET_CODE (out) != REG)
    out = gen_reg_rtx (SImode);

  addr1 = copy_to_mode_reg (Pmode, XEXP (operands[1], 0));
  addr2 = copy_to_mode_reg (Pmode, XEXP (operands[2], 0));
  if (addr1 != XEXP (operands[1], 0))
    operands[1] = replace_equiv_address_nv (operands[1], addr1);
  if (addr2 != XEXP (operands[2], 0))
    operands[2] = replace_equiv_address_nv (operands[2], addr2);

  count = operands[3];
  countreg = ix86_zero_extend_to_Pmode (count);

  /* %%% Iff we are testing strict equality, we can use known alignment
     to good advantage.  This may be possible with combine, particularly
     once cc0 is dead.  */
  align = operands[4];

  emit_insn (gen_cld ());
  if (GET_CODE (count) == CONST_INT)
    {
      if (INTVAL (count) == 0)
	{
	  emit_move_insn (operands[0], const0_rtx);
	  DONE;
	}
      emit_insn (gen_cmpstrnqi_nz_1 (addr1, addr2, countreg, align,
				     operands[1], operands[2]));
    }
  else
    {
      if (TARGET_64BIT)
	emit_insn (gen_cmpdi_1_rex64 (countreg, countreg));
      else
	emit_insn (gen_cmpsi_1 (countreg, countreg));
      emit_insn (gen_cmpstrnqi_1 (addr1, addr2, countreg, align,
				  operands[1], operands[2]));
    }

  outlow = gen_lowpart (QImode, out);
  emit_insn (gen_cmpintqi (outlow));
  emit_move_insn (out, gen_rtx_SIGN_EXTEND (SImode, outlow));

  if (operands[0] != out)
    emit_move_insn (operands[0], out);

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18333 */
rtx
gen_cmpintqi (rtx operand0)
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
#line 18343 "../.././gcc/config/i386/i386.md"
operands[1] = gen_reg_rtx (QImode);
   operands[2] = gen_reg_rtx (QImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18349 */
rtx
gen_cmpstrnqi_nz_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand4,
	operand5)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* ../.././gcc/config/i386/i386.md:18396 */
rtx
gen_cmpstrnqi_1 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand2,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	operand4,
	operand5),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* ../.././gcc/config/i386/i386.md:18450 */
rtx
gen_strlensi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18456 "../.././gcc/config/i386/i386.md"
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18463 */
rtx
gen_strlendi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18469 "../.././gcc/config/i386/i386.md"
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	20)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18476 */
rtx
gen_strlenqi_1 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand2),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:18528 */
extern rtx gen_peephole2_1375 (rtx, rtx *);
rtx
gen_peephole2_1375 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 18557 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5))),
		gen_rtx_USE (VOIDmode,
	operand6),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18560 */
extern rtx gen_peephole2_1376 (rtx, rtx *);
rtx
gen_peephole2_1376 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 18595 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand6,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5)),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18640 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18646 "../.././gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18683 */
rtx
gen_movhicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18689 "../.././gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18705 */
rtx
gen_movqicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18711 "../.././gcc/config/i386/i386.md"
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (QImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18713 */
extern rtx gen_split_1380 (rtx, rtx *);
rtx
gen_split_1380 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 18727 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_lowpart (SImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand4,
		const0_rtx),
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18733 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18739 "../.././gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18757 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18763 "../.././gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18797 */
extern rtx gen_split_1383 (rtx, rtx *);
rtx
gen_split_1383 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
#line 18813 "../.././gcc/config/i386/i386.md"
split_di (operands+2, 1, operands+5, operands+6);
   split_di (operands+3, 1, operands+7, operands+8);
   split_di (operands, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand4,
		const0_rtx),
	operand5,
	operand7)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand4),
		const0_rtx),
	operand6,
	operand8)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18817 */
rtx
gen_movxfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18823 "../.././gcc/config/i386/i386.md"
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (XFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18931 */
extern rtx gen_peephole2_1385 (rtx, rtx *);
rtx
gen_peephole2_1385 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 18944 "../.././gcc/config/i386/i386.md"
if (COMMUTATIVE_ARITH_P (operands[2]))
     operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[2]), GET_MODE (operands[2]),
				 operands[0], operands[1]);
   else
     operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[2]), GET_MODE (operands[2]),
				 operands[1], operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18952 */
rtx
gen_addqicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18958 "../.././gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18960 */
rtx
gen_addhicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18966 "../.././gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:18968 */
rtx
gen_addsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 18974 "../.././gcc/config/i386/i386.md"
if (!ix86_expand_int_addcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19105 */
rtx
gen_allocate_stack_worker (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 19108 "../.././gcc/config/i386/i386.md"
{
  if (reload_completed)
    {
      if (TARGET_64BIT)
	emit_insn (gen_allocate_stack_worker_rex64_postreload (operands[0]));
      else
	emit_insn (gen_allocate_stack_worker_postreload (operands[0]));
    }
  else
    {
      if (TARGET_64BIT)
	emit_insn (gen_allocate_stack_worker_rex64 (operands[0]));
      else
	emit_insn (gen_allocate_stack_worker_1 (operands[0]));
    }
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19137 */
rtx
gen_allocate_stack_worker_postreload (rtx operand0)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:19157 */
rtx
gen_allocate_stack_worker_rex64_postreload (rtx operand0)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (1,
		operand0),
	1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_MINUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_hard_reg_clobber (CCmode, 17)));
}

/* ../.././gcc/config/i386/i386.md:19166 */
rtx
gen_allocate_stack (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 19175 "../.././gcc/config/i386/i386.md"
{
#ifdef CHECK_STACK_LIMIT
  if (GET_CODE (operands[1]) == CONST_INT
      && INTVAL (operands[1]) < CHECK_STACK_LIMIT)
    emit_insn (gen_subsi3 (stack_pointer_rtx, stack_pointer_rtx,
			   operands[1]));
  else 
#endif
    emit_insn (gen_allocate_stack_worker (copy_to_mode_reg (SImode,
							    operands[1])));

  emit_move_insn (operands[0], virtual_stack_dynamic_rtx);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19190 */
rtx
gen_builtin_setjmp_receiver (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 19193 "../.././gcc/config/i386/i386.md"
{
  emit_insn (gen_set_got (pic_offset_table_rtx));
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_LABEL_REF (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19200 */
extern rtx gen_split_1394 (rtx, rtx *);
rtx
gen_split_1394 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 19216 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   if (GET_CODE (operands[3]) != ASHIFT)
     operands[2] = gen_lowpart (SImode, operands[2]);
   PUT_MODE (operands[3], SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19226 */
extern rtx gen_split_1395 (rtx, rtx *);
rtx
gen_split_1395 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
#line 19245 "../.././gcc/config/i386/i386.md"
{
  operands[4]
    = gen_int_mode (INTVAL (operands[4])
		    & GET_MODE_MASK (GET_MODE (operands[1])), SImode);
  operands[1] = gen_lowpart (SImode, operands[1]);
  operands[3] = gen_lowpart (SImode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx_AND (SImode,
	operand3,
	operand4),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_AND (SImode,
	copy_rtx (operand3),
	copy_rtx (operand4))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19257 */
extern rtx gen_split_1396 (rtx, rtx *);
rtx
gen_split_1396 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 19271 "../.././gcc/config/i386/i386.md"
{
  operands[3]
    = gen_int_mode (INTVAL (operands[3])
		    & GET_MODE_MASK (GET_MODE (operands[2])), SImode);
  operands[2] = gen_lowpart (SImode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	operand2,
	operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19278 */
extern rtx gen_split_1397 (rtx, rtx *);
rtx
gen_split_1397 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 19289 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19292 */
extern rtx gen_split_1398 (rtx, rtx *);
rtx
gen_split_1398 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 19301 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19304 */
extern rtx gen_split_1399 (rtx, rtx *);
rtx
gen_split_1399 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
#line 19316 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_lowpart (SImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19325 */
extern rtx gen_peephole2_1400 (rtx, rtx *);
rtx
gen_peephole2_1400 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19333 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19335 */
extern rtx gen_peephole2_1401 (rtx, rtx *);
rtx
gen_peephole2_1401 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19343 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19347 */
extern rtx gen_peephole2_1402 (rtx, rtx *);
rtx
gen_peephole2_1402 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19355 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19357 */
extern rtx gen_peephole2_1403 (rtx, rtx *);
rtx
gen_peephole2_1403 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19365 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19367 */
extern rtx gen_peephole2_1404 (rtx, rtx *);
rtx
gen_peephole2_1404 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19375 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19379 */
extern rtx gen_peephole2_1405 (rtx, rtx *);
rtx
gen_peephole2_1405 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19391 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19393 */
extern rtx gen_peephole2_1406 (rtx, rtx *);
rtx
gen_peephole2_1406 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19405 "../.././gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19407 */
extern rtx gen_peephole2_1407 (rtx, rtx *);
rtx
gen_peephole2_1407 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19419 "../.././gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19421 */
extern rtx gen_peephole2_1408 (rtx, rtx *);
rtx
gen_peephole2_1408 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19430 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19432 */
extern rtx gen_peephole2_1409 (rtx, rtx *);
rtx
gen_peephole2_1409 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19440 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19442 */
extern rtx gen_peephole2_1410 (rtx, rtx *);
rtx
gen_peephole2_1410 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19450 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19453 */
extern rtx gen_peephole2_1411 (rtx, rtx *);
rtx
gen_peephole2_1411 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19462 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand3),
		const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19475 */
extern rtx gen_peephole2_1412 (rtx, rtx *);
rtx
gen_peephole2_1412 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19487 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19489 */
extern rtx gen_peephole2_1413 (rtx, rtx *);
rtx
gen_peephole2_1413 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19501 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19503 */
extern rtx gen_peephole2_1414 (rtx, rtx *);
rtx
gen_peephole2_1414 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19515 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	constm1_rtx)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19524 */
extern rtx gen_peephole2_1415 (rtx, rtx *);
rtx
gen_peephole2_1415 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19541 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	operand2,
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19546 */
extern rtx gen_peephole2_1416 (rtx, rtx *);
rtx
gen_peephole2_1416 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19562 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (QImode,
	operand2,
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_AND (QImode,
	copy_rtx (operand2),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19564 */
extern rtx gen_peephole2_1417 (rtx, rtx *);
rtx
gen_peephole2_1417 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19596 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand2,
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	operand3),
		const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand2),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)],
	const_int_rtx[MAX_SAVED_CONST_INT + (8)]),
	copy_rtx (operand3))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19599 */
extern rtx gen_peephole2_1418 (rtx, rtx *);
rtx
gen_peephole2_1418 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19611 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand0),
		copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19613 */
extern rtx gen_peephole2_1419 (rtx, rtx *);
rtx
gen_peephole2_1419 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19625 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		copy_rtx (operand0))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19633 */
extern rtx gen_peephole2_1420 (rtx, rtx *);
rtx
gen_peephole2_1420 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19646 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19648 */
extern rtx gen_peephole2_1421 (rtx, rtx *);
rtx
gen_peephole2_1421 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19661 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx_fmt_ee (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		copy_rtx (operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19664 */
extern rtx gen_peephole2_1422 (rtx, rtx *);
rtx
gen_peephole2_1422 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19673 "../.././gcc/config/i386/i386.md"
{
  operands[0] = gen_lowpart (word_mode, operands[0]);
}
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19677 */
extern rtx gen_peephole2_1423 (rtx, rtx *);
rtx
gen_peephole2_1423 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19688 */
extern rtx gen_peephole2_1424 (rtx, rtx *);
rtx
gen_peephole2_1424 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19698 "../.././gcc/config/i386/i386.md"
operands[0] = gen_lowpart (GET_MODE (operands[0]) == DImode ? DImode : SImode,
			      operands[0]);
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	constm1_rtx),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19703 */
extern rtx gen_peephole2_1425 (rtx, rtx *);
rtx
gen_peephole2_1425 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19710 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19712 */
extern rtx gen_peephole2_1426 (rtx, rtx *);
rtx
gen_peephole2_1426 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19719 "../.././gcc/config/i386/i386.md"
operands[2] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19721 */
extern rtx gen_peephole2_1427 (rtx, rtx *);
rtx
gen_peephole2_1427 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19728 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19730 */
extern rtx gen_peephole2_1428 (rtx, rtx *);
rtx
gen_peephole2_1428 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19738 "../.././gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19740 */
extern rtx gen_peephole2_1429 (rtx, rtx *);
rtx
gen_peephole2_1429 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19748 "../.././gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19750 */
extern rtx gen_peephole2_1430 (rtx, rtx *);
rtx
gen_peephole2_1430 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19759 "../.././gcc/config/i386/i386.md"
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[2])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19780 */
extern rtx gen_peephole2_1431 (rtx, rtx *);
rtx
gen_peephole2_1431 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19790 */
extern rtx gen_peephole2_1432 (rtx, rtx *);
rtx
gen_peephole2_1432 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19802 */
extern rtx gen_peephole2_1433 (rtx, rtx *);
rtx
gen_peephole2_1433 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19810 */
extern rtx gen_peephole2_1434 (rtx, rtx *);
rtx
gen_peephole2_1434 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19820 */
extern rtx gen_peephole2_1435 (rtx, rtx *);
rtx
gen_peephole2_1435 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19829 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19833 */
extern rtx gen_peephole2_1436 (rtx, rtx *);
rtx
gen_peephole2_1436 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19845 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19847 */
extern rtx gen_peephole2_1437 (rtx, rtx *);
rtx
gen_peephole2_1437 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19858 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19861 */
extern rtx gen_peephole2_1438 (rtx, rtx *);
rtx
gen_peephole2_1438 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19868 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19872 */
extern rtx gen_peephole2_1439 (rtx, rtx *);
rtx
gen_peephole2_1439 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19882 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19884 */
extern rtx gen_peephole2_1440 (rtx, rtx *);
rtx
gen_peephole2_1440 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19893 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19897 */
extern rtx gen_peephole2_1441 (rtx, rtx *);
rtx
gen_peephole2_1441 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 19910 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19912 */
extern rtx gen_peephole2_1442 (rtx, rtx *);
rtx
gen_peephole2_1442 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19922 */
extern rtx gen_peephole2_1443 (rtx, rtx *);
rtx
gen_peephole2_1443 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19934 */
extern rtx gen_peephole2_1444 (rtx, rtx *);
rtx
gen_peephole2_1444 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19942 */
extern rtx gen_peephole2_1445 (rtx, rtx *);
rtx
gen_peephole2_1445 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19952 */
extern rtx gen_peephole2_1446 (rtx, rtx *);
rtx
gen_peephole2_1446 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19961 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19965 */
extern rtx gen_peephole2_1447 (rtx, rtx *);
rtx
gen_peephole2_1447 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19977 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19979 */
extern rtx gen_peephole2_1448 (rtx, rtx *);
rtx
gen_peephole2_1448 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 19990 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:19993 */
extern rtx gen_peephole2_1449 (rtx, rtx *);
rtx
gen_peephole2_1449 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20000 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20004 */
extern rtx gen_peephole2_1450 (rtx, rtx *);
rtx
gen_peephole2_1450 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20014 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20016 */
extern rtx gen_peephole2_1451 (rtx, rtx *);
rtx
gen_peephole2_1451 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20025 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	const_int_rtx[MAX_SAVED_CONST_INT + (8)])))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20028 */
extern rtx gen_peephole2_1452 (rtx, rtx *);
rtx
gen_peephole2_1452 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20040 "../.././gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	copy_rtx (operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20042 */
extern rtx gen_peephole2_1453 (rtx, rtx *);
rtx
gen_peephole2_1453 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20056 "../.././gcc/config/i386/i386.md"
{ operands[2] = GEN_INT (INTVAL (operands[2]) - 1); }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand0),
	operand2),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20092 */
extern rtx gen_peephole2_1454 (rtx, rtx *);
rtx
gen_peephole2_1454 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20104 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	copy_rtx (operand3),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20106 */
extern rtx gen_peephole2_1455 (rtx, rtx *);
rtx
gen_peephole2_1455 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20118 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	copy_rtx (operand3),
	operand2)),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20120 */
extern rtx gen_peephole2_1456 (rtx, rtx *);
rtx
gen_peephole2_1456 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20133 "../.././gcc/config/i386/i386.md"

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MULT (SImode,
	copy_rtx (operand3),
	operand2))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20139 */
extern rtx gen_peephole2_1457 (rtx, rtx *);
rtx
gen_peephole2_1457 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20150 "../.././gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20155 */
extern rtx gen_peephole2_1458 (rtx, rtx *);
rtx
gen_peephole2_1458 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20166 "../.././gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20171 */
extern rtx gen_peephole2_1459 (rtx, rtx *);
rtx
gen_peephole2_1459 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
#line 20181 "../.././gcc/config/i386/i386.md"
{
  if (!rtx_equal_p (operands[0], operands[1]))
    emit_move_insn (operands[0], operands[1]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	copy_rtx (operand0),
	copy_rtx (operand3))),
		gen_hard_reg_clobber (CCmode, 17))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20198 */
extern rtx gen_peephole2_1460 (rtx, rtx *);
rtx
gen_peephole2_1460 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
#line 20230 "../.././gcc/config/i386/i386.md"
{
  enum machine_mode mode = GET_MODE (operands[5]) == DImode ? DImode : SImode;
  int scale = 1 << INTVAL (operands[2]);
  rtx index = gen_lowpart (Pmode, operands[1]);
  rtx base = gen_lowpart (Pmode, operands[3]);
  rtx dest = gen_lowpart (mode, operands[5]);

  operands[1] = gen_rtx_PLUS (Pmode, base,
  			      gen_rtx_MULT (Pmode, index, GEN_INT (scale)));
  if (mode != Pmode)
    operands[1] = gen_rtx_SUBREG (mode, operands[1], 0);
  operands[0] = dest;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20434 */
rtx
gen_prefetch (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 20439 "../.././gcc/config/i386/i386.md"
{
  int rw = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  gcc_assert (rw == 0 || rw == 1);
  gcc_assert (locality >= 0 && locality <= 3);
  gcc_assert (GET_MODE (operands[0]) == Pmode
	      || GET_MODE (operands[0]) == VOIDmode);

  /* Use 3dNOW prefetch in case we are asking for write prefetch not
     supported by SSE counterpart or the SSE prefetch is not available
     (K6 machines).  Otherwise use SSE prefetch as it allows specifying
     of locality.  */
  if (TARGET_3DNOW && (!TARGET_PREFETCH_SSE || rw))
    operands[2] = GEN_INT (3);
  else
    operands[1] = const0_rtx;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20522 */
rtx
gen_stack_protect_set (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 20526 "../.././gcc/config/i386/i386.md"
{
#ifdef TARGET_THREAD_SSP_OFFSET
  if (TARGET_64BIT)
    emit_insn (gen_stack_tls_protect_set_di (operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
  else
    emit_insn (gen_stack_tls_protect_set_si (operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
#else
  if (TARGET_64BIT)
    emit_insn (gen_stack_protect_set_di (operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_set_si (operands[0], operands[1]));
#endif
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/i386.md:20579 */
rtx
gen_stack_protect_test (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 20584 "../.././gcc/config/i386/i386.md"
{
  rtx flags = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  ix86_compare_emitted = flags;

#ifdef TARGET_THREAD_SSP_OFFSET
  if (TARGET_64BIT)
    emit_insn (gen_stack_tls_protect_test_di (flags, operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
  else
    emit_insn (gen_stack_tls_protect_test_si (flags, operands[0],
					GEN_INT (TARGET_THREAD_SSP_OFFSET)));
#else
  if (TARGET_64BIT)
    emit_insn (gen_stack_protect_test_di (flags, operands[0], operands[1]));
  else
    emit_insn (gen_stack_protect_test_si (flags, operands[0], operands[1]));
#endif
  emit_jump_insn (gen_beq (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:25 */
rtx
gen_movv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V16QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:25 */
rtx
gen_movv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V8HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:25 */
rtx
gen_movv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V4SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:25 */
rtx
gen_movv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 55 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V2DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:103 */
rtx
gen_movv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 107 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V4SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:123 */
extern rtx gen_split_1469 (rtx, rtx *);
rtx
gen_split_1469 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 132 "../.././gcc/config/i386/sse.md"
{
  operands[1] = simplify_gen_subreg (SFmode, operands[1], V4SFmode, 0);
  operands[2] = CONST0_RTX (V4SFmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	operand1),
	operand2,
	const1_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:137 */
rtx
gen_movv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 141 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move (V2DFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:188 */
extern rtx gen_split_1471 (rtx, rtx *);
rtx
gen_split_1471 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
#line 193 "../.././gcc/config/i386/sse.md"
{
  operands[1] = simplify_gen_subreg (DFmode, operands[1], V2DFmode, 0);
  operands[2] = CONST0_RTX (DFmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:198 */
rtx
gen_pushv16qi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 201 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_push (V16QImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:198 */
rtx
gen_pushv8hi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 201 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_push (V8HImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:198 */
rtx
gen_pushv4si1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 201 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_push (V4SImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:198 */
rtx
gen_pushv2di1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 201 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_push (V2DImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:198 */
rtx
gen_pushv4sf1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 201 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_push (V4SFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:198 */
rtx
gen_pushv2df1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 201 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_push (V2DFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:206 */
rtx
gen_movmisalignv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 210 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V16QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:206 */
rtx
gen_movmisalignv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 210 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V8HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:206 */
rtx
gen_movmisalignv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 210 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V4SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:206 */
rtx
gen_movmisalignv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 210 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V2DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:206 */
rtx
gen_movmisalignv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 210 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V4SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:206 */
rtx
gen_movmisalignv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 210 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_move_misalign (V2DFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:293 */
rtx
gen_negv4sf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 297 "../.././gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (NEG, V4SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V4SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:299 */
rtx
gen_absv4sf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 303 "../.././gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (ABS, V4SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V4SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:305 */
rtx
gen_addv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 310 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:333 */
rtx
gen_subv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 338 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:361 */
rtx
gen_mulv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 366 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:389 */
rtx
gen_divv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 394 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (DIV, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:482 */
rtx
gen_smaxv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 487 "../.././gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V4SFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMAX, V4SFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:537 */
rtx
gen_sminv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 542 "../.././gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V4SFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMIN, V4SFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:703 */
rtx
gen_reduc_splus_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 707 "../.././gcc/config/i386/sse.md"
{
  if (TARGET_SSE3)
    {
      rtx tmp = gen_reg_rtx (V4SFmode);
      emit_insn (gen_sse3_haddv4sf3 (tmp, operands[1], operands[1]));
      emit_insn (gen_sse3_haddv4sf3 (operands[0], tmp, tmp));
    }
  else
    ix86_expand_reduc_v4sf (gen_addv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:719 */
rtx
gen_reduc_smax_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 723 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_reduc_v4sf (gen_smaxv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:728 */
rtx
gen_reduc_smin_v4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 732 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_reduc_v4sf (gen_sminv4sf3, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:794 */
rtx
gen_vcondv4sf (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 803 "../.././gcc/config/i386/sse.md"
{
  if (ix86_expand_fp_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:816 */
rtx
gen_andv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 821 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:841 */
rtx
gen_iorv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 846 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:857 */
rtx
gen_xorv4sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 862 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V4SFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1156 */
rtx
gen_sse_shufps (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1162 "../.././gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[3]);
  emit_insn (gen_sse_shufps_1 (operands[0], operands[1], operands[2],
			       GEN_INT ((mask >> 0) & 3),
			       GEN_INT ((mask >> 2) & 3),
			       GEN_INT (((mask >> 4) & 3) + 4),
			       GEN_INT (((mask >> 6) & 3) + 4)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1301 */
rtx
gen_vec_initv4sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1305 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1326 */
extern rtx gen_split_1501 (rtx, rtx *);
rtx
gen_split_1501 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1335 "../.././gcc/config/i386/sse.md"
{
  emit_move_insn (adjust_address (operands[0], SFmode, 0), operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1340 */
rtx
gen_vec_setv4sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1345 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1351 */
extern rtx gen_split_1503 (rtx, rtx *);
rtx
gen_split_1503 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1360 "../.././gcc/config/i386/sse.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SFmode, REGNO (op1));
  else
    op1 = gen_lowpart (SFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1370 */
rtx
gen_vec_extractv4sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1375 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1387 */
rtx
gen_negv2df2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1391 "../.././gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (NEG, V2DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (V2DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1393 */
rtx
gen_absv2df2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1397 "../.././gcc/config/i386/sse.md"
ix86_expand_fp_absneg_operator (ABS, V2DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V2DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1399 */
rtx
gen_addv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1404 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1427 */
rtx
gen_subv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1432 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1455 */
rtx
gen_mulv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1460 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1483 */
rtx
gen_divv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1488 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (DIV, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1534 */
rtx
gen_smaxv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1539 "../.././gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V2DFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMAX, V2DFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1589 */
rtx
gen_sminv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1594 "../.././gcc/config/i386/sse.md"
{
  if (!flag_finite_math_only)
    operands[1] = force_reg (V2DFmode, operands[1]);
  ix86_fixup_binary_operands_no_copy (SMIN, V2DFmode, operands);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1693 */
rtx
gen_reduc_splus_v2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1697 "../.././gcc/config/i386/sse.md"
{
  emit_insn (gen_sse3_haddv2df3 (operands[0], operands[1], operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1759 */
rtx
gen_vcondv2df (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 1768 "../.././gcc/config/i386/sse.md"
{
  if (ix86_expand_fp_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V2DFmode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1781 */
rtx
gen_andv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1786 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1806 */
rtx
gen_iorv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1811 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:1822 */
rtx
gen_xorv2df3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1827 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V2DFmode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2000 */
rtx
gen_sse2_cvtpd2dq (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2007 "../.././gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_UNSPEC (V2SImode,
	gen_rtvec (1,
		operand1),
	30),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2020 */
rtx
gen_sse2_cvttpd2dq (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2026 "../.././gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SImode,
	gen_rtx_FIX (V2SImode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2066 */
rtx
gen_sse2_cvtpd2ps (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2073 "../.././gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V2SFmode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4SFmode,
	gen_rtx_FLOAT_TRUNCATE (V2SFmode,
	operand1),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2134 */
extern rtx gen_split_1521 (rtx, rtx *);
rtx
gen_split_1521 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2144 "../.././gcc/config/i386/sse.md"
{
  rtx low = gen_rtx_REG (DFmode, REGNO (operands[1]));
  emit_move_insn (adjust_address (operands[0], DFmode, 0), low);
  emit_move_insn (adjust_address (operands[0], DFmode, 8), low);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2167 */
rtx
gen_sse2_shufpd (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 2173 "../.././gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[3]);
  emit_insn (gen_sse2_shufpd_1 (operands[0], operands[1], operands[2],
				GEN_INT (mask & 1),
				GEN_INT (mask & 2 ? 3 : 2)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2214 */
extern rtx gen_split_1523 (rtx, rtx *);
rtx
gen_split_1523 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2221 "../.././gcc/config/i386/sse.md"
{
  operands[1] = adjust_address (operands[1], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2238 */
extern rtx gen_split_1524 (rtx, rtx *);
rtx
gen_split_1524 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 2245 "../.././gcc/config/i386/sse.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (DFmode, REGNO (op1));
  else
    op1 = gen_lowpart (DFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2271 */
extern rtx gen_split_1525 (rtx, rtx *);
rtx
gen_split_1525 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2278 "../.././gcc/config/i386/sse.md"
{
  operands[0] = adjust_address (operands[0], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2300 */
extern rtx gen_split_1526 (rtx, rtx *);
rtx
gen_split_1526 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 2307 "../.././gcc/config/i386/sse.md"
{
  operands[0] = adjust_address (operands[0], DFmode, 8);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2371 */
rtx
gen_vec_setv2df (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2376 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2382 */
rtx
gen_vec_extractv2df (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2387 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2393 */
rtx
gen_vec_initv2df (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2397 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2408 */
rtx
gen_negv16qi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2414 "../.././gcc/config/i386/sse.md"
operands[2] = force_reg (V16QImode, CONST0_RTX (V16QImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V16QImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2408 */
rtx
gen_negv8hi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2414 "../.././gcc/config/i386/sse.md"
operands[2] = force_reg (V8HImode, CONST0_RTX (V8HImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8HImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2408 */
rtx
gen_negv4si2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2414 "../.././gcc/config/i386/sse.md"
operands[2] = force_reg (V4SImode, CONST0_RTX (V4SImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2408 */
rtx
gen_negv2di2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 2414 "../.././gcc/config/i386/sse.md"
operands[2] = force_reg (V2DImode, CONST0_RTX (V2DImode));
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2416 */
rtx
gen_addv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2421 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2416 */
rtx
gen_addv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2421 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2416 */
rtx
gen_addv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2421 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2416 */
rtx
gen_addv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2421 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (PLUS, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2453 */
rtx
gen_subv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2458 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2453 */
rtx
gen_subv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2458 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2453 */
rtx
gen_subv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2458 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2453 */
rtx
gen_subv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2458 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MINUS, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2490 */
rtx
gen_mulv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2495 "../.././gcc/config/i386/sse.md"
{
  rtx t[12], op0;
  int i;

  for (i = 0; i < 12; ++i)
    t[i] = gen_reg_rtx (V16QImode);

  /* Unpack data such that we've got a source byte in each low byte of
     each word.  We don't care what goes into the high byte of each word.
     Rather than trying to get zero in there, most convenient is to let
     it be a copy of the low byte.  */
  emit_insn (gen_sse2_punpckhbw (t[0], operands[1], operands[1]));
  emit_insn (gen_sse2_punpckhbw (t[1], operands[2], operands[2]));
  emit_insn (gen_sse2_punpcklbw (t[2], operands[1], operands[1]));
  emit_insn (gen_sse2_punpcklbw (t[3], operands[2], operands[2]));

  /* Multiply words.  The end-of-line annotations here give a picture of what
     the output of that instruction looks like.  Dot means don't care; the 
     letters are the bytes of the result with A being the most significant.  */
  emit_insn (gen_mulv8hi3 (gen_lowpart (V8HImode, t[4]), /* .A.B.C.D.E.F.G.H */
			   gen_lowpart (V8HImode, t[0]),
			   gen_lowpart (V8HImode, t[1])));
  emit_insn (gen_mulv8hi3 (gen_lowpart (V8HImode, t[5]), /* .I.J.K.L.M.N.O.P */
			   gen_lowpart (V8HImode, t[2]),
			   gen_lowpart (V8HImode, t[3])));

  /* Extract the relevant bytes and merge them back together.  */
  emit_insn (gen_sse2_punpckhbw (t[6], t[5], t[4]));	/* ..AI..BJ..CK..DL */
  emit_insn (gen_sse2_punpcklbw (t[7], t[5], t[4]));	/* ..EM..FN..GO..HP */
  emit_insn (gen_sse2_punpckhbw (t[8], t[7], t[6]));	/* ....AEIM....BFJN */
  emit_insn (gen_sse2_punpcklbw (t[9], t[7], t[6]));	/* ....CGKO....DHLP */
  emit_insn (gen_sse2_punpckhbw (t[10], t[9], t[8]));	/* ........ACEGIKMO */
  emit_insn (gen_sse2_punpcklbw (t[11], t[9], t[8]));	/* ........BDFHJLNP */

  op0 = operands[0];
  emit_insn (gen_sse2_punpcklbw (op0, t[11], t[10]));	/* ABCDEFGHIJKLMNOP */
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2534 */
rtx
gen_mulv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2539 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (MULT, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2632 */
rtx
gen_mulv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2637 "../.././gcc/config/i386/sse.md"
{
  rtx t1, t2, t3, t4, t5, t6, thirtytwo;
  rtx op0, op1, op2;

  op0 = operands[0];
  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V4SImode);
  t2 = gen_reg_rtx (V4SImode);
  t3 = gen_reg_rtx (V4SImode);
  t4 = gen_reg_rtx (V4SImode);
  t5 = gen_reg_rtx (V4SImode);
  t6 = gen_reg_rtx (V4SImode);
  thirtytwo = GEN_INT (32);

  /* Multiply elements 2 and 0.  */
  emit_insn (gen_sse2_umulv2siv2di3 (gen_lowpart (V2DImode, t1), op1, op2));

  /* Shift both input vectors down one element, so that elements 3 and 1
     are now in the slots for elements 2 and 0.  For K8, at least, this is
     faster than using a shuffle.  */
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t2),
			       gen_lowpart (TImode, op1), thirtytwo));
  emit_insn (gen_sse2_lshrti3 (gen_lowpart (TImode, t3),
			       gen_lowpart (TImode, op2), thirtytwo));

  /* Multiply elements 3 and 1.  */
  emit_insn (gen_sse2_umulv2siv2di3 (gen_lowpart (V2DImode, t4), t2, t3));

  /* Move the results in element 2 down to element 1; we don't care what
     goes in elements 2 and 3.  */
  emit_insn (gen_sse2_pshufd_1 (t5, t1, const0_rtx, const2_rtx,
				const0_rtx, const0_rtx));
  emit_insn (gen_sse2_pshufd_1 (t6, t4, const0_rtx, const2_rtx,
				const0_rtx, const0_rtx));

  /* Merge the parts back together.  */
  emit_insn (gen_sse2_punpckldq (op0, t5, t6));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2678 */
rtx
gen_mulv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2683 "../.././gcc/config/i386/sse.md"
{
  rtx t1, t2, t3, t4, t5, t6, thirtytwo;
  rtx op0, op1, op2;

  op0 = operands[0];
  op1 = operands[1];
  op2 = operands[2];
  t1 = gen_reg_rtx (V2DImode);
  t2 = gen_reg_rtx (V2DImode);
  t3 = gen_reg_rtx (V2DImode);
  t4 = gen_reg_rtx (V2DImode);
  t5 = gen_reg_rtx (V2DImode);
  t6 = gen_reg_rtx (V2DImode);
  thirtytwo = GEN_INT (32);

  /* Multiply low parts.  */
  emit_insn (gen_sse2_umulv2siv2di3 (t1, gen_lowpart (V4SImode, op1),
				     gen_lowpart (V4SImode, op2)));

  /* Shift input vectors left 32 bits so we can multiply high parts.  */
  emit_insn (gen_lshrv2di3 (t2, op1, thirtytwo));
  emit_insn (gen_lshrv2di3 (t3, op2, thirtytwo));

  /* Multiply high parts by low parts.  */
  emit_insn (gen_sse2_umulv2siv2di3 (t4, gen_lowpart (V4SImode, op1),
				     gen_lowpart (V4SImode, t3)));
  emit_insn (gen_sse2_umulv2siv2di3 (t5, gen_lowpart (V4SImode, op2),
				     gen_lowpart (V4SImode, t2)));

  /* Shift them back.  */
  emit_insn (gen_ashlv2di3 (t4, t4, thirtytwo));
  emit_insn (gen_ashlv2di3 (t5, t5, thirtytwo));

  /* Add the three parts together.  */
  emit_insn (gen_addv2di3 (t6, t1, t4));
  emit_insn (gen_addv2di3 (op0, t6, t5));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2764 */
rtx
gen_vec_shl_v16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2769 "../.././gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2764 */
rtx
gen_vec_shl_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2769 "../.././gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2764 */
rtx
gen_vec_shl_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2769 "../.././gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2764 */
rtx
gen_vec_shl_v2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2769 "../.././gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2788 */
rtx
gen_vec_shr_v16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2793 "../.././gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2788 */
rtx
gen_vec_shr_v8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2793 "../.././gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2788 */
rtx
gen_vec_shr_v4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2793 "../.././gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2788 */
rtx
gen_vec_shr_v2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2793 "../.././gcc/config/i386/sse.md"
{
  if (!const_0_to_255_mul_8_operand (operands[2], SImode))
    FAIL;
  operands[0] = gen_lowpart (TImode, operands[0]);
  operands[1] = gen_lowpart (TImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (TImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2800 */
rtx
gen_umaxv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2805 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (UMAX, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2816 */
rtx
gen_smaxv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2821 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (SMAX, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2832 */
rtx
gen_umaxv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2839 "../.././gcc/config/i386/sse.md"
{
  operands[3] = operands[0];
  if (rtx_equal_p (operands[0], operands[2]))
    operands[0] = gen_reg_rtx (V8HImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (V8HImode,
	operand0,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2845 */
rtx
gen_smaxv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2850 "../.././gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2845 */
rtx
gen_smaxv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2850 "../.././gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2865 */
rtx
gen_umaxv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2870 "../.././gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2885 */
rtx
gen_uminv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2890 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (UMAX, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2901 */
rtx
gen_sminv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2906 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (SMIN, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2917 */
rtx
gen_sminv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2922 "../.././gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2917 */
rtx
gen_sminv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2922 "../.././gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GT (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2937 */
rtx
gen_uminv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2942 "../.././gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2937 */
rtx
gen_uminv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 2942 "../.././gcc/config/i386/sse.md"
{
  rtx xops[6];
  bool ok;

  xops[0] = operands[0];
  xops[1] = operands[2];
  xops[2] = operands[1];
  xops[3] = gen_rtx_GTU (VOIDmode, operands[1], operands[2]);
  xops[4] = operands[1];
  xops[5] = operands[2];
  ok = ix86_expand_int_vcond (xops);
  gcc_assert (ok);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2983 */
rtx
gen_vcondv16qi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 2992 "../.././gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2983 */
rtx
gen_vcondv8hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 2992 "../.././gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2983 */
rtx
gen_vcondv4si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 2992 "../.././gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2999 */
rtx
gen_vconduv16qi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3008 "../.././gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V16QImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2999 */
rtx
gen_vconduv8hi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3008 "../.././gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V8HImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:2999 */
rtx
gen_vconduv4si (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4,
	rtx operand5)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
    operands[5] = operand5;
#line 3008 "../.././gcc/config/i386/sse.md"
{
  if (ix86_expand_int_vcond (operands))
    DONE;
  else
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (V4SImode,
	gen_rtx_fmt_ee (GET_CODE (operand3), VOIDmode,
		operand4,
		operand5),
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3021 */
rtx
gen_one_cmplv16qi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3026 "../.././gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V16QImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V16QImode, gen_rtx_CONST_VECTOR (V16QImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3021 */
rtx
gen_one_cmplv8hi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3026 "../.././gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V8HImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V8HImode, gen_rtx_CONST_VECTOR (V8HImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3021 */
rtx
gen_one_cmplv4si2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3026 "../.././gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V4SImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V4SImode, gen_rtx_CONST_VECTOR (V4SImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3021 */
rtx
gen_one_cmplv2di2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3026 "../.././gcc/config/i386/sse.md"
{
  int i, n = GET_MODE_NUNITS (V2DImode);
  rtvec v = rtvec_alloc (n);

  for (i = 0; i < n; ++i)
    RTVEC_ELT (v, i) = constm1_rtx;

  operands[2] = force_reg (V2DImode, gen_rtx_CONST_VECTOR (V2DImode, v));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3036 */
rtx
gen_andv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3041 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3036 */
rtx
gen_andv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3041 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3036 */
rtx
gen_andv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3041 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3036 */
rtx
gen_andv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3041 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (AND, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3063 */
rtx
gen_iorv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3068 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3063 */
rtx
gen_iorv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3068 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3063 */
rtx
gen_iorv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3068 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3063 */
rtx
gen_iorv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3068 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (IOR, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3080 */
rtx
gen_xorv16qi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3085 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V16QImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V16QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3080 */
rtx
gen_xorv8hi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3085 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V8HImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V8HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3080 */
rtx
gen_xorv4si3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3085 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V4SImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V4SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3080 */
rtx
gen_xorv2di3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3085 "../.././gcc/config/i386/sse.md"
ix86_fixup_binary_operands_no_copy (XOR, V2DImode, operands);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (V2DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3259 */
rtx
gen_sse2_pinsrw (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 3267 "../.././gcc/config/i386/sse.md"
{
  operands[2] = gen_lowpart (HImode, operands[2]);
  operands[3] = GEN_INT ((1 << INTVAL (operands[3])));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8HImode,
	gen_rtx_VEC_DUPLICATE (V8HImode,
	operand2),
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3298 */
rtx
gen_sse2_pshufd (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3303 "../.././gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshufd_1 (operands[0], operands[1],
				GEN_INT ((mask >> 0) & 3),
				GEN_INT ((mask >> 2) & 3),
				GEN_INT ((mask >> 4) & 3),
				GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3335 */
rtx
gen_sse2_pshuflw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3340 "../.././gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshuflw_1 (operands[0], operands[1],
				 GEN_INT ((mask >> 0) & 3),
				 GEN_INT ((mask >> 2) & 3),
				 GEN_INT ((mask >> 4) & 3),
				 GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3376 */
rtx
gen_sse2_pshufhw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3381 "../.././gcc/config/i386/sse.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_sse2_pshufhw_1 (operands[0], operands[1],
				 GEN_INT (((mask >> 0) & 3) + 4),
				 GEN_INT (((mask >> 2) & 3) + 4),
				 GEN_INT (((mask >> 4) & 3) + 4),
				 GEN_INT (((mask >> 6) & 3) + 4)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3417 */
rtx
gen_sse2_loadd (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3425 "../.././gcc/config/i386/sse.md"
operands[2] = CONST0_RTX (V4SImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_VEC_DUPLICATE (V4SImode,
	operand1),
	operand2,
	const1_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3444 */
extern rtx gen_split_1593 (rtx, rtx *);
rtx
gen_split_1593 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3453 "../.././gcc/config/i386/sse.md"
{
  operands[1] = gen_rtx_REG (SImode, REGNO (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3457 */
rtx
gen_sse_storeq (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (DImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

/* ../.././gcc/config/i386/sse.md:3475 */
extern rtx gen_split_1595 (rtx, rtx *);
rtx
gen_split_1595 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
#line 3482 "../.././gcc/config/i386/sse.md"
{
  operands[1] = gen_rtx_REG (DImode, REGNO (operands[1]));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3568 */
rtx
gen_vec_setv2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3573 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3579 */
rtx
gen_vec_extractv2di (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3584 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3590 */
rtx
gen_vec_initv2di (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3594 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3599 */
rtx
gen_vec_setv4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3604 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3610 */
rtx
gen_vec_extractv4si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3615 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3621 */
rtx
gen_vec_initv4si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3625 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3630 */
rtx
gen_vec_setv8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3635 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3641 */
rtx
gen_vec_extractv8hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3646 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3652 */
rtx
gen_vec_initv8hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3656 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3661 */
rtx
gen_vec_setv16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3666 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3672 */
rtx
gen_vec_extractv16qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 3677 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3683 */
rtx
gen_vec_initv16qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 3687 "../.././gcc/config/i386/sse.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3781 */
rtx
gen_sse2_maskmovdqu (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V16QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	31));
}

/* ../.././gcc/config/i386/sse.md:3830 */
rtx
gen_sse_sfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 3834 "../.././gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	37)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3855 */
rtx
gen_sse2_mfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 3859 "../.././gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	44)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sse.md:3872 */
rtx
gen_sse2_lfence (void)
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
#line 3876 "../.././gcc/config/i386/sse.md"
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	45)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:35 */
rtx
gen_movv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 60 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V8QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:35 */
rtx
gen_movv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 60 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V4HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:35 */
rtx
gen_movv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 60 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:115 */
rtx
gen_movv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 119 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:173 */
extern rtx gen_split_1616 (rtx, rtx *);
rtx
gen_split_1616 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 180 "../.././gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:173 */
extern rtx gen_split_1617 (rtx, rtx *);
rtx
gen_split_1617 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 180 "../.././gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:173 */
extern rtx gen_split_1618 (rtx, rtx *);
rtx
gen_split_1618 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 180 "../.././gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:173 */
extern rtx gen_split_1619 (rtx, rtx *);
rtx
gen_split_1619 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 180 "../.././gcc/config/i386/mmx.md"
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:182 */
rtx
gen_pushv8qi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 185 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_push (V8QImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:182 */
rtx
gen_pushv4hi1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 185 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_push (V4HImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:182 */
rtx
gen_pushv2si1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 185 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_push (V2SImode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:182 */
rtx
gen_pushv2sf1 (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#line 185 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_push (V2SFmode, operands[0]);
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:190 */
rtx
gen_movmisalignv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 194 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V8QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:190 */
rtx
gen_movmisalignv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 194 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V4HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:190 */
rtx
gen_movmisalignv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 194 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:190 */
rtx
gen_movmisalignv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 194 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_move (V2SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:234 */
rtx
gen_mmx_subrv2sf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand2,
	operand1));
}

/* ../.././gcc/config/i386/mmx.md:478 */
rtx
gen_vec_setv2sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 483 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:489 */
extern rtx gen_split_1630 (rtx, rtx *);
rtx
gen_split_1630 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 498 "../.././gcc/config/i386/mmx.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SFmode, REGNO (op1));
  else
    op1 = gen_lowpart (SFmode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:521 */
extern rtx gen_split_1631 (rtx, rtx *);
rtx
gen_split_1631 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 528 "../.././gcc/config/i386/mmx.md"
{
  operands[1] = adjust_address (operands[1], SFmode, 4);
  emit_move_insn (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:534 */
rtx
gen_vec_extractv2sf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 539 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:545 */
rtx
gen_vec_initv2sf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 549 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1027 */
rtx
gen_mmx_pinsrw (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 1035 "../.././gcc/config/i386/mmx.md"
{
  operands[2] = gen_lowpart (HImode, operands[2]);
  operands[3] = GEN_INT (1 << INTVAL (operands[3]));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_DUPLICATE (V4HImode,
	operand2),
	operand1,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1066 */
rtx
gen_mmx_pshufw (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1071 "../.././gcc/config/i386/mmx.md"
{
  int mask = INTVAL (operands[2]);
  emit_insn (gen_mmx_pshufw_1 (operands[0], operands[1],
                               GEN_INT ((mask >> 0) & 3),
                               GEN_INT ((mask >> 2) & 3),
                               GEN_INT ((mask >> 4) & 3),
                               GEN_INT ((mask >> 6) & 3)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1144 */
rtx
gen_vec_setv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1149 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1155 */
extern rtx gen_split_1637 (rtx, rtx *);
rtx
gen_split_1637 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1164 "../.././gcc/config/i386/mmx.md"
{
  rtx op1 = operands[1];
  if (REG_P (op1))
    op1 = gen_rtx_REG (SImode, REGNO (op1));
  else
    op1 = gen_lowpart (SImode, op1);
  emit_move_insn (operands[0], op1);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1189 */
extern rtx gen_split_1638 (rtx, rtx *);
rtx
gen_split_1638 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();
#line 1196 "../.././gcc/config/i386/mmx.md"
{
  operands[1] = adjust_address (operands[1], SImode, 4);
  emit_move_insn (operands[0], operands[1]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1202 */
rtx
gen_vec_extractv2si (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1207 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1213 */
rtx
gen_vec_initv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1217 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1222 */
rtx
gen_vec_setv4hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1227 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1233 */
rtx
gen_vec_extractv4hi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1238 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1244 */
rtx
gen_vec_initv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1248 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1253 */
rtx
gen_vec_setv8qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1258 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_set (false, operands[0], operands[1],
			  INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1264 */
rtx
gen_vec_extractv8qi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#line 1269 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_extract (false, operands[0], operands[1],
			      INTVAL (operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1275 */
rtx
gen_vec_initv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#line 1279 "../.././gcc/config/i386/mmx.md"
{
  ix86_expand_vector_init (false, operands[0], operands[1]);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/mmx.md:1356 */
rtx
gen_mmx_maskmovq (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand0),
	31));
}

/* ../.././gcc/config/i386/sync.md:46 */
rtx
gen_sync_compare_and_swap_ccqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 62 "../.././gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (QImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sync.md:46 */
rtx
gen_sync_compare_and_swap_cchi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 62 "../.././gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (HImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* ../.././gcc/config/i386/sync.md:46 */
rtx
gen_sync_compare_and_swap_ccsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#line 62 "../.././gcc/config/i386/sync.md"
{
  operands[4] = gen_rtx_REG (CCZmode, FLAGS_REG);
  ix86_compare_op0 = operands[3];
  ix86_compare_op1 = NULL;
  ix86_compare_emitted = operands[4];
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	10)),
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	11),
	operand2)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 899:
    case 898:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (XFmode, 8);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (XFmode, 9);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (XFmode, 10);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (XFmode, 11);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (XFmode, 12);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (XFmode, 13);
      XVECEXP (pattern, 0, 7) = gen_hard_reg_clobber (XFmode, 14);
      XVECEXP (pattern, 0, 8) = gen_hard_reg_clobber (XFmode, 15);
      XVECEXP (pattern, 0, 9) = gen_hard_reg_clobber (DImode, 29);
      XVECEXP (pattern, 0, 10) = gen_hard_reg_clobber (DImode, 30);
      XVECEXP (pattern, 0, 11) = gen_hard_reg_clobber (DImode, 31);
      XVECEXP (pattern, 0, 12) = gen_hard_reg_clobber (DImode, 32);
      XVECEXP (pattern, 0, 13) = gen_hard_reg_clobber (DImode, 33);
      XVECEXP (pattern, 0, 14) = gen_hard_reg_clobber (DImode, 34);
      XVECEXP (pattern, 0, 15) = gen_hard_reg_clobber (DImode, 35);
      XVECEXP (pattern, 0, 16) = gen_hard_reg_clobber (DImode, 36);
      break;

    case 543:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 470:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode));
      break;

    case 469:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 407:
    case 406:
    case 405:
    case 404:
    case 403:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 373:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCFPmode, 18);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCFPmode, 17);
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCFPmode, 18);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCFPmode, 17);
      break;

    case 266:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V2DFmode));
      break;

    case 261:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (V4SFmode));
      break;

    case 526:
    case 199:
    case 198:
    case 195:
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 908:
    case 907:
    case 906:
    case 902:
    case 901:
    case 900:
    case 553:
    case 552:
    case 267:
    case 264:
    case 263:
    case 262:
    case 259:
    case 258:
    case 257:
    case 197:
    case 196:
    case 194:
    case 193:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 399:
    case 398:
    case 190:
    case 189:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 17);
      break;

    case 342:
    case 340:
    case 321:
    case 319:
    case 298:
    case 248:
    case 231:
    case 165:
    case 164:
    case 163:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode));
      break;

    case 334:
    case 332:
    case 313:
    case 311:
    case 294:
    case 240:
    case 226:
    case 158:
    case 157:
    case 156:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 555:
    case 554:
    case 328:
    case 326:
    case 307:
    case 305:
    case 290:
    case 237:
    case 223:
    case 152:
    case 151:
    case 150:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 504:
    case 493:
    case 118:
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 503:
    case 492:
    case 117:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 480:
    case 113:
    case 112:
    case 111:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 479:
    case 473:
    case 472:
    case 471:
    case 110:
    case 109:
    case 108:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (XFmode));
      break;

    case 352:
    case 343:
    case 80:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 17);
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 926:
    case 925:
    case 924:
    case 923:
    case 922:
    case 921:
    case 920:
    case 919:
    case 918:
    case 917:
    case 916:
    case 915:
    case 914:
    case 913:
    case 912:
    case 527:
    case 511:
    case 509:
    case 502:
    case 501:
    case 500:
    case 498:
    case 491:
    case 490:
    case 489:
    case 487:
    case 409:
    case 402:
    case 401:
    case 395:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 354:
    case 353:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 338:
    case 337:
    case 336:
    case 335:
    case 330:
    case 329:
    case 324:
    case 323:
    case 322:
    case 317:
    case 316:
    case 315:
    case 314:
    case 309:
    case 308:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 296:
    case 295:
    case 292:
    case 291:
    case 288:
    case 287:
    case 286:
    case 255:
    case 253:
    case 251:
    case 250:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 238:
    case 235:
    case 234:
    case 233:
    case 232:
    case 228:
    case 227:
    case 224:
    case 221:
    case 220:
    case 219:
    case 217:
    case 213:
    case 212:
    case 210:
    case 208:
    case 192:
    case 191:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 179:
    case 178:
    case 175:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 161:
    case 160:
    case 159:
    case 154:
    case 153:
    case 148:
    case 141:
    case 140:
    case 139:
    case 138:
    case 116:
    case 115:
    case 114:
    case 79:
    case 77:
    case 76:
    case 74:
    case 73:
    case 71:
    case 47:
    case 41:
    case 33:
    case 32:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 17);
      break;

    default:
      gcc_unreachable ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 470:
    case 469:
    case 266:
    case 261:
    case 342:
    case 340:
    case 321:
    case 319:
    case 298:
    case 248:
    case 231:
    case 165:
    case 164:
    case 163:
    case 334:
    case 332:
    case 313:
    case 311:
    case 294:
    case 240:
    case 226:
    case 158:
    case 157:
    case 156:
    case 555:
    case 554:
    case 328:
    case 326:
    case 307:
    case 305:
    case 290:
    case 237:
    case 223:
    case 152:
    case 151:
    case 150:
    case 504:
    case 493:
    case 118:
    case 503:
    case 492:
    case 117:
    case 480:
    case 113:
    case 112:
    case 111:
    case 479:
    case 473:
    case 472:
    case 471:
    case 110:
    case 109:
    case 108:
      return 0;

    case 899:
    case 898:
    case 543:
    case 407:
    case 406:
    case 405:
    case 404:
    case 403:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 526:
    case 199:
    case 198:
    case 195:
    case 908:
    case 907:
    case 906:
    case 902:
    case 901:
    case 900:
    case 553:
    case 552:
    case 267:
    case 264:
    case 263:
    case 262:
    case 259:
    case 258:
    case 257:
    case 197:
    case 196:
    case 194:
    case 193:
    case 399:
    case 398:
    case 190:
    case 189:
    case 352:
    case 343:
    case 80:
    case 926:
    case 925:
    case 924:
    case 923:
    case 922:
    case 921:
    case 920:
    case 919:
    case 918:
    case 917:
    case 916:
    case 915:
    case 914:
    case 913:
    case 912:
    case 527:
    case 511:
    case 509:
    case 502:
    case 501:
    case 500:
    case 498:
    case 491:
    case 490:
    case 489:
    case 487:
    case 409:
    case 402:
    case 401:
    case 395:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 354:
    case 353:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 338:
    case 337:
    case 336:
    case 335:
    case 330:
    case 329:
    case 324:
    case 323:
    case 322:
    case 317:
    case 316:
    case 315:
    case 314:
    case 309:
    case 308:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 296:
    case 295:
    case 292:
    case 291:
    case 288:
    case 287:
    case 286:
    case 255:
    case 253:
    case 251:
    case 250:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 238:
    case 235:
    case 234:
    case 233:
    case 232:
    case 228:
    case 227:
    case 224:
    case 221:
    case 220:
    case 219:
    case 217:
    case 213:
    case 212:
    case 210:
    case 208:
    case 192:
    case 191:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 179:
    case 178:
    case 175:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 161:
    case 160:
    case 159:
    case 154:
    case 153:
    case 148:
    case 141:
    case 140:
    case 139:
    case 138:
    case 116:
    case 115:
    case 114:
    case 79:
    case 77:
    case 76:
    case 74:
    case 73:
    case 71:
    case 47:
    case 41:
    case 33:
    case 32:
      return 1;

    default:
      gcc_unreachable ();
    }
}
