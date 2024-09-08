class CfgPatches
{
class TFN_g3
{
magazines[]={};
ammo[]={};
units[]={};
weapons[]={};
requiredVersion=0.1;
requiredAddons[]=
{
"tfl_g3",
"A3_Characters_F",
};
};
};
class CfgVehicles
{
	class B_Soldier_F;
	class tfl_g3_new_npl_blk_g;

	#include "Uniforms\cfg\Uniforms_Bases.hpp"
};

class CfgWeapons
{
    class UniformItem;
    class tfl_new_blk_fs_npl_uniform_g;
    
	#include "Uniforms\cfg\Uniforms.hpp"
};