class CfgPatches
{
	class CAPS_A1C
	{
		units[] = {"MarianQuandt", "MarianQuandt02", "MarianQuandt03", "MarianQuandt04"};
		weapons[] = {};
		requiredVersion = 0.0;
		requiredAddons[] = {};
	};
};

#include "animations.hpp"

class CfgVehicles
{
	class Civilian;
	class MarianQuandt: Civilian
	{
		scope = 2;
		armor = 20000;
		displayName="Marian Quandt";
		model= "\CAPS_A1C\characters\MarianQuandt";
		triggerAnim = "";
	};
	class MarianQuandt02: MarianQuandt
	{
		scope = 2;
		displayName="Marian Quandt 02";
		model= "\CAPS_A1C\characters\MarianQuandt02";
	};
	class MarianQuandt03: MarianQuandt
	{
		scope = 2;
		displayName="Marian Quandt 03";
		model= "\CAPS_A1C\characters\MarianQuandt03";
	};
	class MarianQuandt04: MarianQuandt
	{
		scope = 2;
		displayName="Marian Quandt 04";
		model= "\CAPS_A1C\characters\MarianQuandt04";
	};
};