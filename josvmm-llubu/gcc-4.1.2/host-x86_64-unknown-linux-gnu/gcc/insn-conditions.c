/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "insn-constants.h"

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "system.h"
/* If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */
#if GCC_VERSION < 3001
#include "dummy-conditions.c"
#else
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "gensupport.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time. */

const struct c_test insn_conditions[] = {
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 4928 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 4936 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 4928 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 4936 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 4722 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands)",
    __builtin_constant_p 
#line 4722 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
    ? (int) 
#line 4722 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
    : -1 },
#line 5826 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5826 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5826 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 9637 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9637 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9637 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 733 "../.././gcc/config/i386/mmx.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)",
    __builtin_constant_p 
#line 733 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    ? (int) 
#line 733 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    : -1 },
#line 11469 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11469 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11469 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 1931 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1931 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1931 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 2968 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 2968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 2968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 12144 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12144 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12144 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 17696 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 17696 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 17696 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 1696 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE3",
    __builtin_constant_p 
#line 1696 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3)
    ? (int) 
#line 1696 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3)
    : -1 },
#line 11694 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11694 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11694 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11444 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11444 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11444 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 1833 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1833 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    ? (int) 
#line 1833 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    : -1 },
#line 2289 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 2289 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 2289 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 14549 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU_TLS",
    __builtin_constant_p 
#line 14549 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    ? (int) 
#line 14549 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    : -1 },
#line 3875 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2",
    __builtin_constant_p 
#line 3875 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2)
    ? (int) 
#line 3875 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2)
    : -1 },
#line 4247 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 8948 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8948 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8948 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 19411 "../.././gcc/config/i386/i386.md"
  { "! optimize_size\n\
   && ! TARGET_USE_MOV0\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cost->large_insn\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19411 "../.././gcc/config/i386/i386.md"
(! optimize_size
   && ! TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cost->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19411 "../.././gcc/config/i386/i386.md"
(! optimize_size
   && ! TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cost->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 10117 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 10117 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 10117 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 13653 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13653 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13653 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 4693 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4693 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 4693 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 8171 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8171 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8171 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 14746 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14746 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14746 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 1952 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 1952 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 1952 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 14892 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14892 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14892 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 5065 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 5067 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5065 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 5067 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 8490 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)",
    __builtin_constant_p 
#line 8490 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
    ? (int) 
#line 8490 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
    : -1 },
#line 20438 "../.././gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 20438 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    ? (int) 
#line 20438 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    : -1 },
#line 7725 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 7725 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 7725 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 3196 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3196 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3196 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 4194 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4194 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4194 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 3048 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 3048 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 3048 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 5261 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   &&  ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 5261 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 5261 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 2249 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && GET_CODE (operands[1]) == MEM\n\
   && constant_pool_reference_p (operands[1])",
    __builtin_constant_p 
#line 2249 "../.././gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && constant_pool_reference_p (operands[1]))
    ? (int) 
#line 2249 "../.././gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && constant_pool_reference_p (operands[1]))
    : -1 },
#line 10605 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 10605 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 10605 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 5550 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5550 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5550 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 897 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)",
    __builtin_constant_p 
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    ? (int) 
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    : -1 },
#line 3127 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3127 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3127 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
  { "(!TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 12627 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 12629 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 12627 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 12629 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4173 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4173 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1568 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL || optimize_size",
    __builtin_constant_p 
#line 1568 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL || optimize_size)
    ? (int) 
#line 1568 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL || optimize_size)
    : -1 },
#line 18710 "../.././gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH",
    __builtin_constant_p 
#line 18710 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    ? (int) 
#line 18710 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    : -1 },
#line 699 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 699 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 699 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 19957 "../.././gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_ADD_ESP_4",
    __builtin_constant_p 
#line 19957 "../.././gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_4)
    ? (int) 
#line 19957 "../.././gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_4)
    : -1 },
#line 20064 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20064 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20064 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4253 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4253 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1140 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && operands[1] == constm1_rtx\n\
   && (TARGET_PENTIUM || optimize_size)",
    __builtin_constant_p 
#line 1140 "../.././gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size))
    ? (int) 
#line 1140 "../.././gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size))
    : -1 },
#line 3797 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 3797 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    ? (int) 
#line 3797 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    : -1 },
#line 8250 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8250 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8250 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 4687 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4687 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 4687 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 12426 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12426 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12426 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 17526 "../.././gcc/config/i386/i386.md"
  { "reload_completed",
    __builtin_constant_p 
#line 17526 "../.././gcc/config/i386/i386.md"
(reload_completed)
    ? (int) 
#line 17526 "../.././gcc/config/i386/i386.md"
(reload_completed)
    : -1 },
  { "(TARGET_XADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 94 "../.././gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT))
    ? (int) (
#line 94 "../.././gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT))
    : -1 },
#line 9688 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && reload_completed",
    __builtin_constant_p 
#line 9688 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && reload_completed)
    ? (int) 
#line 9688 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && reload_completed)
    : -1 },
#line 18632 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 18632 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 18632 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 9521 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9521 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9521 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 328 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 328 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 328 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 19174 "../.././gcc/config/i386/i386.md"
  { "TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19174 "../.././gcc/config/i386/i386.md"
(TARGET_STACK_PROBE)
    ? (int) 
#line 19174 "../.././gcc/config/i386/i386.md"
(TARGET_STACK_PROBE)
    : -1 },
#line 9608 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 9608 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 9608 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 20079 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !optimize_size \n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20079 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && !optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20079 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && !optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 5350 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5350 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5350 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 3092 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 3092 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 3092 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 2067 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2067 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2067 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 6706 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6706 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6706 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
  { "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1356 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1358 "../.././gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 1356 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1358 "../.././gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 7468 "../.././gcc/config/i386/i386.md"
  { "!optimize_size && !TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7468 "../.././gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD)
    ? (int) 
#line 7468 "../.././gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD)
    : -1 },
#line 1546 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL || optimize_size",
    __builtin_constant_p 
#line 1546 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size)
    ? (int) 
#line 1546 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size)
    : -1 },
#line 772 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)",
    __builtin_constant_p 
#line 772 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    ? (int) 
#line 772 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    : -1 },
#line 565 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands)",
    __builtin_constant_p 
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    ? (int) 
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    : -1 },
#line 3205 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0])",
    __builtin_constant_p 
#line 3205 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0]))
    ? (int) 
#line 3205 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0]))
    : -1 },
#line 12927 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || reload_completed)",
    __builtin_constant_p 
#line 12927 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    ? (int) 
#line 12927 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    : -1 },
#line 9592 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH && reload_completed",
    __builtin_constant_p 
#line 9592 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH && reload_completed)
    ? (int) 
#line 9592 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH && reload_completed)
    : -1 },
#line 18738 "../.././gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 18738 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH)
    ? (int) 
#line 18738 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH)
    : -1 },
#line 8301 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8301 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8301 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 12664 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)",
    __builtin_constant_p 
#line 12664 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    ? (int) 
#line 12664 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    : -1 },
#line 9541 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9541 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9541 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 8060 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 8060 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 8060 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 5727 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5727 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5727 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 762 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)",
    __builtin_constant_p 
#line 762 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    ? (int) 
#line 762 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    : -1 },
#line 10911 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 10911 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 10911 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 1015 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1015 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1015 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
  { "(TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 14320 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 14322 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 14320 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 14322 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 19459 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode) && ! optimize_size",
    __builtin_constant_p 
#line 19459 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode) && ! optimize_size)
    ? (int) 
#line 19459 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode) && ! optimize_size)
    : -1 },
