// SPDX-License-Identifier: GPL-2.0-only
/*
 * File: Source/Math/Vector3.c
 *
 * Implementation of Include/Math/Vector3.h
 *
 * Copyright (c) 2021 HTG-YT
 * Author: HTG-YT <https://github.com/HTG-YT>
 */

#include <stdbool.h>

#include "../../Include/Math/Vector3.h"

INLINE struct Vector3 Add(struct Vector3 lhs, struct Vector3 rhs) {
        return (struct Vector3) {
                lhs.x + rhs.x,
                lhs.y + rhs.y,
                lhs.z + rhs.z
        };
}

INLINE struct Vector3 Sub(struct Vector3 lhs, struct Vector3 rhs) {
        return (struct Vector3) {
                lhs.x - rhs.x,
                lhs.y - rhs.y,
                lhs.z - rhs.z
        };
}

INLINE struct Vector3 Mul(struct Vector3 lhs, float num) {
        return (struct Vector3) {
                lhs.x * num,
                lhs.y * num,
                lhs.z * num
        };
}

INLINE struct Vector3 Div(struct Vector3 lhs, float num) {
        return (struct Vector3) {
                lhs.x / num,
                lhs.y / num,
                lhs.z / num
        };
}

INLINE int Eq(struct Vector3 lhs, struct Vector3 rhs) {
        return
                (lhs.x - rhs.x < 1e-5) &&
                (lhs.y - rhs.y < 1e-5) &&
                (lhs.z - rhs.z < 1e-5);
}


