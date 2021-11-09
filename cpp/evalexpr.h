/*
 * Copyright (c) 2004 - 2009, Nils R. Weller
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef EVALEXPR_H
#define EVALEXPR_H

struct token;
struct type;
struct vreg;
struct ty_string;
struct initializer;
struct tyval;
struct function;
struct expr;

#if 0
struct addr_const {
	struct decl	*dec;
	long		diff;
};

struct tyval {
	struct type		*type;
	struct ty_string	*str;
	void			*value;
	struct addr_const	*address;
	struct initializer	*static_init;
	int			alloc;
	int			is_nullptr_const;
};
#endif


int	convert_tyval(struct tyval *left, struct tyval *right);
void	do_conv(struct tyval *, int);
int	eval_const_expr(struct expr *ex, int extype, int *not_constant);
int	const_value_is_nonzero(struct tyval *);
void	process_labels_used_list(struct function *f);

#endif
