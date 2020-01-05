#include "global.h"
#include "event_data.h"
#include "constants/region_map_sections.h"

struct Landmark
{
    const u8 *name;
    u16 flag;
};

struct LandmarkList
{
    u8 mapSection;
    u8 id;
    const struct Landmark *const *landmarks;
};

static const struct LandmarkList gLandmarkLists[] =
{
    {MAPSEC_NONE, 0, NULL},
};

static const struct Landmark *const *GetLandmarks(u8 mapSection, u8 id);

const u8 *GetLandmarkName(u8 mapSection, u8 id, u8 count)
{
    const struct Landmark *const *landmarks = GetLandmarks(mapSection, id);

    if (!landmarks)
        return NULL;

    while (1)
    {
        const struct Landmark *landmark = *landmarks;

        if (landmark->flag == 0xFFFF || FlagGet(landmark->flag) == TRUE)
        {
            if (count == 0)
                break;
            else
                count--;
        }

        landmarks++;
        if (!*landmarks)
            return NULL;
    }

    return (*landmarks)->name;
}

static const struct Landmark *const *GetLandmarks(u8 mapSection, u8 id)
{
    u16 i = 0;

    for (; gLandmarkLists[i].mapSection != MAPSEC_NONE; i++)
    {
        if (gLandmarkLists[i].mapSection > mapSection)
            return NULL;
        if (gLandmarkLists[i].mapSection == mapSection)
            break;
    }

    if (gLandmarkLists[i].mapSection == MAPSEC_NONE)
        return NULL;

    for (; gLandmarkLists[i].mapSection == mapSection; i++)
    {
        if (gLandmarkLists[i].id == id)
            return gLandmarkLists[i].landmarks;
    }

    return NULL;
}
