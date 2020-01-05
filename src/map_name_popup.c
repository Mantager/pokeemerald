#include "global.h"
#include "battle_pyramid.h"
#include "bg.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "menu.h"
#include "map_name_popup.h"
#include "palette.h"
#include "region_map.h"
#include "start_menu.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "constants/layouts.h"
#include "constants/region_map_sections.h"
#include "constants/weather.h"

// enums
enum MapPopUp_Themes
{
    MAPPOPUP_THEME_WOOD,
    MAPPOPUP_THEME_MARBLE,
    MAPPOPUP_THEME_STONE,
    MAPPOPUP_THEME_BRICK,
    MAPPOPUP_THEME_UNDERWATER,
    MAPPOPUP_THEME_STONE2,
};

// static functions
static void Task_MapNamePopUpWindow(u8 taskId);
static void ShowMapNamePopUpWindow(void);
static void LoadMapNamePopUpWindowBg(void);

// EWRAM
static EWRAM_DATA u8 sPopupTaskId = 0;

// .rodata
static const u8 gMapPopUp_Table[][960] =
{
    INCBIN_U8("graphics/interface/map_popup/wood.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/marble.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/stone.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/brick.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/underwater.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/stone2.4bpp"),
};

static const u8 gMapPopUp_Outline_Table[][960] =
{
    INCBIN_U8("graphics/interface/map_popup/wood_outline.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/marble_outline.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/stone_outline.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/brick_outline.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/underwater_outline.4bpp"),
    INCBIN_U8("graphics/interface/map_popup/stone2_outline.4bpp"),
};

static const u16 gMapPopUp_Palette_Table[][16] =
{
    INCBIN_U16("graphics/interface/map_popup/wood.gbapal"),
    INCBIN_U16("graphics/interface/map_popup/marble_outline.gbapal"),
    INCBIN_U16("graphics/interface/map_popup/stone_outline.gbapal"),
    INCBIN_U16("graphics/interface/map_popup/brick_outline.gbapal"),
    INCBIN_U16("graphics/interface/map_popup/underwater_outline.gbapal"),
    INCBIN_U16("graphics/interface/map_popup/stone2_outline.gbapal"),
};

static const u16 gUnknown_0857F444[16] = INCBIN_U16("graphics/interface/map_popup/857F444.gbapal");

static const u8 gRegionMapSectionId_To_PopUpThemeIdMapping[] =
{
    [MAPSEC_CAESAR_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_LANCEL_CITY] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ARC_TOWN] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_BONNEY_CITY] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MEDES_TOWN] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_HEPBURN_CITY] = MAPPOPUP_THEME_STONE,
    [MAPSEC_GOFF_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_NIEL_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_HEMING_CITY] = MAPPOPUP_THEME_STONE,
    [MAPSEC_REMANT_CITY] = MAPPOPUP_THEME_STONE,
    [MAPSEC_TOLKET_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FROOD_TOWN] = MAPPOPUP_THEME_STONE,
    [MAPSEC_DARWIN_CITY] = MAPPOPUP_THEME_STONE,
    [MAPSEC_WONDER_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_POKEMON_LEAGUE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ROUTE_1] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_2] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_3] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_4] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_5] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_6] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_7] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_8] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_9] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_10] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_11] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_12] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_13] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_14] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_15] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_16] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_17] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_18] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_19] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_20] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_21] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_22] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_23] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_24] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_MELLOW_WOODS] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SPIRAL_CAVERN] = MAPPOPUP_THEME_STONE,
    [MAPSEC_VISTA_LAKE] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_MOSSY_PIT] = MAPPOPUP_THEME_STONE,
    [MAPSEC_GHOST_PAGODA] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROCKET_FOREST] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SHAKER_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_PERIL_CHASM] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MOJO_TUNNEL] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_VICTORY_ROAD] = MAPPOPUP_THEME_STONE,
    [MAPSEC_XACCESS_TOWER] = MAPPOPUP_THEME_STONE,
    [MAPSEC_XACCESS_HQ] = MAPPOPUP_THEME_STONE,
    [MAPSEC_HOENN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SECRET_BASE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_DYNAMIC] = MAPPOPUP_THEME_MARBLE,
};

