// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.)

#define ORDER_PP_NAT(...) ORDER_PP_PM(,(,0##__VA_ARGS__),8NAT,)

#define ORDER_PP_DEF_8nat(...) 8DEF_CONST,ORDER_PP_PM(,(,0##__VA_ARGS__),8NAT,),
#define ORDER_PP_8NAT(P,t,...) ORDER_PP_OVERLOAD(8NAT,ORDER_PP_TUPLE_SIZE_MAX_11_OR_MORE t##P)t##P
#define ORDER_PP_8NAT_1(P,a) )(P##a)
#define ORDER_PP_8NAT_2(P,a,b) )(P##b)(P##a)
#define ORDER_PP_8NAT_3(P,a,b,c) )(P##c)(P##b)(P##a)
#define ORDER_PP_8NAT_4(P,a,b,c,d) )(P##d)(P##c)(P##b)(P##a)
#define ORDER_PP_8NAT_5(P,a,b,c,d,e) )(P##e)(P##d)(P##c)(P##b)(P##a)
#define ORDER_PP_8NAT_6(P,a,b,c,d,e,f) )(P##f)(P##e)(P##d)(P##c)(P##b)(P##a)
#define ORDER_PP_8NAT_7(P,a,b,c,d,e,f,g) )(P##g)(P##f)(P##e)(P##d)(P##c)(P##b)(P##a)
#define ORDER_PP_8NAT_8(P,a,b,c,d,e,f,g,h) )(P##h)(P##g)(P##f)(P##e)(P##d)(P##c)(P##b)(P##a)
#define ORDER_PP_8NAT_9(P,a,b,c,d,e,f,g,h,i) )(P##i)(P##h)(P##g)(P##f)(P##e)(P##d)(P##c)(P##b)(P##a)
#define ORDER_PP_8NAT_10(P,a,b,c,d,e,f,g,h,i,j) )(P##j)(P##i)(P##h)(P##g)(P##f)(P##e)(P##d)(P##c)(P##b)(P##a)
#define ORDER_PP_8NAT_11_OR_MORE(P,a,b,c,d,e,f,g,h,i,j,...) (,(,P##__VA_ARGS__),8NAT,)(P##j)(P##i)(P##h)(P##g)(P##f)(P##e)(P##d)(P##c)(P##b)(P##a)

#define ORDER_PP_DEF_8nat_add ORDER_PP_OP_LEFT_NATIVE(9NAT_PLUS,0IS_NAT)

#define ORDER_PP_DEF_8nat_dec ORDER_PP_FN_CM(1,8NAT_DEC,0IS_NAT)
#define ORDER_PP_8NAT_DEC(P,n,...) (,ORDER_PP_NAT_PRED n##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8nat_div ORDER_PP_OP_LEFT_NATIVE(9NAT_QUOTIENT,0IS_NAT)

#define ORDER_PP_DEF_8nat_equal ORDER_PP_FN_NATIVE(2,9NAT_EQUAL,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_EQUAL(P,l,r) ORDER_PP_NAT_EQUAL(,P##l,P##r)(,8true,8false)

#define ORDER_PP_DEF_8nat_greater ORDER_PP_FN_NATIVE(2,9NAT_GREATER,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_GREATER(P,l,r) ORDER_PP_NAT_LESS(,P##r,P##l)(,8true,8false)

#define ORDER_PP_DEF_8nat_greater_eq ORDER_PP_FN_NATIVE(2,9NAT_GREATER_EQ,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_GREATER_EQ(P,l,r) ORDER_PP_NAT_LESS(,P##l,P##r)(,8false,8true)

#define ORDER_PP_DEF_8nat_inc ORDER_PP_FN_CM(1,8NAT_INC,0IS_NAT)
#define ORDER_PP_8NAT_INC(P,n,...) (,ORDER_PP_NAT_SUCC n##P,P##__VA_ARGS__)

#define ORDER_PP_DEF_8nat_is_0 ORDER_PP_FN_CM(1,8NAT_IS_0,0IS_NAT)
#define ORDER_PP_8NAT_IS_0(P,x,...) (,ORDER_PP_NAT_IS_ZERO x##P(,8true,8false),P##__VA_ARGS__)

#define ORDER_PP_DEF_8nat_isnt_0 ORDER_PP_FN_CM(1,8NAT_ISNT_0,0IS_NAT)
#define ORDER_PP_8NAT_ISNT_0(P,x,...) (,ORDER_PP_NAT_IS_ZERO x##P(,8false,8true),P##__VA_ARGS__)

