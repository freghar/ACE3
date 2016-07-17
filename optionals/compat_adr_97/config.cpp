#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Weapons_F_Mod"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"Nic547"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;

        addonRootClass = "A3_Characters_F"; // this prevents any patched class from requiring this addon
    };
};

#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
