#ifndef _ALLINSTR_H_
#define _ALLINSTR_H_

#include "mips_target.h"

/* push */
void trans_push(char *mode, char *argus[], char *suffix);
void trans_push_r(char *reg);

/* mov */
void trans_mov(char *mode, char *argus[], char *suffix);
void trans_mov_ir(const char *imm,const char *reg);//-> li reg,imm
void trans_mov_rr(const char *src,const char *dest );//->move reg,reg
void trans_mov_la2r(const char *lable,const char *reg);// ->la reg,lable
void trans_mov_rm( const char *reg ,const char *addr, int size );//register to memory
void trans_mov_mr(const char *addr,const char *reg ,int size);//memory to register
void trans_mov_im(const char *imm,const char *addr, int size);//imm to memory

#endif