#define ORDER_PP_DEF_8nat_less ORDER_PP_FN_NATIVE(2,9NAT_LESS,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_LESS(P,l,r) ORDER_PP_NAT_LESS(,P##l,P##r)(,8true,8false)

#define ORDER_PP_DEF_8nat_less_eq ORDER_PP_FN_NATIVE(2,9NAT_LESS_EQ,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_LESS_EQ(P,l,r) ORDER_PP_NAT_LESS(,P##r,P##l)(,8false,8true)

#define ORDER_PP_DEF_8nat_minus ORDER_PP_FN_NATIVE(2,9NAT_MINUS,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_MINUS ORDER_PP_NAT_MINUS

#define ORDER_PP_DEF_8nat_mul ORDER_PP_OP_LEFT_NATIVE(9NAT_TIMES,0IS_NAT)

#define ORDER_PP_DEF_8nat_not_eq ORDER_PP_FN_NATIVE(2,9NAT_NOT_EQ,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_NOT_EQ(P,l,r) ORDER_PP_NAT_EQUAL(,P##l,P##r)(,8false,8true)

#define ORDER_PP_DEF_8nat_plus ORDER_PP_FN_NATIVE(2,9NAT_PLUS,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_PLUS ORDER_PP_NAT_PLUS

#define ORDER_PP_DEF_8nat_quotient ORDER_PP_FN_NATIVE(2,9NAT_QUOTIENT,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_QUOTIENT ORDER_PP_NAT_QUOTIENT

#define ORDER_PP_DEF_8nat_quotient_10 ORDER_PP_FN_CM(1,8NAT_QUOTIENT_10,0IS_NAT)
#define ORDER_PP_8NAT_QUOTIENT_10(P,n,...) (,ORDER_PP_NAT_DIV_10 P##n,P##__VA_ARGS__)

#define ORDER_PP_DEF_8nat_remainder ORDER_PP_FN_NATIVE(2,9NAT_REMAINDER,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_REMAINDER ORDER_PP_NAT_REMAINDER

#define ORDER_PP_DEF_8nat_remainder_10_lit ORDER_PP_FN_CM(1,8NAT_REMAINDER_10_LIT,0IS_NAT)
#define ORDER_PP_8NAT_REMAINDER_10_LIT(P,n,...) (,ORDER_PP_NAT_MOD_10_LIT P##n,P##__VA_ARGS__)

#define ORDER_PP_DEF_8nat_sub ORDER_PP_OP_LEFT_NATIVE(9NAT_MINUS,0IS_NAT)

#define ORDER_PP_DEF_8nat_times ORDER_PP_FN_NATIVE(2,9NAT_TIMES,0IS_NAT,0IS_NAT)
#define ORDER_PP_9NAT_TIMES ORDER_PP_NAT_TIMES

#define ORDER_PP_DEF_8nat_times_digit ORDER_PP_FN_NATIVE(2,9NAT_TIMES_DIGIT,0IS_NAT,0IS_DIGIT)
#define ORDER_PP_9NAT_TIMES_DIGIT(P,n,d) ORDER_PP_FY(NAT_CARRY_0_A,(,ORDER_PP_NAT_TIMES_DIGIT_##d P##n))

#define ORDER_PP_DEF_8nat_times_10 ORDER_PP_FN_CM(1,8NAT_TIMES_10,0IS_NAT)
#define ORDER_PP_8NAT_TIMES_10(P,n,...) (,ORDER_PP_NAT_IS_ZERO P##n(,,(0))P##n,P##__VA_ARGS__)

#define ORDER_PP_DEF_8nat_to_lit ORDER_PP_FN_CM(1,8NAT_TO_LIT,0IS_NAT)
#define ORDER_PP_8NAT_TO_LIT(P,n,...) (,ORDER_PP_PM(,ORDER_PP_NAT_TO_LIT_A n##P,),P##__VA_ARGS__)