static const u8 gText_PyramidFloor1[] = _("PYRAMID FLOOR 1");
static const u8 gText_PyramidFloor2[] = _("PYRAMID FLOOR 2");
static const u8 gText_PyramidFloor3[] = _("PYRAMID FLOOR 3");
static const u8 gText_PyramidFloor4[] = _("PYRAMID FLOOR 4");
static const u8 gText_PyramidFloor5[] = _("PYRAMID FLOOR 5");
static const u8 gText_PyramidFloor6[] = _("PYRAMID FLOOR 6");
static const u8 gText_PyramidFloor7[] = _("PYRAMID FLOOR 7");
static const u8 gText_Pyramid[] = _("PYRAMID");

static const u8 * const gBattlePyramid_MapHeaderStrings[] =
{
    gText_PyramidFloor1,
    gText_PyramidFloor2,
    gText_PyramidFloor3,
    gText_PyramidFloor4,
    gText_PyramidFloor5,
    gText_PyramidFloor6,
    gText_PyramidFloor7,
    gText_Pyramid,
};

// text
bool8 sub_80D47D4(void)
{
    HideStartMenu();
    ShowMapNamePopup();
    return TRUE;
}

void ShowMapNamePopup(void)
{
    if (FlagGet(FLAG_HIDE_MAP_NAME_POPUP) != TRUE)
    {
        if (!FuncIsActiveTask(Task_MapNamePopUpWindow))
        {
            sPopupTaskId = CreateTask(Task_MapNamePopUpWindow, 90);
            SetGpuReg(REG_OFFSET_BG0VOFS, 40);
            gTasks[sPopupTaskId].data[0] = 6;
            gTasks[sPopupTaskId].data[2] = 40;
        }
        else
        {
            if (gTasks[sPopupTaskId].data[0] != 2)
                gTasks[sPopupTaskId].data[0] = 2;
            gTasks[sPopupTaskId].data[3] = 1;
        }
    }
}

static void Task_MapNamePopUpWindow(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->data[0])
    {
    case 6:
        task->data[4]++;
        if (task->data[4] > 30)
        {
            task->data[0] = 0;
            task->data[4] = 0;
            ShowMapNamePopUpWindow();
        }
        break;
    case 0:
        task->data[2] -= 2;
        if (task->data[2] <= 0 )
        {
            task->data[2] = 0;
            task->data[0] = 1;
            gTasks[sPopupTaskId].data[1] = 0;
        }
        break;
    case 1:
        task->data[1]++;
        if (task->data[1] > 120 )
        {
            task->data[1] = 0;
            task->data[0] = 2;
        }
        break;
    case 2:
        task->data[2] += 2;
        if (task->data[2] > 39)
        {
            task->data[2] = 40;
            if (task->data[3])
            {
                task->data[0] = 6;
                task->data[4] = 0;
                task->data[3] = 0;
            }
            else
            {
                task->data[0] = 4;
                return;
            }
        }
        break;
    case 4:
        ClearStdWindowAndFrame(GetMapNamePopUpWindowId(), TRUE);
        task->data[0] = 5;
        break;
    case 5:
        HideMapNamePopUpWindow();
        return;
    }
    SetGpuReg(REG_OFFSET_BG0VOFS, task->data[2]);
}

void HideMapNamePopUpWindow(void)
{
    if (FuncIsActiveTask(Task_MapNamePopUpWindow))
    {
        ClearStdWindowAndFrame(GetMapNamePopUpWindowId(), TRUE);
        RemoveMapNamePopUpWindow();
        SetGpuReg_ForcedBlank(REG_OFFSET_BG0VOFS, 0);
        DestroyTask(sPopupTaskId);
    }
}

