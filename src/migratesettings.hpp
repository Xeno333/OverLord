// Minetest
// SPDX-License-Identifier: LGPL-2.1-or-later

#include "settings.h"

void migrate_settings()
{
	// Converts opaque_water to translucent_water
	if (g_settings->existsLocal("opaque_water")) {
		g_settings->set("translucent_water",
				g_settings->getBool("opaque_water") ? "false" : "true");
		g_settings->remove("opaque_water");
	}
}
