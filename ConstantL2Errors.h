#pragma once

#include <inttypes.h>

namespace Consts
{
	// Описание структуры пакета ошибки
	struct packet_error_t
	{
		board_type_t board;			// Тип платы
		uint8_t error;				// Код ошибки
		uint8_t data[5];			// Данные для уточнения ошибки
	};
	
	
	/*
		0x00 .. 0x3F - Ошибки, общие для всех типов блоков.
		0x40 .. 0xBF - Ошибки, конкретного типа блоков.
		0xC0 .. 0xFF - Зарезервированно.
	*/
	
	// Описание общий ошибок всех блоков
	enum error_generic_t : uint8_t
	{
		ERROR_NONE = 0x00,
	};
	
	// Блок опроса BMS
	enum error_bms_t : uint8_t
	{
		ERROR_BMS_LOST = 0x41,		// Потеря связи с BMS
		ERROR_BMS_FRAME = 0x42,		// Данные с BMS не распознаны
		
		ERROR_BMS_RX = 0x50,		// Получена ошибка с BMS, в data[0] её код
	};
	
	// Блок опроса Двигателей
	enum error_motor_t : uint8_t
	{
		ERROR_MOTOR_LOST = 0x41,	// Потеря связи с двигателем, в data[0] его номер.
		ERROR_MOTOR_FRAME = 0x42,	// Данные не распознаны, в data[0] его номер.

		ERROR_MOTOR_RX = 0x50,		// Получена ошибка с двигателя, в data[0] его номер, data[1] её код
	};
	
	// Блок заднего света
	enum error_backlight_t : uint8_t
	{
		ERROR_BACKLIGH_LOAD_HIGH = 0x41,	// Привышен ток (или КЗ) силового выхода, в data[0] его номер
		ERROR_BACKLIGH_LOAD_LOW = 0x42,		// Малый ток (или обрыв) силового выхода, в data[0] его номер

		ERROR_BACKLIGH_SD_INIT = 0x50,		// Ошибка инициализация SD карты (SPI флешки)

		ERROR_BACKLIGH_PANEL_NOIMG = 0x60,	// Ошибка загрузки изображения на панель
	};
	
	// Блок переднего света
	enum error_frontlight_t : uint8_t
	{
		ERROR_FRONTLIGHT_LOAD_HIGH = 0x41,		// Привышен ток (или КЗ) силового выхода, в data[0] его номер
		ERROR_FRONTLIGHT_LOAD_LOW = 0x42,		// Малый ток (или обрыв) силового выхода, в data[0] его номер

		ERROR_FRONTLIGHT_SD_INIT = 0x50,		// Ошибка инициализация SD карты (SPI флешки)
		
		ERROR_FRONTLIGHT_PANEL_NOIMG = 0x60,	// Ошибка загрузки изображения на панель
	};
}
