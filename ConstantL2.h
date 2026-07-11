#pragma once
#include <inttypes.h>

namespace Consts
{
	// Тип платы, 5 бит (0x00 .. 0x1F)
	enum board_type_t : uint8_t
	{
		BOARD_TYPE_GENERIC = 0x00,
		BOARD_TYPE_BATTERIES = 0x01,
		BOARD_TYPE_MOTORS = 0x02,
		BOARD_TYPE_BUTTONS = 0x03,
		BOARD_TYPE_IO_FRAME = 0x04,
		BOARD_TYPE_LIGHT_FRONT = 0x05,
		BOARD_TYPE_LIGHT_BACK = 0x06,
		BOARD_TYPE_STEERING_RACK = 0x07,
		BOARD_TYPE_DOOR = 0x08,
		BOARD_TYPE_IO = 0x1E,
		BOARD_TYPE_MAIN = 0x1F
	};
}