#line 565 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 565 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 565 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 12713 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 12713 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 12713 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 2968 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 2968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 2968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
#line 19530 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (true_regnum (operands[2]) != 0\n\
       || (GET_CODE (operands[3]) == CONST_INT\n\
	   && CONST_OK_FOR_LETTER_P (INTVAL (operands[3]), 'K')))\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 19530 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != 0
       || (GET_CODE (operands[3]) == CONST_INT
	   && CONST_OK_FOR_LETTER_P (INTVAL (operands[3]), 'K')))
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 19530 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != 0
       || (GET_CODE (operands[3]) == CONST_INT
	   && CONST_OK_FOR_LETTER_P (INTVAL (operands[3]), 'K')))
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 10578 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])\n\
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4",
    __builtin_constant_p 
#line 10578 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4)
    ? (int) 
#line 10578 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4)
    : -1 },
#line 1179 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1179 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1179 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 12025 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12025 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12025 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 685 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 685 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 685 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 15027 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15027 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15027 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 12533 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)",
    __builtin_constant_p 
#line 12533 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    ? (int) 
#line 12533 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    : -1 },
#line 9531 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9531 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9531 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 1915 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_PENTIUM || optimize_size)\n\
   && reload_completed\n\
   && operands[1] == constm1_rtx",
    __builtin_constant_p 
#line 1915 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && operands[1] == constm1_rtx)
    ? (int) 
#line 1915 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && operands[1] == constm1_rtx)
    : -1 },
#line 20314 "../.././gcc/config/i386/i386.md"
  { "!SIBLING_CALL_P (insn) && !TARGET_64BIT",
    __builtin_constant_p 
#line 20314 "../.././gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && !TARGET_64BIT)
    ? (int) 
#line 20314 "../.././gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && !TARGET_64BIT)
    : -1 },
#line 12440 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)",
    __builtin_constant_p 
#line 12440 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
    ? (int) 
#line 12440 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
    : -1 },
#line 18162 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)",
    __builtin_constant_p 
#line 18162 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    ? (int) 
#line 18162 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    : -1 },
#line 4166 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4003 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed",
    __builtin_constant_p 
#line 4003 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    ? (int) 
#line 4003 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    : -1 },
#line 9251 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 9251 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 9251 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 8936 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8936 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8936 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 15286 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 \n\
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) ",
    __builtin_constant_p 
#line 15286 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) )
    ? (int) 
#line 15286 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) )
    : -1 },
#line 2749 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && !ANY_FP_REG_P (operands[1])",
    __builtin_constant_p 
#line 2749 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    ? (int) 
#line 2749 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    : -1 },
#line 11562 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11562 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11562 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 1383 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT",
    __builtin_constant_p 
#line 1383 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    ? (int) 
#line 1383 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    : -1 },
#line 12369 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12369 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 12369 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 9118 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9118 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9118 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 11984 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_CMOVE",
    __builtin_constant_p 
#line 11984 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE)
    ? (int) 
#line 11984 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE)
    : -1 },
#line 10010 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 10010 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 10010 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 19192 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && flag_pic",
    __builtin_constant_p 
#line 19192 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    ? (int) 
#line 19192 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    : -1 },
#line 1305 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW)\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 1305 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 1305 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 8277 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)\n\
   && ix86_match_ccmode (insn,\n\
			 GET_CODE (operands[2]) == CONST_INT\n\
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 8277 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 GET_CODE (operands[2]) == CONST_INT
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 8277 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 GET_CODE (operands[2]) == CONST_INT
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 4980 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 4980 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 4980 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 674 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 674 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 674 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 3075 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 3075 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 3075 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 17679 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 17679 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 17679 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 4036 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))",
    __builtin_constant_p 
#line 4036 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    ? (int) 
#line 4036 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    : -1 },
#line 14862 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14862 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14862 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 13900 "../.././gcc/config/i386/i386.md"
  { "(peep2_reg_dead_p (3, operands[1])\n\
    || operands_match_p (operands[1], operands[3]))\n\
   && ! reg_overlap_mentioned_p (operands[3], operands[0])",
    __builtin_constant_p 
#line 13900 "../.././gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    ? (int) 
#line 13900 "../.././gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    : -1 },
#line 8549 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8549 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8549 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
  { "(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1160 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1162 "../.././gcc/config/i386/mmx.md"
( reload_completed))
    ? (int) (
#line 1160 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1162 "../.././gcc/config/i386/mmx.md"
( reload_completed))
    : -1 },
#line 2277 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], SFmode))",
    __builtin_constant_p 
#line 2277 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    ? (int) 
#line 2277 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    : -1 },
#line 10756 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 10756 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 10756 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 5592 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5592 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5592 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 2049 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 1)",
    __builtin_constant_p 
#line 2049 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    ? (int) 
#line 2049 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    : -1 },
#line 9164 "../.././gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 9164 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 9164 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 1331 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 1331 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 1331 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 4353 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 4353 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    ? (int) 
#line 4353 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    : -1 },
#line 2438 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 2438 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 2438 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 4073 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 4073 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 4073 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 5502 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5502 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5502 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4097 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4097 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4097 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 652 "../.././gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 652 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 652 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 11723 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 11723 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 11723 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 20048 "../.././gcc/config/i386/i386.md"
  { "!optimize_size \n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20048 "../.././gcc/config/i386/i386.md"
(!optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20048 "../.././gcc/config/i386/i386.md"
(!optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 17668 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 17668 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 17668 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    : -1 },
#line 10304 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands)",
    __builtin_constant_p 
#line 10304 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    ? (int) 
#line 10304 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    : -1 },
#line 19680 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode\n\
    || GET_MODE (operands[0]) == HImode)\n\
   && (! TARGET_USE_MOV0 || optimize_size)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19680 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_size)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19680 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_size)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6731 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6731 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6731 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 12290 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12290 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 12290 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 20338 "../.././gcc/config/i386/i386.md"
  { "!SIBLING_CALL_P (insn) && TARGET_64BIT",
    __builtin_constant_p 
#line 20338 "../.././gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT)
    ? (int) 
#line 20338 "../.././gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT)
    : -1 },
#line 6645 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6645 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6645 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 9007 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 9007 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 9007 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 1156 "../.././gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1156 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1156 "../.././gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1904 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)\n\
   && reload_completed",
    __builtin_constant_p 
#line 1904 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed)
    ? (int) 
#line 1904 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed)
    : -1 },
#line 19425 "../.././gcc/config/i386/i386.md"
  { "! optimize_size\n\
   && get_attr_length (insn) >= ix86_cost->large_insn\n\
   && TARGET_SPLIT_LONG_MOVES",
    __builtin_constant_p 
#line 19425 "../.././gcc/config/i386/i386.md"
(! optimize_size
   && get_attr_length (insn) >= ix86_cost->large_insn
   && TARGET_SPLIT_LONG_MOVES)
    ? (int) 
#line 19425 "../.././gcc/config/i386/i386.md"
(! optimize_size
   && get_attr_length (insn) >= ix86_cost->large_insn
   && TARGET_SPLIT_LONG_MOVES)
    : -1 },
#line 19938 "../.././gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_SUB_ESP_4",
    __builtin_constant_p 
#line 19938 "../.././gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_4)
    ? (int) 
#line 19938 "../.././gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_4)
    : -1 },
#line 12243 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12243 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12243 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 9178 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 9178 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 9178 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 245 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)",
    __builtin_constant_p 
#line 245 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    ? (int) 
#line 245 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    : -1 },
#line 6456 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands)",
    __builtin_constant_p 
#line 6456 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
    ? (int) 
#line 6456 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
    : -1 },