#define ORDER_PP_NAT_TO_LIT_A(d) (ORDER_PP_PRIMITIVE_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_RPAREN ORDER_PP_RPAREN ORDER_PP_OPEN(,,8STOP_REM),ORDER_PP_NAT_TO_LIT_B)
#define ORDER_PP_NAT_TO_LIT_B(d) ORDER_PP_NAT_DIGIT_##d))ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_OPEN(,,8STOP_REM),ORDER_PP_NAT_TO_LIT_C)
#define ORDER_PP_NAT_TO_LIT_C(d) (ORDER_PP_PRIMITIVE_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_RPAREN ORDER_PP_RPAREN ORDER_PP_OPEN(,,8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_REVERSE_A),ORDER_PP_NAT_TO_LIT_D)
#define ORDER_PP_NAT_TO_LIT_D(d) ORDER_PP_NAT_DIGIT_##d))ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_OPEN(,,8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_REVERSE_A),ORDER_PP_NAT_TO_LIT_E)
#define ORDER_PP_NAT_TO_LIT_E(d) (ORDER_PP_PRIMITIVE_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_RPAREN ORDER_PP_RPAREN()ORDER_PP_OPEN(,,8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_REVERSE_A),ORDER_PP_NAT_TO_LIT_F)
#define ORDER_PP_NAT_TO_LIT_F(d) ORDER_PP_NAT_DIGIT_##d))ORDER_PP_NAT_IS_SENTINEL_##d(,()ORDER_PP_OPEN(,,8SEQ_TERMINATE,ORDER_PP_SEQ_CAT_REVERSE_A),ORDER_PP_NAT_TO_LIT_C)

#define ORDER_PP_DEF_8nat_to_seq_of_digits ORDER_PP_FN_NATIVE(1,9NAT_TO_SEQ_OF_DIGITS,0IS_NAT)
#define ORDER_PP_9NAT_TO_SEQ_OF_DIGITS(P,n) ORDER_PP_FX(9NAT_TO_SEQ_OF_DIGITS_F,ORDER_PP_9SEQ_REVERSE(,P##n))
#define ORDER_PP_9NAT_TO_SEQ_OF_DIGITS_F(d) (ORDER_PP_NAT_DIGIT_##d)

#define ORDER_PP_DEF_8seq_of_digits_to_nat ORDER_PP_FN_NATIVE(1,9SEQ_OF_DIGITS_TO_NAT,0IS_SEQ)
#define ORDER_PP_9SEQ_OF_DIGITS_TO_NAT(P,s) ORDER_PP_FY(9SEQ_REVERSE,(,ORDER_PP_9SEQ_OF_DIGITS_TO_NAT_F P##s))
#define ORDER_PP_9SEQ_OF_DIGITS_TO_NAT_F(d) (0##d)

// Macros for numeric operations

/*
#define ORDER_PP_NAT_EQUAL(P,l,r)     ORDER_PP_NAT_CHAOS_BPR(,EQUAL,P##l,P##r)
#define ORDER_PP_NAT_LESS(P,l,r)      ORDER_PP_NAT_CHAOS_BPR(,LESS,P##l,P##r)
#define ORDER_PP_NAT_MINUS(P,l,r)     ORDER_PP_NAT_CHAOS_BOP(,SUB,P##l,P##r)
#define ORDER_PP_NAT_PLUS(P,l,r)      ORDER_PP_FX(NAT_CARRY_0_A,ORDER_PP_FX(NAT_PLUS_PREPARE_AA,ORDER_PP_9VSEQ_PAIR(,P##l P##r,P##r P##l)ORDER_PP_RPAREN))
#define ORDER_PP_NAT_QUOTIENT(P,l,r)  ORDER_PP_NAT_CHAOS_BOP(,DIV,P##l,P##r)
#define ORDER_PP_NAT_REMAINDER(P,l,r) ORDER_PP_NAT_CHAOS_BOP(,MOD,P##l,P##r)
#define ORDER_PP_NAT_TIMES(P,l,r)     ORDER_PP_NAT_CHAOS_BOP(,MUL,P##l,P##r)
*/

#define ORDER_PP_NAT_DEC(P,x)    ORDER_PP_NAT_PRED P##x
#define ORDER_PP_NAT_INC(P,x)    ORDER_PP_NAT_SUCC P##x
#define ORDER_PP_NAT_IS_0(P,x)   ORDER_PP_NAT_IS_ZERO P##x
#define ORDER_PP_NAT_TO_LIT(P,n) ORDER_PP_PM(,ORDER_PP_NAT_TO_LIT_A n##P,)
#define ORDER_PP_NAT_TO_NAT(P,n) P##n

/*
#include "chaos/preprocessor/arbitrary/div.h"
#include "chaos/preprocessor/arbitrary/equal.h"
#include "chaos/preprocessor/arbitrary/less.h"
#include "chaos/preprocessor/arbitrary/mod.h"
#include "chaos/preprocessor/arbitrary/mul.h"
#include "chaos/preprocessor/arbitrary/sub.h"
*/

// Details

