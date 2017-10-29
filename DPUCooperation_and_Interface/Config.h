#pragma once

#include "stdafx.h"
#include "SYS/DEV/DEV.h"

// Enumerationen
const enum State { IDLE, DELAY, REQUEST,  REJECT, ACCEPT, STOP_AUTOMATION, COOPERATION, TOR };
const enum type { DEFAULT, REQUEST_SLOWDOWN, REQUEST_LANECHANGE};