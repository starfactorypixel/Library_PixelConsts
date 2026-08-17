#pragma once
#include <inttypes.h>
#include "ConstantL2Features.h"
#include "ConstantL2.h"

namespace Boards
{
	template<uint8_t TYPE> 
	struct Info;

	template<> 
	struct Info<Consts::BOARD_TYPE_BATTERIES>
	{
		static constexpr const char *name = "BatteryECU";
		static constexpr const char *desc = "Battery interface board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_Battery";
		using features_t = Consts::features_battery_t;
	};

	template<> 
	struct Info<Consts::BOARD_TYPE_MOTORS>
	{
		static constexpr const char *name = "MotorECU";
		static constexpr const char *desc = "Motor control board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_Motor";
		using features_t = Consts::features_motor_t;
	};

	template<> 
	struct Info<Consts::BOARD_TYPE_BUTTONS>
	{
		static constexpr const char *name = "ButtonsECU";
		static constexpr const char *desc = "Buttons control board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_Buttons";
		using features_t = Consts::features_button_t;
	};

	template<> 
	struct Info<Consts::BOARD_TYPE_IO_FRAME>
	{
		static constexpr const char *name = "IOFrameECU";
		static constexpr const char *desc = "IO Frame board control board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_IO_Frame";
		using features_t = Consts::features_ioframe_t;
	};

	template<> 
	struct Info<Consts::BOARD_TYPE_LIGHT>
	{
		static constexpr const char *name = "LightECU";
		static constexpr const char *desc = "Light board control board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_Light";
		using features_t = Consts::features_light_t;
	};

/*
	template<> 
	struct Info<Consts::BOARD_TYPE_LIGHT_BACK>
	{
		static constexpr const char *name = "LightECU";
		static constexpr const char *desc = "Light board control board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_Light";
		using features_t = Consts::features_light_t;
	};
*/

	template<> 
	struct Info<Consts::BOARD_TYPE_STEERING_RACK>
	{
		static constexpr const char *name = "SteeringRackECU";
		static constexpr const char *desc = "Steering Rack control board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_SteeringRack";
		using features_t = Consts::features_steeringrack_t;
	};

	template<> 
	struct Info<Consts::BOARD_TYPE_DOOR>
	{
		static constexpr const char *name = "DoorECU";
		static constexpr const char *desc = "Door board control board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_Door";
		using features_t = Consts::features_door_t;
	};

	template<> 
	struct Info<Consts::BOARD_TYPE_IO>
	{
		static constexpr const char *name = "IOECU";
		static constexpr const char *desc = "IO board control board for Pixel project";
		static constexpr const char *git = "https://github.com/starfactorypixel/SlaveECU_IO";
		using features_t = Consts::features_io_t;
	};
}