#define ORDER_PP_NAT_PLUS_PREPARE_AA(l,r) ORDER_PP_CAT(ORDER_PP_NAT_IS_SENTINEL_##l(ORDER_PP_NAT_PLUS_PREPARE_XX_,1,0),ORDER_PP_NAT_IS_SENTINEL_##r(,1,0))(,BB,ORDER_PP_NAT_DIGIT_TO_ZEROS_##l,ORDER_PP_NAT_DIGIT_TO_ZEROS_##r)
#define ORDER_PP_NAT_PLUS_PREPARE_BB(l,r) ORDER_PP_CAT(ORDER_PP_NAT_IS_SENTINEL_##l(ORDER_PP_NAT_PLUS_PREPARE_XX_,1,0),ORDER_PP_NAT_IS_SENTINEL_##r(,1,0))(,AA,ORDER_PP_NAT_DIGIT_TO_ZEROS_##l,ORDER_PP_NAT_DIGIT_TO_ZEROS_##r)
#define ORDER_PP_NAT_PLUS_PREPARE_XX_00(P,x,l,r) (P##l,P##r)ORDER_PP_NAT_PLUS_PREPARE_##x
#define ORDER_PP_NAT_PLUS_PREPARE_XX_01(P,x,l,r) (P##l,P##r)ORDER_PP_NAT_PLUS_PREPARE_A0
#define ORDER_PP_NAT_PLUS_PREPARE_XX_10(P,x,l,r) (P##l,P##r)ORDER_PP_NAT_PLUS_PREPARE_0A
#define ORDER_PP_NAT_PLUS_PREPARE_XX_11(P,x,l,r) (P##l,ORDER_PP_PRIMITIVE_CAT(r,1))ORDER_PP_EAT(
#define ORDER_PP_NAT_PLUS_PREPARE_A0(l,_) (ORDER_PP_NAT_DIGIT_TO_ZEROS_##l,ORDER_PP_NAT_IS_SENTINEL_##l(,1 ORDER_PP_RPAREN ORDER_PP_EAT ORDER_PP_LPAREN,ORDER_PP_RPAREN ORDER_PP_NAT_PLUS_PREPARE_B0)
#define ORDER_PP_NAT_PLUS_PREPARE_B0(l,_) (ORDER_PP_NAT_DIGIT_TO_ZEROS_##l,ORDER_PP_NAT_IS_SENTINEL_##l(,1 ORDER_PP_RPAREN ORDER_PP_EAT ORDER_PP_LPAREN,ORDER_PP_RPAREN ORDER_PP_NAT_PLUS_PREPARE_A0)
#define ORDER_PP_NAT_PLUS_PREPARE_0A(_,l) (ORDER_PP_NAT_DIGIT_TO_ZEROS_##l,ORDER_PP_NAT_IS_SENTINEL_##l(,1 ORDER_PP_RPAREN ORDER_PP_EAT ORDER_PP_LPAREN,ORDER_PP_RPAREN ORDER_PP_NAT_PLUS_PREPARE_0B)
#define ORDER_PP_NAT_PLUS_PREPARE_0B(_,l) (ORDER_PP_NAT_DIGIT_TO_ZEROS_##l,ORDER_PP_NAT_IS_SENTINEL_##l(,1 ORDER_PP_RPAREN ORDER_PP_EAT ORDER_PP_LPAREN,ORDER_PP_RPAREN ORDER_PP_NAT_PLUS_PREPARE_0A)

#define ORDER_PP_0IS_NAT ORDER_PP_0IS_SEQ_CONS
#define ORDER_PP_0IS_DIGIT(P,x) ORDER_PP_AND(and)(ORDER_PP_0IS_LIT(,P##x))(and)(ORDER_PP_LIT_LESS(,P##x,10))()

#define ORDER_PP_NAT_CLOSE_A(d) )ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_CLOSE_B)
#define ORDER_PP_NAT_CLOSE_B(d) )ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_CLOSE_A)

#define ORDER_PP_NAT_DIGIT_0 0
#define ORDER_PP_NAT_DIGIT_1 1
#define ORDER_PP_NAT_DIGIT_2 2
#define ORDER_PP_NAT_DIGIT_3 3
#define ORDER_PP_NAT_DIGIT_4 4
#define ORDER_PP_NAT_DIGIT_5 5
#define ORDER_PP_NAT_DIGIT_6 6
#define ORDER_PP_NAT_DIGIT_7 7
#define ORDER_PP_NAT_DIGIT_8 8
#define ORDER_PP_NAT_DIGIT_9 9
#define ORDER_PP_NAT_DIGIT_00 0
#define ORDER_PP_NAT_DIGIT_01 1
#define ORDER_PP_NAT_DIGIT_02 2
#define ORDER_PP_NAT_DIGIT_03 3
#define ORDER_PP_NAT_DIGIT_04 4
#define ORDER_PP_NAT_DIGIT_05 5
#define ORDER_PP_NAT_DIGIT_06 6
#define ORDER_PP_NAT_DIGIT_07 7
#define ORDER_PP_NAT_DIGIT_08 8
#define ORDER_PP_NAT_DIGIT_09 9

