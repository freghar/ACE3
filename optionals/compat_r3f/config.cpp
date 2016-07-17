#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"r3f_armes_c", "r3f_armes", "r3f_acc"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"Ruthberg"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;

        addonRootClass = "A3_Characters_F"; // this prevents any patched class from requiring this addon
    };
};

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