static void ShowMapNamePopUpWindow(void)
{
    u8 mapDisplayHeader[24];
    u8 *withoutPrefixPtr;
    u8 x;
    const u8* mapDisplayHeaderSource;

    if (InBattlePyramid())
    {
        if (gMapHeader.mapLayoutId == LAYOUT_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP)
        {
            withoutPrefixPtr = &(mapDisplayHeader[3]);
            mapDisplayHeaderSource = gBattlePyramid_MapHeaderStrings[7];
        }
        else
        {
            withoutPrefixPtr = &(mapDisplayHeader[3]);
            mapDisplayHeaderSource = gBattlePyramid_MapHeaderStrings[gSaveBlock2Ptr->frontier.curChallengeBattleNum];
        }
        StringCopy(withoutPrefixPtr, mapDisplayHeaderSource);
    }
    else
    {
        withoutPrefixPtr = &(mapDisplayHeader[3]);
        GetMapName(withoutPrefixPtr, gMapHeader.regionMapSectionId, 0);
    }
    AddMapNamePopUpWindow();
    LoadMapNamePopUpWindowBg();
    x = GetStringCenterAlignXOffset(7, withoutPrefixPtr, 80);
    mapDisplayHeader[0] = EXT_CTRL_CODE_BEGIN;
    mapDisplayHeader[1] = EXT_CTRL_CODE_HIGHLIGHT;
    mapDisplayHeader[2] = TEXT_COLOR_TRANSPARENT;
    AddTextPrinterParameterized(GetMapNamePopUpWindowId(), 7, mapDisplayHeader, x, 3, 0xFF, NULL);
    CopyWindowToVram(GetMapNamePopUpWindowId(), 3);
}

static void sub_80D4A78(u8 bg, u8 x, u8 y, u8 deltaX, u8 deltaY, u8 unused)
{
    s32 i;

    for (i = 0; i < 12; i++)
    {
        FillBgTilemapBufferRect(bg, 0x21D + i, i - 1 + x, y - 1, 1, 1, 0xE);
    }
    FillBgTilemapBufferRect(bg, 0x229, x - 1, y, 1, 1, 0xE);
    FillBgTilemapBufferRect(bg, 0x22A, deltaX + x, y, 1, 1, 0xE);
    FillBgTilemapBufferRect(bg, 0x22B, x - 1, y + 1 , 1, 1, 0xE);
    FillBgTilemapBufferRect(bg, 0x22C, deltaX + x, y + 1, 1, 1, 0xE);
    FillBgTilemapBufferRect(bg, 0x22D, x - 1, y + 2, 1, 1, 0xE);
    FillBgTilemapBufferRect(bg, 0x22E, deltaX + x, y + 2, 1, 1, 0xE);
    for (i = 0; i < 12; i++)
    {
        FillBgTilemapBufferRect(bg, 0x22F + i, i - 1 + x, y + deltaY, 1, 1, 0xE);
    }
}

static void LoadMapNamePopUpWindowBg(void)
{
    u8 popUpThemeId;
    u8 popupWindowId = GetMapNamePopUpWindowId();
    u16 regionMapSectionId = gMapHeader.regionMapSectionId;

    if (regionMapSectionId > MAPSEC_DYNAMIC)
    {
        if (regionMapSectionId > MAPSEC_SPECIAL_AREA)
            regionMapSectionId -= (MAPSEC_SPECIAL_AREA - MAPSEC_DYNAMIC);
        else
            regionMapSectionId = 0; // Discard kanto region sections;
    }
    popUpThemeId = gRegionMapSectionId_To_PopUpThemeIdMapping[regionMapSectionId];

    LoadBgTiles(GetWindowAttribute(popupWindowId, WINDOW_BG), gMapPopUp_Outline_Table[popUpThemeId], 0x400, 0x21D);
    CallWindowFunction(popupWindowId, sub_80D4A78);
    PutWindowTilemap(popupWindowId);
    if (gMapHeader.weather == WEATHER_UNDERWATER_BUBBLES)
        LoadPalette(&gUnknown_0857F444, 0xE0, 0x20);
    else
        LoadPalette(gMapPopUp_Palette_Table[popUpThemeId], 0xE0, 0x20);
    BlitBitmapToWindow(popupWindowId, gMapPopUp_Table[popUpThemeId], 0, 0, 80, 24);
}