#line 1045 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1045 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1045 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 15831 "../.././gcc/config/i386/i386.md"
  { "standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 15831 "../.././gcc/config/i386/i386.md"
(standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 15831 "../.././gcc/config/i386/i386.md"
(standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 15208 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 15208 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 15208 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387)
    : -1 },
#line 2683 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ! (ANY_FP_REG_P (operands[0]) || \n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) || \n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 2683 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 2683 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 1137 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && !TARGET_SSE",
    __builtin_constant_p 
#line 1137 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    ? (int) 
#line 1137 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    : -1 },
#line 6251 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xff) != 0x80",
    __builtin_constant_p 
#line 6251 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
    ? (int) 
#line 6251 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
    : -1 },
#line 19971 "../.././gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_ADD_ESP_8",
    __builtin_constant_p 
#line 19971 "../.././gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_8)
    ? (int) 
#line 19971 "../.././gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_8)
    : -1 },
#line 2960 "../.././gcc/config/i386/i386.md"
  { "reload_completed && !SSE_REG_P (operands[0])\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 2960 "../.././gcc/config/i386/i386.md"
(reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 2960 "../.././gcc/config/i386/i386.md"
(reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1]))
    : -1 },
#line 897 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)",
    __builtin_constant_p 
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    ? (int) 
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    : -1 },
#line 3048 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 3048 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 3048 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 7285 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 7285 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 7285 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 20020 "../.././gcc/config/i386/i386.md"
  { "optimize_size",
    __builtin_constant_p 
#line 20020 "../.././gcc/config/i386/i386.md"
(optimize_size)
    ? (int) 
#line 20020 "../.././gcc/config/i386/i386.md"
(optimize_size)
    : -1 },
#line 14826 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH",
    __builtin_constant_p 
#line 14826 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH)
    ? (int) 
#line 14826 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH)
    : -1 },
#line 3105 "../.././gcc/config/i386/i386.md"
  { "(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed",
    __builtin_constant_p 
#line 3105 "../.././gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed)
    ? (int) 
#line 3105 "../.././gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed)
    : -1 },
#line 4120 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4120 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4120 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 2776 "../.././gcc/config/i386/i386.md"
  { "optimize_size\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && (reload_in_progress || reload_completed\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 2776 "../.././gcc/config/i386/i386.md"
(optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 2776 "../.././gcc/config/i386/i386.md"
(optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 827 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 827 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 827 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
#line 20209 "../.././gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode \n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   /* We reorder load and the shift.  */\n\
   && !rtx_equal_p (operands[1], operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])\n\
   /* Last PLUS must consist of operand 0 and 3.  */\n\
   && !rtx_equal_p (operands[0], operands[3])\n\
   && (rtx_equal_p (operands[3], operands[6])\n\
       || rtx_equal_p (operands[3], operands[7]))\n\
   && (rtx_equal_p (operands[0], operands[6])\n\
       || rtx_equal_p (operands[0], operands[7]))\n\
   /* The intermediate operand 0 must die or be same as output.  */\n\
   && (rtx_equal_p (operands[0], operands[5])\n\
       || peep2_reg_dead_p (3, operands[0]))",
    __builtin_constant_p 
#line 20209 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode 
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   /* We reorder load and the shift.  */
   && !rtx_equal_p (operands[1], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   /* Last PLUS must consist of operand 0 and 3.  */
   && !rtx_equal_p (operands[0], operands[3])
   && (rtx_equal_p (operands[3], operands[6])
       || rtx_equal_p (operands[3], operands[7]))
   && (rtx_equal_p (operands[0], operands[6])
       || rtx_equal_p (operands[0], operands[7]))
   /* The intermediate operand 0 must die or be same as output.  */
   && (rtx_equal_p (operands[0], operands[5])
       || peep2_reg_dead_p (3, operands[0])))
    ? (int) 
#line 20209 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode 
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   /* We reorder load and the shift.  */
   && !rtx_equal_p (operands[1], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   /* Last PLUS must consist of operand 0 and 3.  */
   && !rtx_equal_p (operands[0], operands[3])
   && (rtx_equal_p (operands[3], operands[6])
       || rtx_equal_p (operands[3], operands[7]))
   && (rtx_equal_p (operands[0], operands[6])
       || rtx_equal_p (operands[0], operands[7]))
   /* The intermediate operand 0 must die or be same as output.  */
   && (rtx_equal_p (operands[0], operands[5])
       || peep2_reg_dead_p (3, operands[0])))
    : -1 },
#line 9200 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 9200 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 9200 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 19295 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19295 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19295 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 754 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 754 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 754 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 9549 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH",
    __builtin_constant_p 
#line 9549 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH)
    ? (int) 
#line 9549 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH)
    : -1 },
#line 6621 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6621 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6621 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 11419 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)\n\
   && INTVAL (operands[2]) == 31\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11419 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11419 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 1072 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 1072 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 1072 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 674 "../.././gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
    && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 674 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 674 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 19506 "../.././gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], QImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], QImode)))",
    __builtin_constant_p 
#line 19506 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], QImode))))
    ? (int) 
#line 19506 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], QImode))))
    : -1 },
#line 2699 "../.././gcc/config/i386/i386.md"
  { "reload_completed || TARGET_80387",
    __builtin_constant_p 
#line 2699 "../.././gcc/config/i386/i386.md"
(reload_completed || TARGET_80387)
    ? (int) 
#line 2699 "../.././gcc/config/i386/i386.md"
(reload_completed || TARGET_80387)
    : -1 },
#line 2448 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 2448 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 2448 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
#line 9051 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 9051 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 9051 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 15702 "../.././gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))\n\
   && !reload_completed && !reload_in_progress",
    __builtin_constant_p 
#line 15702 "../.././gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !reload_completed && !reload_in_progress)
    ? (int) 
#line 15702 "../.././gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !reload_completed && !reload_in_progress)
    : -1 },
#line 4166 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4555 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4555 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4555 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
#line 6673 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6673 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6673 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 4487 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4487 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4487 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_MIX_SSE_I387)
    : -1 },
#line 867 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)",
    __builtin_constant_p 
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    ? (int) 
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    : -1 },
#line 11993 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		     ? flow2_completed : reload_completed)",
    __builtin_constant_p 
#line 11993 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		     ? flow2_completed : reload_completed))
    ? (int) 
#line 11993 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		     ? flow2_completed : reload_completed))
    : -1 },
#line 3075 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 3075 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 3075 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
#line 13583 "../.././gcc/config/i386/i386.md"
  { "TARGET_CMOVE && TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13583 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13583 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 2444 "../.././gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2444 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2444 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 6212 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 6212 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 6212 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 6786 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6786 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6786 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 10719 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 10719 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 10719 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 18787 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 18787 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 18787 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 841 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)",
    __builtin_constant_p 
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    ? (int) 
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    : -1 },
#line 94 "../.././gcc/config/i386/sync.md"
  { "TARGET_XADD",
    __builtin_constant_p 
#line 94 "../.././gcc/config/i386/sync.md"
(TARGET_XADD)
    ? (int) 
#line 94 "../.././gcc/config/i386/sync.md"
(TARGET_XADD)
    : -1 },
