#pragma once

#include "../../sync/data.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct TrackData
{
	struct sync_data syncData;
	int order[8192];
	int orderCount;
	int activeTrack;
	char* editText;
} TrackData;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Will get the get the track if it exists else create it

int TrackData_createGetTrack(TrackData* trackData, const char* name);

