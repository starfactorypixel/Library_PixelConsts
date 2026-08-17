#pragma once
#include <inttypes.h>

namespace Consts
{
	// Длина структуры features
	static constexpr uint8_t features_length = 7;
	
	
	// Возможности платы BatteryECU
	struct __attribute__((packed)) features_battery_t
	{
		uint8_t batt1 : 4;		// Битовая маска модели подключённого BMS
		uint8_t batt2 : 4;		// Битовая маска модели подключённого BMS
		uint8_t cells;			// Кол-во ячеек АКБ, шт
		uint16_t capacity;		// Ёмкость АКБ, Вт
		uint8_t temp_sensors;	// Кол-во датчиков температуры ds18b20, шт
		uint8_t _padding[2];
	};
	static_assert(sizeof(features_battery_t) == features_length, "Wrong struct length");
	
	// Возможности платы MotorECU
	struct __attribute__((packed)) features_motor_t
	{
		uint8_t motor1 : 4;		// Битовая маска модели подключённого контроллера
		uint8_t motor2 : 4;		// Битовая маска модели подключённого контроллера
		uint8_t temp_sensors;	// Кол-во датчиков температуры ds18b20, шт
		uint8_t _padding[5];
	};
	static_assert(sizeof(features_motor_t) == features_length, "Wrong struct length");
	
	// Возможности платы IO
	struct __attribute__((packed)) features_io_t
	{
		uint8_t temp_sensors;	// Кол-во датчиков температуры ds18b20, шт
		uint8_t _padding[6];
	};
	static_assert(sizeof(features_io_t) == features_length, "Wrong struct length");
	
	// Возможности платы IO Frame
	struct __attribute__((packed)) features_ioframe_t
	{
		uint8_t temp_sensors;	// Кол-во датчиков температуры ds18b20, шт
		uint8_t _padding[6];
	};
	static_assert(sizeof(features_ioframe_t) == features_length, "Wrong struct length");
	
	// Вожможности платы SteeringRackECU
	struct __attribute__((packed)) features_steeringrack_t
	{
		uint8_t _padding[7];
	};
	static_assert(sizeof(features_steeringrack_t) == features_length, "Wrong struct length");

	// Вожможности платы ButtonECU
	struct __attribute__((packed)) features_button_t
	{
		uint8_t _padding[7];
	};
	static_assert(sizeof(features_button_t) == features_length, "Wrong struct length");
	
	// Вожможности платы LightECU
	struct __attribute__((packed)) features_light_t
	{
		uint8_t _padding[7];
	};
	static_assert(sizeof(features_light_t) == features_length, "Wrong struct length");
	
	// Вожможности платы DoorECU
	struct __attribute__((packed)) features_door_t
	{
		uint8_t _padding[7];
	};
	static_assert(sizeof(features_door_t) == features_length, "Wrong struct length");
	

}