#line 9137 "../.././gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9137 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9137 "../.././gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 4138 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4138 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4138 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 5783 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5783 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5783 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 4194 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4194 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4194 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 2993 "../.././gcc/config/i386/i386.md"
  { "reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size",
    __builtin_constant_p 
#line 2993 "../.././gcc/config/i386/i386.md"
(reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    ? (int) 
#line 2993 "../.././gcc/config/i386/i386.md"
(reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    : -1 },
#line 129 "../.././gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_MMX\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 129 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 129 "../.././gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
  { "(TARGET_SSE_MATH) && ( reload_completed)",
    __builtin_constant_p (
#line 9562 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH) && 
#line 9564 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 9562 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH) && 
#line 9564 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 14918 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 14918 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 14918 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 12475 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12475 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12475 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 154 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 154 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 154 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 13006 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_USE_BT",
    __builtin_constant_p 
#line 13006 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    ? (int) 
#line 13006 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    : -1 },
#line 20127 "../.././gcc/config/i386/i386.md"
  { "TARGET_K8 && !optimize_size\n\
   && (GET_CODE (operands[2]) != CONST_INT\n\
       || !CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K'))",
    __builtin_constant_p 
#line 20127 "../.././gcc/config/i386/i386.md"
(TARGET_K8 && !optimize_size
   && (GET_CODE (operands[2]) != CONST_INT
       || !CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K')))
    ? (int) 
#line 20127 "../.././gcc/config/i386/i386.md"
(TARGET_K8 && !optimize_size
   && (GET_CODE (operands[2]) != CONST_INT
       || !CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K')))
    : -1 },
#line 1278 "../.././gcc/config/i386/mmx.md"
  { "TARGET_SSE",
    __builtin_constant_p 
#line 1278 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE)
    ? (int) 
#line 1278 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE)
    : -1 },
#line 11675 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 11675 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 11675 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 7773 "../.././gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 7773 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 7773 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 1108 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1108 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    ? (int) 
#line 1108 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    : -1 },
#line 3088 "../.././gcc/config/i386/i386.md"
  { "TARGET_ZERO_EXTEND_WITH_AND && !optimize_size",
    __builtin_constant_p 
#line 3088 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    ? (int) 
#line 3088 "../.././gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    : -1 },
#line 8458 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(~INTVAL (operands[2]) & ~255)\n\
    && !(INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8458 "../.././gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8458 "../.././gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 10955 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 10955 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 10955 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 12684 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12684 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12684 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 15091 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP",
    __builtin_constant_p 
#line 15091 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP)
    ? (int) 
#line 15091 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP)
    : -1 },
#line 3115 "../.././gcc/config/i386/i386.md"
  { "reload_completed \n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)\n\
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3115 "../.././gcc/config/i386/i386.md"
(reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    ? (int) 
#line 3115 "../.././gcc/config/i386/i386.md"
(reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    : -1 },
#line 6174 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6174 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6174 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 4208 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4208 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4208 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 8599 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8599 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8599 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 2564 "../.././gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2564 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2564 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 17632 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 17632 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 17632 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 19574 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && true_regnum (operands[2]) != 0\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 19574 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != 0
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 19574 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != 0
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 11802 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 11802 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 11802 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 10624 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 10624 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 10624 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 20386 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 20386 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
    ? (int) 
#line 20386 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT)
    : -1 },
#line 14697 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14697 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14697 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 393 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)",
    __builtin_constant_p 
#line 393 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    ? (int) 
#line 393 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    : -1 },
#line 61 "../.././gcc/config/i386/sync.md"
  { "TARGET_CMPXCHG",
    __builtin_constant_p 
#line 61 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    ? (int) 
#line 61 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    : -1 },
#line 19492 "../.././gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], HImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], HImode)))",
    __builtin_constant_p 
#line 19492 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], HImode))))
    ? (int) 
#line 19492 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], HImode))))
    : -1 },
#line 1571 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)",
    __builtin_constant_p 
#line 1571 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    ? (int) 
#line 1571 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    : -1 },
#line 3097 "../.././gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND || optimize_size",
    __builtin_constant_p 
#line 3097 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
    ? (int) 
#line 3097 "../.././gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
    : -1 },
#line 15057 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15057 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15057 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 218 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)",
    __builtin_constant_p 
#line 218 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    ? (int) 
#line 218 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    : -1 },
#line 10028 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10028 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10028 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 20498 "../.././gcc/config/i386/i386.md"
  { "TARGET_3DNOW && !TARGET_64BIT",
    __builtin_constant_p 
#line 20498 "../.././gcc/config/i386/i386.md"
(TARGET_3DNOW && !TARGET_64BIT)
    ? (int) 
#line 20498 "../.././gcc/config/i386/i386.md"
(TARGET_3DNOW && !TARGET_64BIT)
    : -1 },
#line 1268 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX",
    __builtin_constant_p 
#line 1268 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX)
    ? (int) 
#line 1268 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX)
    : -1 },
#line 19754 "../.././gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[2])) >= 0\n\
   && REGNO (operands[0]) == REGNO (operands[1])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19754 "../.././gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19754 "../.././gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6774 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6774 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6774 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 9496 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, QImode, operands)",
    __builtin_constant_p 
#line 9496 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    ? (int) 
#line 9496 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    : -1 },
#line 384 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 384 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 384 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
#line 19371 "../.././gcc/config/i386/i386.md"
  { "!optimize_size && !TARGET_PUSH_MEMORY\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))",
    __builtin_constant_p 
#line 19371 "../.././gcc/config/i386/i386.md"
(!optimize_size && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    ? (int) 
#line 19371 "../.././gcc/config/i386/i386.md"
(!optimize_size && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    : -1 },
#line 2810 "../.././gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && (reload_in_progress || reload_completed\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 2810 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 2810 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 13618 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13618 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13618 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
  { "(TARGET_SSE) && ( reload_completed)",
    __builtin_constant_p (
#line 3449 "../.././gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 3451 "../.././gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 3449 "../.././gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 3451 "../.././gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 15043 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15043 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15043 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4253 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4253 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 10037 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10037 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10037 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 14826 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH",
    __builtin_constant_p 
#line 14826 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH)
    ? (int) 
#line 14826 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH)
    : -1 },
#line 8017 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 8017 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 8017 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 5086 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 5086 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 5086 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 19478 "../.././gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], SImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], SImode)))",
    __builtin_constant_p 
#line 19478 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], SImode))))
    ? (int) 
#line 19478 "../.././gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], SImode))))
    : -1 },
#line 18804 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 18804 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    ? (int) 
#line 18804 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    : -1 },
#line 19667 "../.././gcc/config/i386/i386.md"
  { "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD\n\
   && (! TARGET_USE_MOV0 || optimize_size)\n\
   && GENERAL_REG_P (operands[0])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19667 "../.././gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_size)
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19667 "../.././gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_size)
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 7479 "../.././gcc/config/i386/i386.md"
  { "optimize_size || TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7479 "../.././gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD)
    ? (int) 
#line 7479 "../.././gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD)
    : -1 },
#line 1356 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1356 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1356 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1558 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 1558 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 1558 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    : -1 },
  { "(TARGET_64BIT && TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 14381 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE) && 
#line 14383 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 14381 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE) && 
#line 14383 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 9442 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 9442 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 9442 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 867 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)",
    __builtin_constant_p 
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    ? (int) 
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    : -1 },
#line 8630 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8630 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8630 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 19902 "../.././gcc/config/i386/i386.md"
  { "(INTVAL (operands[3]) == -1\n\
    || INTVAL (operands[3]) == 1\n\
    || INTVAL (operands[3]) == 128)\n\
   && ix86_match_ccmode (insn, CCGCmode)\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 19902 "../.././gcc/config/i386/i386.md"
((INTVAL (operands[3]) == -1
    || INTVAL (operands[3]) == 1
    || INTVAL (operands[3]) == 128)
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 19902 "../.././gcc/config/i386/i386.md"
((INTVAL (operands[3]) == -1
    || INTVAL (operands[3]) == 1
    || INTVAL (operands[3]) == 128)
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 7265 "../.././gcc/config/i386/i386.md"
  { "GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM",
    __builtin_constant_p 
#line 7265 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
    ? (int) 
#line 7265 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
    : -1 },
#line 12177 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12177 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12177 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 9151 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 9151 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 9151 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 8700 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8700 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8700 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 4761 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 4761 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 4761 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 7385 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7385 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD)
    ? (int) 
#line 7385 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD)
    : -1 },
#line 1430 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW",
    __builtin_constant_p 
#line 1430 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    ? (int) 
#line 1430 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    : -1 },
#line 11531 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11531 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11531 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 4247 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 2968 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 2968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 2968 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
#line 9469 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 9469 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 9469 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 12262 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12262 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12262 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 768 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 768 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 768 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 3796 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_64BIT",
    __builtin_constant_p 
#line 3796 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    ? (int) 
#line 3796 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    : -1 },
#line 6491 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6491 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6491 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 19716 "../.././gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1])",
    __builtin_constant_p 
#line 19716 "../.././gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1]))
    ? (int) 
#line 19716 "../.././gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1]))
    : -1 },
#line 8863 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)",
    __builtin_constant_p 
#line 8863 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
    ? (int) 
#line 8863 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
    : -1 },
#line 19946 "../.././gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_SUB_ESP_8",
    __builtin_constant_p 
#line 19946 "../.././gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_8)
    ? (int) 
#line 19946 "../.././gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_8)
    : -1 },
#line 3480 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && reload_completed",
    __builtin_constant_p 
#line 3480 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    ? (int) 
#line 3480 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    : -1 },
#line 11011 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 11011 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 11011 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 10076 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10076 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10076 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 4928 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 4928 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 4928 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 12808 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)",
    __builtin_constant_p 
#line 12808 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    ? (int) 
#line 12808 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    : -1 },
#line 6541 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6541 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6541 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 2079 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode) && 1",
    __builtin_constant_p 
#line 2079 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    ? (int) 
#line 2079 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    : -1 },
#line 12099 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12099 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12099 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 2402 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2402 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2402 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 12486 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 12486 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 12486 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 11249 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11249 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11249 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 2035 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 0)",
    __builtin_constant_p 
#line 2035 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    ? (int) 
#line 2035 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    : -1 },
#line 4297 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))",
    __builtin_constant_p 
#line 4297 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    ? (int) 
#line 4297 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    : -1 },
#line 4672 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))",
    __builtin_constant_p 
#line 4672 "../.././gcc/config/i386/i386.md"
(reload_completed
   && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    ? (int) 
#line 4672 "../.././gcc/config/i386/i386.md"
(reload_completed
   && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    : -1 },
#line 1478 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands)",
    __builtin_constant_p 
#line 1478 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    ? (int) 
#line 1478 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    : -1 },
#line 9733 "../.././gcc/config/i386/i386.md"
  { "reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 9733 "../.././gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 9733 "../.././gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    : -1 },
#line 263 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands)",
    __builtin_constant_p 
#line 263 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    ? (int) 
#line 263 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    : -1 },
#line 5688 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000",
    __builtin_constant_p 
#line 5688 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
    ? (int) 
#line 5688 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
    : -1 },
#line 20462 "../.././gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE && !TARGET_64BIT",
    __builtin_constant_p 
#line 20462 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && !TARGET_64BIT)
    ? (int) 
#line 20462 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && !TARGET_64BIT)
    : -1 },
#line 20403 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128\n\
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128",
    __builtin_constant_p 
#line 20403 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128)
    ? (int) 
#line 20403 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128)
    : -1 },
#line 3057 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3057 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3057 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 20358 "../.././gcc/config/i386/i386.md"
  { "SIBLING_CALL_P (insn) && TARGET_64BIT",
    __builtin_constant_p 
#line 20358 "../.././gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && TARGET_64BIT)
    ? (int) 
#line 20358 "../.././gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && TARGET_64BIT)
    : -1 },
#line 14991 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14991 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14991 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 2845 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && GET_MODE (operands[0]) == XFmode\n\
   && ! (ANY_FP_REG_P (operands[0]) || \n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) || \n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 2845 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && GET_MODE (operands[0]) == XFmode
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 2845 "../.././gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && GET_MODE (operands[0]) == XFmode
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 1465 "../.././gcc/config/i386/i386.md"
  { "GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM",
    __builtin_constant_p 
#line 1465 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    ? (int) 
#line 1465 "../.././gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    : -1 },
#line 8159 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8159 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8159 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 10106 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 10106 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 10106 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 19310 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19310 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19310 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 5302 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5302 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5302 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4097 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4097 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4097 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 574 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 574 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 574 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 4036 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))",
    __builtin_constant_p 
#line 4036 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    ? (int) 
#line 4036 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    : -1 },
#line 4824 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 4824 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 4824 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 12820 "../.././gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 12820 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 12820 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 11771 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 11771 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 11771 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
  { "(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)",
    __builtin_constant_p (
#line 18720 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 18722 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 18720 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 18722 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 2123 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE && !TARGET_64BIT\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 2123 "../.././gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 2123 "../.././gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 8230 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8230 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8230 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 18074 "../.././gcc/config/i386/i386.md"
  { "TARGET_SINGLE_STRINGOP || optimize_size",
    __builtin_constant_p 
#line 18074 "../.././gcc/config/i386/i386.md"
(TARGET_SINGLE_STRINGOP || optimize_size)
    ? (int) 
#line 18074 "../.././gcc/config/i386/i386.md"
(TARGET_SINGLE_STRINGOP || optimize_size)
    : -1 },
#line 887 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)",
    __builtin_constant_p 
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    ? (int) 
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    : -1 },
#line 14973 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 14973 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 14973 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 20480 "../.././gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 20480 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && TARGET_64BIT)
    ? (int) 
#line 20480 "../.././gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && TARGET_64BIT)
    : -1 },
#line 3092 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 3092 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 3092 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 4111 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4111 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4111 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 2811 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 2811 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 2811 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
#line 14973 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 14973 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 14973 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 4129 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4129 "../.././gcc/config/i386/i386.md"
(TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4129 "../.././gcc/config/i386/i386.md"
(TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 8893 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)",
    __builtin_constant_p 
#line 8893 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
    ? (int) 
#line 8893 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
    : -1 },
#line 3285 "../.././gcc/config/i386/i386.md"
  { "(reload_completed\n\
    && dead_or_set_p (insn, operands[1])\n\
    && !reg_mentioned_p (operands[1], operands[0]))",
    __builtin_constant_p 
#line 3285 "../.././gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    ? (int) 
#line 3285 "../.././gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 17632 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)) && 
#line 17636 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 17632 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)) && 
#line 17636 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 576 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 576 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 576 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 14716 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14716 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14716 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 4194 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4194 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4194 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 20034 "../.././gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 3\n\
   || INTVAL (operands[2]) == 5\n\
   || INTVAL (operands[2]) == 9",
    __builtin_constant_p 
#line 20034 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    ? (int) 
#line 20034 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    : -1 },
#line 927 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 927 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 927 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 11595 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11595 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11595 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 13568 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13568 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13568 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 6719 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6719 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6719 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 12567 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12567 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12567 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11576 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11576 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11576 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 7101 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 7101 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 7101 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 9952 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 9952 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    ? (int) 
#line 9952 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    : -1 },
#line 13669 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13669 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13669 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 9336 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ix86_unary_operator_ok (NEG, DImode, operands)",
    __builtin_constant_p 
#line 9336 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
    ? (int) 
#line 9336 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
    : -1 },
#line 7870 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7870 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7870 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 6035 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6035 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6035 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 8642 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8642 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8642 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 8082 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8082 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8082 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 7748 "../.././gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
    && ix86_match_ccmode (insn,\n\
 			 GET_CODE (operands[1]) == CONST_INT\n\
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 7748 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn,
 			 GET_CODE (operands[1]) == CONST_INT
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 7748 "../.././gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn,
 			 GET_CODE (operands[1]) == CONST_INT
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 61 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT))
    ? (int) (
#line 61 "../.././gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 22 "../.././gcc/config/i386/sync.md"
(TARGET_64BIT))
    : -1 },
#line 14843 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14843 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14843 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 7887 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   /* Ensure that resulting mask is zero or sign extended operand.  */\n\
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64\n\
	   && INTVAL (operands[1]) > 32))\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || GET_MODE (operands[0]) == DImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7887 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7887 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 10538 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 10538 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 10538 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 12794 "../.././gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12794 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12794 "../.././gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 905 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 905 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 905 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
#line 254 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands)",
    __builtin_constant_p 
#line 254 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    ? (int) 
#line 254 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    : -1 },
#line 9099 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9099 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9099 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 4481 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4481 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH))
    ? (int) 
#line 4481 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH))
    : -1 },
#line 4208 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4208 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4208 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 2591 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 2591 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 2591 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 742 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)",
    __builtin_constant_p 
#line 742 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    ? (int) 
#line 742 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    : -1 },
#line 19446 "../.././gcc/config/i386/i386.md"
  { "! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn\n\
  && TARGET_SPLIT_LONG_MOVES",
    __builtin_constant_p 
#line 19446 "../.././gcc/config/i386/i386.md"
(! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn
  && TARGET_SPLIT_LONG_MOVES)
    ? (int) 
#line 19446 "../.././gcc/config/i386/i386.md"
(! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn
  && TARGET_SPLIT_LONG_MOVES)
    : -1 },
#line 8976 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8976 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8976 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 10662 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 10662 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 10662 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 19263 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)\n\
   && ! TARGET_FAST_PREFIX\n\
   && ! optimize_size",
    __builtin_constant_p 
#line 19263 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)
   && ! TARGET_FAST_PREFIX
   && ! optimize_size)
    ? (int) 
#line 19263 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)
   && ! TARGET_FAST_PREFIX
   && ! optimize_size)
    : -1 },
