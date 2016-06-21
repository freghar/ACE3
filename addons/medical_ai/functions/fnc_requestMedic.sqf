/*
 * Author: BaerMitUmlaut
 * Sends a request to the units assigned medic to heal it.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Nothing
 *
 * Public: No
 */
#include "script_component.hpp"

private _assignedMedic = _this getVariable QGVAR(assignedMedic);
private _healQueue = _assignedMedic getVariable [QGVAR(healQueue), []];
_healQueue pushBack _this;
_assignedMedic setVariable [QGVAR(healQueue), _healQueue];
