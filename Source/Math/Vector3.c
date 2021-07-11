// SPDX-License-Identifier: GPL-2.0-only
/*
 * File: Source/Math/Vector3.c
 *
 * Implementation of Include/Math/Vector3.h
 *
 * Copyright (c) 2021 HTG-YT
 * Author: HTG-YT <https://github.com/HTG-YT>
 */

#include "../../Include/Math/Vector3.h"

INLINE struct Vector3
Add(struct Vector3 lhs, struct Vector3 rhs) {
        return (struct Vector3) {
                lhs.x + rhs.x,
                lhs.y + rhs.y,
                lhs.z + rhs.z
        };
}

INLINE struct Vector3
Sub(struct Vector3 lhs, struct Vector3 rhs) {
        return (struct Vector3) {
                lhs.x - rhs.x,
                lhs.y - rhs.y,
                lhs.z - rhs.z
        };
}

INLINE struct Vector3
Mul(struct Vector3 lhs, float num) {
        return (struct Vector3) {
                lhs.x * num,
                lhs.y * num,
                lhs.z * num
        };
}

INLINE struct Vector3
Div(struct Vector3 lhs, float num) {
        return (struct Vector3) {
                lhs.x / num,
                lhs.y / num,
                lhs.z / num
        };
}

INLINE float
SquMagnitude(struct Vector3 vector3) {
        return vector3.x * vector3.x + vector3.y * vector3.y + vector3.z * vector3.z;
}

INLINE int
Eq(struct Vector3 lhs, struct Vector3 rhs) {
        return SquMagnitude(Sub(lhs, rhs)) < 9.9999994e-11f;
}

INLINE int
Ne(struct Vector3 lhs, struct Vector3 rhs) {
        return !Eq(lhs, rhs);
}