#line 1194 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && reload_completed",
    __builtin_constant_p 
#line 1194 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    ? (int) 
#line 1194 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    : -1 },
#line 14562 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SUN_TLS",
    __builtin_constant_p 
#line 14562 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
    ? (int) 
#line 14562 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
    : -1 },
#line 3478 "../.././gcc/config/i386/i386.md"
  { "0",
    __builtin_constant_p 
#line 3478 "../.././gcc/config/i386/i386.md"
(0)
    ? (int) 
#line 3478 "../.././gcc/config/i386/i386.md"
(0)
    : -1 },
#line 5434 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5434 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5434 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 8120 "../.././gcc/config/i386/i386.md"
  { "optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)",
    __builtin_constant_p 
#line 8120 "../.././gcc/config/i386/i386.md"
(optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL))
    ? (int) 
#line 8120 "../.././gcc/config/i386/i386.md"
(optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL))
    : -1 },
#line 10402 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)",
    __builtin_constant_p 
#line 10402 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    ? (int) 
#line 10402 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    : -1 },
#line 1422 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 1422 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 1422 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 2230 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2230 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2230 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 18762 "../.././gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 18762 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 18762 "../.././gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 18822 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE",
    __builtin_constant_p 
#line 18822 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    ? (int) 
#line 18822 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    : -1 },
#line 2428 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 2428 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 2428 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
#line 15246 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 15246 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 15246 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
#line 9299 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_unary_operator_ok (NEG, TImode, operands)",
    __builtin_constant_p 
