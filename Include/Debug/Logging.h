// SPDX-License-Identifier: GPL-2.0-only
/*
 * File: Include/Debug/Logging.h
 *
 * Logging infrastructure.
 *
 * Copyright (c) 2021 HTG-YT
 * Author: HTG-YT <https://github.com/HTG-YT>
 */

#ifndef __C_GAME_ENGINE_LOGGING_H__
#define __C_GAME_ENGINE_LOGGING_H__

enum {
        DEBUG,
        ERROR,
        INFO,
        VERBOSE,
        WARN
};

void
LogDebug(...);

void
LogError(...);

void
LogInfo(...);

void
LogVerbose(...);

void
LogWarn(...);

#endif /* __C_GAME_ENGINE_LOGGING_H__ */
