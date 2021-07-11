// SPDX-License-Identifier: GPL-2.0-only
/*
 * File: Include/Math/Vector3.h
 *
 * A representation of 3-dimensional vectors and points.
 *
 * Copyright (c) 2021 HTG-YT
 * Author: HTG-YT <https://github.com/HTG-YT>
 */

#include "../Prelude/Defs.h"

#ifndef __C_GAME_ENGINE_VECTOR3_H__
#define __C_GAME_ENGINE_VECTOR3_H__

struct Vector3 {
        float x;
        float y;
        float z;
};

INLINE Vector3 Add(struct Vector3 lhs, struct Vector3 rhs);
INLINE Vector3 Sub(struct Vector3 lhs, struct Vector3 rhs);
INLINE Vector3 Mul(struct Vector3 lhs, float num);
INLINE Vector3 Div(struct Vector3 lhs, float num);

INLINE float SquMagnitude(struct Vector3 vector3);

INLINE int Eq(struct Vector3 lhs, struct Vector3 rhs);
INLINE int Ne(struct Vector3 lhs, struct Vector3 rhs);

#endif  /* __C_GAME_ENGINE_VECTOR3_H__ */