#line 9299 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
    ? (int) 
#line 9299 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
    : -1 },
#line 11284 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11284 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11284 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 2860 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && GET_CODE (operands[1]) == MEM\n\
   && (GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)\n\
   && constant_pool_reference_p (operands[1])",
    __builtin_constant_p 
#line 2860 "../.././gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)
   && constant_pool_reference_p (operands[1]))
    ? (int) 
#line 2860 "../.././gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)
   && constant_pool_reference_p (operands[1]))
    : -1 },
#line 10048 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10048 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10048 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 3075 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 3075 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 3075 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 5638 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5638 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5638 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 19132 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19132 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STACK_PROBE)
    ? (int) 
#line 19132 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STACK_PROBE)
    : -1 },
#line 1025 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 1025 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    ? (int) 
#line 1025 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    : -1 },
#line 3048 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 3048 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 3048 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 18697 "../.././gcc/config/i386/i386.md"
  { "TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 18697 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 18697 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 10835 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 10835 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 10835 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 867 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)",
    __builtin_constant_p 
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    ? (int) 
#line 867 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    : -1 },
#line 18273 "../.././gcc/config/i386/i386.md"
  { "! optimize_size || TARGET_INLINE_ALL_STRINGOPS",
    __builtin_constant_p 
#line 18273 "../.././gcc/config/i386/i386.md"
(! optimize_size || TARGET_INLINE_ALL_STRINGOPS)
    ? (int) 
#line 18273 "../.././gcc/config/i386/i386.md"
(! optimize_size || TARGET_INLINE_ALL_STRINGOPS)
    : -1 },
#line 9645 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 9645 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 9645 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 9627 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9627 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9627 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 11458 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11458 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11458 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11609 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 11609 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 11609 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 4598 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4598 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4598 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4253 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4253 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 841 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)",
    __builtin_constant_p 
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    ? (int) 
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    : -1 },
#line 3075 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 3075 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 3075 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 8516 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)",
    __builtin_constant_p 
#line 8516 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
    ? (int) 
#line 8516 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
    : -1 },
#line 12746 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12746 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12746 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 1626 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)",
    __builtin_constant_p 
#line 1626 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    ? (int) 
#line 1626 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    : -1 },
#line 3808 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && TARGET_64BIT",
    __builtin_constant_p 
#line 3808 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    ? (int) 
#line 3808 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    : -1 },
#line 14790 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14790 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14790 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 2142 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE3 && reload_completed",
    __builtin_constant_p 
#line 2142 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    ? (int) 
#line 2142 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    : -1 },
#line 897 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)",
    __builtin_constant_p 
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    ? (int) 
#line 897 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    : -1 },
#line 2896 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 2896 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 2896 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
#line 1362 "../.././gcc/config/i386/mmx.md"
  { "TARGET_SSE || TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1362 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A)
    ? (int) 
#line 1362 "../.././gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A)
    : -1 },
#line 12780 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12780 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12780 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
  { "(TARGET_SSE2 && TARGET_SSE_MATH) && ( reload_completed)",
    __builtin_constant_p (
#line 9658 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH) && 
#line 9660 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 9658 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH) && 
#line 9660 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 7684 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 7684 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 7684 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 19744 "../.././gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19744 "../.././gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19744 "../.././gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 19152 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19152 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STACK_PROBE)
    ? (int) 
#line 19152 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STACK_PROBE)
    : -1 },
#line 4874 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 4874 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 4874 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 15237 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15237 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15237 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 2916 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 2916 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 2916 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 4537 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4537 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4537 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    : -1 },
#line 19206 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ((GET_MODE (operands[0]) == HImode \n\
	&& ((!optimize_size && !TARGET_FAST_PREFIX)\n\
	    || GET_CODE (operands[2]) != CONST_INT\n\
	    || CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K')))\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19206 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode 
	&& ((!optimize_size && !TARGET_FAST_PREFIX)
	    || GET_CODE (operands[2]) != CONST_INT
	    || CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K')))
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19206 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode 
	&& ((!optimize_size && !TARGET_FAST_PREFIX)
	    || GET_CODE (operands[2]) != CONST_INT
	    || CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K')))
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 12460 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12460 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12460 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 14772 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 14772 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 14772 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 9381 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands)",
    __builtin_constant_p 
#line 9381 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
    ? (int) 
#line 9381 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
    : -1 },
#line 887 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)",
    __builtin_constant_p 
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    ? (int) 
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    : -1 },
#line 6687 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6687 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6687 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 3529 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3529 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3529 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 786 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 786 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 786 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 14373 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_CMOVE",
    __builtin_constant_p 
#line 14373 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE)
    ? (int) 
#line 14373 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE)
    : -1 },