#define ORDER_PP_NAT_DIGIT_EXCEPT_0_0
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_1 1
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_2 2
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_3 3
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_4 4
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_5 5
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_6 6
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_7 7
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_8 8
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_9 9
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_00
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_01 1
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_02 2
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_03 3
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_04 4
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_05 5
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_06 6
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_07 7
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_08 8
#define ORDER_PP_NAT_DIGIT_EXCEPT_0_09 9

#define ORDER_PP_NAT_EAT(d) ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_EAT_B)
#define ORDER_PP_NAT_EAT_B(d) ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_EAT)

#define ORDER_PP_NAT_FALSE(d) ORDER_PP_NAT_IS_SENTINEL_##d(ORDER_PP_,IF_8false,NAT_ESLAF)
#define ORDER_PP_NAT_ESLAF(d) ORDER_PP_NAT_IS_SENTINEL_##d(ORDER_PP_,IF_8false,NAT_FALSE)

#define ORDER_PP_NAT_IS_ZERO(d) ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_NAT_IS_ZERO_##d,ORDER_PP_NAT_FALSE)
#define ORDER_PP_NAT_IS_ZERO_00(P,t,...) P##t
#define ORDER_PP_NAT_IS_ZERO_01(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_ZERO_02(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_ZERO_03(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_ZERO_04(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_ZERO_05(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_ZERO_06(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_ZERO_07(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_ZERO_08(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_ZERO_09(P,t,...) P##__VA_ARGS__

#define ORDER_PP_NAT_IS_LESS_10(d) ORDER_PP_NAT_IS_SENTINEL_##d(ORDER_PP_,IF_8true,ORDER_PP_NAT_FALSE)
#define ORDER_PP_NAT_IS_LESS_100(d) ORDER_PP_NAT_IS_SENTINEL_##d(ORDER_PP_,IF_8true,NAT_IS_LESS_10)

#define ORDER_PP_NAT_IS_SENTINEL_0(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_1(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_2(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_3(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_4(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_5(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_6(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_7(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_8(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_9(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_IS_SENTINEL_00(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_01(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_02(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_03(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_04(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_05(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_06(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_07(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_08(P,t,...) P##t
#define ORDER_PP_NAT_IS_SENTINEL_09(P,t,...) P##t

#define ORDER_PP_NAT_DIV_10(d) ORDER_PP_NAT_IS_SENTINEL_##d(,(00),)
#define ORDER_PP_NAT_DIV_100(d) ORDER_PP_NAT_IS_SENTINEL_##d(,(00),ORDER_PP_NAT_DIV_10)

#define ORDER_PP_NAT_MOD_10_LIT(d) ORDER_PP_NAT_DIGIT_##d ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_EAT)
#define ORDER_PP_NAT_MOD_100_LIT(d) ORDER_PP_REVERSE_CAT ORDER_PP_BLOCK(ORDER_PP_NAT_DIGIT_##d,ORDER_PP_NAT_IS_SENTINEL_##d(,ORDER_PP_RPAREN,ORDER_PP_NAT_MOD_100_LIT_B)
#define ORDER_PP_NAT_MOD_100_LIT_B(d) ORDER_PP_NAT_DIGIT_EXCEPT_0_##d)ORDER_PP_NAT_IS_SENTINEL_##d(,,ORDER_PP_NAT_EAT)

/*
#define ORDER_PP_NAT_CHAOS_BOP(P,op,l,r) ORDER_PP_FZ(9SEQ_OF_DIGITS_TO_NAT,(,CHAOS_PP_ARBITRARY_##op(ORDER_PP_9NAT_TO_SEQ_OF_DIGITS(,P##l),ORDER_PP_9NAT_TO_SEQ_OF_DIGITS(,P##r))))
#define ORDER_PP_NAT_CHAOS_BPR(P,pr,l,r) ORDER_PP_OVERLOAD(NAT_CHAOS_BPR,CHAOS_PP_ARBITRARY_##pr(ORDER_PP_9NAT_TO_SEQ_OF_DIGITS(,P##l),ORDER_PP_9NAT_TO_SEQ_OF_DIGITS(,P##r)))
#define ORDER_PP_NAT_CHAOS_BPR_0(P,t,...) P##__VA_ARGS__
#define ORDER_PP_NAT_CHAOS_BPR_1(P,t,...) P##t
*/

#include "order/prelude/nat_tables.h"
