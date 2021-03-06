// Auto-generated .map file
// DO NOT HAND EDIT
// Generated from ratwarren.map

#include "../map.h"
#include "../glbdef.h"

const SQUARE_NAMES glb_ratwarren_squarelist[] =
{
SQUARE_WALL,	SQUARE_WALL,	SQUARE_WALL,	SQUARE_WALL,	
SQUARE_WALL,	SQUARE_WALL,	SQUARE_BLOCKEDDOOR,	SQUARE_FLOOR,	
SQUARE_FLOOR,	SQUARE_FLOOR,	SQUARE_FLOOR,	SQUARE_WALL,	
SQUARE_WALL,	SQUARE_FLOOR,	SQUARE_FLOOR,	SQUARE_FLOOR,	
SQUARE_FLOOR,	SQUARE_WALL,	SQUARE_WALL,	SQUARE_WALL,	
SQUARE_WALL,	SQUARE_WALL,	SQUARE_FLOOR,	SQUARE_WALL,	
SQUARE_WALL,	SQUARE_FLOOR,	SQUARE_FLOOR,	SQUARE_FLOOR,	
SQUARE_FLOOR,	SQUARE_WALL,	SQUARE_WALL,	SQUARE_FLOOR,	
SQUARE_FLOOR,	SQUARE_FLOOR,	SQUARE_FLOOR,	SQUARE_WALL,	
SQUARE_WALL,	SQUARE_WALL,	SQUARE_WALL,	SQUARE_WALL,	
SQUARE_WALL,	SQUARE_WALL
};

const PT2 glb_ratwarren_moblist[] =
{
	{ 4, 5, MOB_GIANTRAT },
	{ 3, 4, MOB_GIANTRAT },
	{ 4, 3, MOB_GIANTRAT },
	{ 3, 2, MOB_GIANTRAT },
	{ 1, 2, MOB_GIANTRAT },
	{ 4, 1, MOB_GIANTRAT },
	{ 2, 1, MOB_GIANTRAT },
	{ -1, -1, MOB_NONE }
};

const PT2 glb_ratwarren_itemlist[] =
{
	{ -1, -1, ITEM_NONE }
};

const PT2 glb_ratwarren_itemtypelist[] =
{
	{ 2, 5, ITEMTYPE_RING },
	{ 1, 5, ITEMTYPE_ARMOUR },
	{ 2, 4, ITEMTYPE_AMULET },
	{ 1, 4, ITEMTYPE_WEAPON },
	{ -1, -1, ITEMTYPE_NONE }
};

const PT2 glb_ratwarren_moblevellist[] =
{
	{ -1, -1, MOBLEVEL_NONE }
};

const PT2 glb_ratwarren_intrinsiclist[] =
{
	{ -1, -1, INTRINSIC_NONE }
};

const PT2 glb_ratwarren_squareflaglist[] =
{
	{ 5, 6, SQUAREFLAG_LIT },
	{ 4, 6, SQUAREFLAG_LIT },
	{ 3, 6, SQUAREFLAG_LIT },
	{ 2, 6, SQUAREFLAG_LIT },
	{ 1, 6, SQUAREFLAG_LIT },
	{ 0, 6, SQUAREFLAG_LIT },
	{ 5, 5, SQUAREFLAG_LIT },
	{ 4, 5, SQUAREFLAG_LIT },
	{ 3, 5, SQUAREFLAG_LIT },
	{ 2, 5, SQUAREFLAG_LIT },
	{ 1, 5, SQUAREFLAG_LIT },
	{ 0, 5, SQUAREFLAG_LIT },
	{ 5, 4, SQUAREFLAG_LIT },
	{ 4, 4, SQUAREFLAG_LIT },
	{ 3, 4, SQUAREFLAG_LIT },
	{ 2, 4, SQUAREFLAG_LIT },
	{ 1, 4, SQUAREFLAG_LIT },
	{ 0, 4, SQUAREFLAG_LIT },
	{ 5, 3, SQUAREFLAG_LIT },
	{ 4, 3, SQUAREFLAG_LIT },
	{ 3, 3, SQUAREFLAG_LIT },
	{ 2, 3, SQUAREFLAG_LIT },
	{ 1, 3, SQUAREFLAG_LIT },
	{ 0, 3, SQUAREFLAG_LIT },
	{ 5, 2, SQUAREFLAG_LIT },
	{ 4, 2, SQUAREFLAG_LIT },
	{ 3, 2, SQUAREFLAG_LIT },
	{ 2, 2, SQUAREFLAG_LIT },
	{ 1, 2, SQUAREFLAG_LIT },
	{ 0, 2, SQUAREFLAG_LIT },
	{ 5, 1, SQUAREFLAG_LIT },
	{ 4, 1, SQUAREFLAG_LIT },
	{ 3, 1, SQUAREFLAG_LIT },
	{ 2, 1, SQUAREFLAG_LIT },
	{ 1, 1, SQUAREFLAG_LIT },
	{ 0, 1, SQUAREFLAG_LIT },
	{ 5, 0, SQUAREFLAG_LIT },
	{ 4, 0, SQUAREFLAG_LIT },
	{ 3, 0, SQUAREFLAG_LIT },
	{ 2, 0, SQUAREFLAG_LIT },
	{ 1, 0, SQUAREFLAG_LIT },
	{ 0, 0, SQUAREFLAG_LIT },
	{ -1, -1, SQUAREFLAG_NONE }
};

const PT2 glb_ratwarren_signpostlist[] =
{
	{ -1, -1, SIGNPOST_NONE }
};

const ROOM_DEF glb_ratwarren_roomdef =
{
	{ 6, 7, 0 },
	glb_ratwarren_squarelist,
	glb_ratwarren_squareflaglist,
	glb_ratwarren_itemlist,
	glb_ratwarren_moblist,
	glb_ratwarren_itemtypelist,
	glb_ratwarren_moblevellist,
	glb_ratwarren_intrinsiclist,
	glb_ratwarren_signpostlist,
	-1, -1,
	100,
	0, 0,
	0,
	1,
	1,
	1,
	1,
	-1, -1, 
	-1, 
	"ratwarren"
};