#line 2428 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 2428 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 2428 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 20177 "../.././gcc/config/i386/i386.md"
  { "TARGET_K8 && !optimize_size",
    __builtin_constant_p 
#line 20177 "../.././gcc/config/i386/i386.md"
(TARGET_K8 && !optimize_size)
    ? (int) 
#line 20177 "../.././gcc/config/i386/i386.md"
(TARGET_K8 && !optimize_size)
    : -1 },
#line 1972 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1972 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1972 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 15179 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))",
    __builtin_constant_p 
#line 15179 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    ? (int) 
#line 15179 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    : -1 },
#line 3703 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 3703 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 3703 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    : -1 },
#line 12519 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12519 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12519 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11516 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11516 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11516 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 3048 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 3048 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 3048 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 1418 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size)",
    __builtin_constant_p 
#line 1418 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
    ? (int) 
#line 1418 "../.././gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
    : -1 },
#line 238 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 238 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 238 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && ( reload_completed)",
    __builtin_constant_p (
#line 5030 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 5036 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5030 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 5036 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 4247 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4247 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 3641 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3641 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3641 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 12499 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 12499 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 12499 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 8674 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8674 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8674 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 11105 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 11105 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 11105 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 18771 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 18771 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 18771 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 1090 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 1090 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 1090 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
#line 10161 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 10161 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 10161 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 3960 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 3960 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 3960 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    : -1 },
#line 11235 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11235 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11235 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 5156 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, DImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5156 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5156 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4699 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4699 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4699 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 8138 "../.././gcc/config/i386/i386.md"
  { "(optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed",
    __builtin_constant_p 
#line 8138 "../.././gcc/config/i386/i386.md"
((optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed)
    ? (int) 
#line 8138 "../.././gcc/config/i386/i386.md"
((optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed)
    : -1 },
#line 2827 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 2827 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 2827 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 18688 "../.././gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH",
    __builtin_constant_p 
#line 18688 "../.././gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    ? (int) 
#line 18688 "../.././gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    : -1 },
#line 11708 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)\n\
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11708 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11708 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 6291 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 6291 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 6291 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 6085 "../.././gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6085 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6085 "../.././gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 927 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 927 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 927 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 14056 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 14056 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
    ? (int) 
#line 14056 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT)
    : -1 },
#line 20161 "../.././gcc/config/i386/i386.md"
  { "TARGET_K8 && !optimize_size\n\
   && CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K')",
    __builtin_constant_p 
#line 20161 "../.././gcc/config/i386/i386.md"
(TARGET_K8 && !optimize_size
   && CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K'))
    ? (int) 
#line 20161 "../.././gcc/config/i386/i386.md"
(TARGET_K8 && !optimize_size
   && CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K'))
    : -1 },
#line 6996 "../.././gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 6996 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 6996 "../.././gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 1030 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1030 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1030 "../.././gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 8185 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8185 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8185 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 9425 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 9425 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 9425 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 2305 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && reload_completed",
    __builtin_constant_p 
#line 2305 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    ? (int) 
#line 2305 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    : -1 },
#line 4166 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 12594 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)",
    __builtin_constant_p 
#line 12594 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    ? (int) 
#line 12594 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    : -1 },
#line 4444 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4444 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    ? (int) 
#line 4444 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    : -1 },
#line 14877 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14877 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14877 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 15307 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387",
    __builtin_constant_p 
#line 15307 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    ? (int) 
#line 15307 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    : -1 },
#line 9019 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 9019 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 9019 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 11863 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 11863 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed)
    ? (int) 
#line 11863 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed)
    : -1 },
#line 9986 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands)",
    __builtin_constant_p 
#line 9986 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands))
    ? (int) 
#line 9986 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands))
    : -1 },
#line 752 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)",
    __builtin_constant_p 
#line 752 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    ? (int) 
#line 752 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    : -1 },
#line 4097 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4097 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4097 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 12650 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12650 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12650 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 13694 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))",
    __builtin_constant_p 
#line 13694 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    ? (int) 
#line 13694 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    : -1 },
#line 2448 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 2448 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 2448 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 1792 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands)",
    __builtin_constant_p 
#line 1792 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands))
    ? (int) 
#line 1792 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands))
    : -1 },
#line 10494 "../.././gcc/config/i386/i386.md"
  { "TARGET_CMOVE",
    __builtin_constant_p 
#line 10494 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE)
    ? (int) 
#line 10494 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE)
    : -1 },
#line 20512 "../.././gcc/config/i386/i386.md"
  { "TARGET_3DNOW && TARGET_64BIT",
    __builtin_constant_p 
#line 20512 "../.././gcc/config/i386/i386.md"
(TARGET_3DNOW && TARGET_64BIT)
    ? (int) 
#line 20512 "../.././gcc/config/i386/i386.md"
(TARGET_3DNOW && TARGET_64BIT)
    : -1 },
#line 3092 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 3092 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 3092 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 12338 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12338 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 12338 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 18149 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)",
    __builtin_constant_p 
#line 18149 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    ? (int) 
#line 18149 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    : -1 },
#line 8437 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(~INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8437 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8437 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 519 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 519 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 519 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 11403 "../.././gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11403 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11403 "../.././gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 15276 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 15276 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    ? (int) 
#line 15276 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    : -1 },
#line 14140 "../.././gcc/config/i386/i386.md"
  { "ix86_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 14140 "../.././gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    ? (int) 
#line 14140 "../.././gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4173 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4173 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 20326 "../.././gcc/config/i386/i386.md"
  { "SIBLING_CALL_P (insn) && !TARGET_64BIT",
    __builtin_constant_p 
#line 20326 "../.././gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && !TARGET_64BIT)
    ? (int) 
#line 20326 "../.././gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && !TARGET_64BIT)
    : -1 },
#line 18747 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 18747 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 18747 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 18720 "../.././gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 18720 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 18720 "../.././gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 1588 "../.././gcc/config/i386/i386.md"
  { "reload_completed && (!TARGET_USE_MOV0 || optimize_size)",
    __builtin_constant_p 
#line 1588 "../.././gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
    ? (int) 
#line 1588 "../.././gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
    : -1 },
#line 6632 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6632 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6632 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 15713 "../.././gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))\n\
   && !reload_completed && !reload_in_progress",
    __builtin_constant_p 
#line 15713 "../.././gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !reload_completed && !reload_in_progress)
    ? (int) 
#line 15713 "../.././gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !reload_completed && !reload_in_progress)
    : -1 },
#line 10797 "../.././gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 10797 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 10797 "../.././gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 841 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)",
    __builtin_constant_p 
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    ? (int) 
#line 841 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    : -1 },
#line 19725 "../.././gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19725 "../.././gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19725 "../.././gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 12699 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12699 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12699 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11481 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11481 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11481 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 868 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 868 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 868 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
#line 11315 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11315 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11315 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 12726 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 12726 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 12726 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 15199 "../.././gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 15199 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH)
    ? (int) 
#line 15199 "../.././gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH)
    : -1 },
