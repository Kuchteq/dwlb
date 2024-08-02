#define HEX_COLOR(hex)				\
	{ .red   = ((hex >> 24) & 0xff) * 257,	\
	  .green = ((hex >> 16) & 0xff) * 257,	\
	  .blue  = ((hex >> 8) & 0xff) * 257,	\
	  .alpha = (hex & 0xff) * 257 }

// use ipc functionality
static bool ipc = false;
// initially hide all bars
static bool hidden = false;
// initially draw all bars at the bottom
static bool bottom = false;
// hide vacant tags
static bool hide_vacant = true;
// vertical pixel padding above and below text
static uint32_t vertical_padding = 2;
// allow in-line color commands in status text
static bool status_commands = true;
// center title text
static bool center_title = true;
// use title space as status text element
static bool custom_title = false;
// scale
static uint32_t buffer_scale = 2;
// font
static char *fontstr = "Hack:size=16";
// tag names if ipc is disabled
static char *tags_names[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

// set 16-bit colors for bar
// 8-bit color can be converted to 16-bit color by simply duplicating values e.g
// 0x55 -> 0x5555, 0xf1 -> 0xf1f1
static pixman_color_t active_fg_color = HEX_COLOR(0xeeeeeeff);
static pixman_color_t active_bg_color = HEX_COLOR(0x005577ff);
static pixman_color_t active_tag_bg_color = HEX_COLOR(0xb400b4ff);
static pixman_color_t active_other_mon_tag_bg_color = HEX_COLOR(0x770077ff);
static pixman_color_t active_other_mon_tag_fg_color = HEX_COLOR(0x000000ff);
static pixman_color_t inactive_fg_color = HEX_COLOR(0xeeeeeeff);
static pixman_color_t inactive_bg_color = HEX_COLOR(0x222222ff);
static pixman_color_t urgent_fg_color = HEX_COLOR(0x222222ff);
static pixman_color_t urgent_bg_color = HEX_COLOR(0xeeeeeeff);