#line 2111 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE || TARGET_64BIT",
    __builtin_constant_p 
#line 2111 "../.././gcc/config/i386/i386.md"
(TARGET_SSE || TARGET_64BIT)
    ? (int) 
#line 2111 "../.././gcc/config/i386/i386.md"
(TARGET_SSE || TARGET_64BIT)
    : -1 },
#line 10148 "../.././gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 10148 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 10148 "../.././gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 6750 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6750 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6750 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 4592 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4592 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 4592 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 12049 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12049 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12049 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 1817 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1817 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    ? (int) 
#line 1817 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    : -1 },
#line 2438 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 2438 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 2438 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
#line 4208 "../.././gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4208 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4208 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 2737 "../.././gcc/config/i386/i386.md"
  { "!optimize_size",
    __builtin_constant_p 
#line 2737 "../.././gcc/config/i386/i386.md"
(!optimize_size)
    ? (int) 
#line 2737 "../.././gcc/config/i386/i386.md"
(!optimize_size)
    : -1 },
#line 565 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 3556 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3556 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3556 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 13108 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387",
    __builtin_constant_p 
#line 13108 "../.././gcc/config/i386/i386.md"
(TARGET_80387)
    ? (int) 
#line 13108 "../.././gcc/config/i386/i386.md"
(TARGET_80387)
    : -1 },
#line 19620 "../.././gcc/config/i386/i386.md"
  { "! optimize_size && ! TARGET_READ_MODIFY",
    __builtin_constant_p 
#line 19620 "../.././gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY)
    ? (int) 
#line 19620 "../.././gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY)
    : -1 },
#line 12163 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12163 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12163 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 18938 "../.././gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])",
    __builtin_constant_p 
#line 18938 "../.././gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    ? (int) 
#line 18938 "../.././gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    : -1 },
#line 15091 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP",
    __builtin_constant_p 
#line 15091 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP)
    ? (int) 
#line 15091 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP)
    : -1 },
#line 7822 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 7822 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 7822 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 14936 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14936 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14936 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 19691 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == HImode\n\
    || GET_MODE (operands[0]) == SImode \n\
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))\n\
   && (optimize_size || TARGET_PENTIUM)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19691 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == HImode
    || GET_MODE (operands[0]) == SImode 
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))
   && (optimize_size || TARGET_PENTIUM)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19691 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == HImode
    || GET_MODE (operands[0]) == SImode 
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))
   && (optimize_size || TARGET_PENTIUM)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 5868 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5868 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5868 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 1410 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 1410 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    ? (int) 
#line 1410 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    : -1 },
#line 7986 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && GET_MODE (operands[2]) != QImode\n\
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
	 && !(INTVAL (operands[3]) & ~255))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~127)))",
    __builtin_constant_p 
#line 7986 "../.././gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    ? (int) 
#line 7986 "../.././gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    : -1 },
#line 9713 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands)",
    __builtin_constant_p 
#line 9713 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands))
    ? (int) 
#line 9713 "../.././gcc/config/i386/i386.md"
(TARGET_80387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands))
    : -1 },
#line 2912 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 2912 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 2912 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 11644 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 11644 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 11644 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 5204 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5204 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5204 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 887 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)",
    __builtin_constant_p 
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    ? (int) 
#line 887 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    : -1 },
#line 13694 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))",
    __builtin_constant_p 
#line 13694 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    ? (int) 
#line 13694 "../.././gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    : -1 },
#line 9272 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(INTVAL (operands[2]) & ~255)\n\
    && (INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 9272 "../.././gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 9272 "../.././gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 7965 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[2])\n\
    && GET_MODE (operands[2]) != QImode\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~(127 << 8))))",
    __builtin_constant_p 
#line 7965 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    ? (int) 
#line 7965 "../.././gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    : -1 },
#line 6528 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6528 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6528 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 13144 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || TARGET_SSE",
    __builtin_constant_p 
#line 13144 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE)
    ? (int) 
#line 13144 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE)
    : -1 },
#line 12212 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12212 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12212 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 8571 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8571 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8571 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 10174 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 10174 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 10174 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 7396 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && (optimize_size || TARGET_USE_CLTD)",
    __builtin_constant_p 
#line 7396 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_size || TARGET_USE_CLTD))
    ? (int) 
#line 7396 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_size || TARGET_USE_CLTD))
    : -1 },
#line 3141 "../.././gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3141 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3141 "../.././gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 5030 "../.././gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])",
    __builtin_constant_p 
#line 5030 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    ? (int) 
#line 5030 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    : -1 },
#line 2088 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		    ? flow2_completed : reload_completed)\n\
   && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2088 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? flow2_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2088 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? flow2_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 13407 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 13407 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE_MATH)
    ? (int) 
#line 13407 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE_MATH)
    : -1 },
#line 9617 "../.././gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9617 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9617 "../.././gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 565 "../.././gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 565 "../.././gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 4073 "../.././gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 4073 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 4073 "../.././gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 176 "../.././gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))\n\
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 176 "../.././gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 176 "../.././gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 12760 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)",
    __builtin_constant_p 
#line 12760 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    ? (int) 
#line 12760 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    : -1 },
#line 19234 "../.././gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)\n\
   && ! optimize_size\n\
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)\n\
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))",
    __builtin_constant_p 
#line 19234 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)
   && ! optimize_size
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode)))
    ? (int) 
#line 19234 "../.././gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)
   && ! optimize_size
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode)))
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4173 "../.././gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4166 "../.././gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4173 "../.././gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 11218 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 63\n\
   && (TARGET_USE_CLTD || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11218 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11218 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 3092 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 3092 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 3092 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 18581 "../.././gcc/config/i386/i386.md"
  { "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])",
    __builtin_constant_p 
#line 18581 "../.././gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    ? (int) 
#line 18581 "../.././gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    : -1 },
#line 19655 "../.././gcc/config/i386/i386.md"
  { "! optimize_size && ! TARGET_READ_MODIFY_WRITE",
    __builtin_constant_p 
#line 19655 "../.././gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY_WRITE)
    ? (int) 
#line 19655 "../.././gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY_WRITE)
    : -1 },
#line 3737 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 3737 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 3737 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 1371 "../.././gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT",
    __builtin_constant_p 
#line 1371 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    ? (int) 
#line 1371 "../.././gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    : -1 },
#line 3717 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 3717 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 3717 "../.././gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
#line 8913 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8913 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8913 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 852 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 852 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 852 "../.././gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 8204 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8204 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8204 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 4980 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 4987 "../.././gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 4980 "../.././gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 4987 "../.././gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 8537 "../.././gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8537 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8537 "../.././gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 9997 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, DImode, operands)",
    __builtin_constant_p 
#line 9997 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands))
    ? (int) 
#line 9997 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands))
    : -1 },
#line 2127 "../.././gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 2127 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 2127 "../.././gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6661 "../.././gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6661 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6661 "../.././gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 5947 "../.././gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xffff) != 0x8000",
    __builtin_constant_p 
#line 5947 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
    ? (int) 
#line 5947 "../.././gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
    : -1 },
#line 2390 "../.././gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2390 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2390 "../.././gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 717 "../.././gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 717 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 717 "../.././gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 13553 "../.././gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13553 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13553 "../.././gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
};

const size_t n_insn_conditions = 573;
const int insn_elision_unavailable = 0;
#endif
