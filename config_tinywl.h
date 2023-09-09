/* launcher */
static char terminal[] = "foot"; 
static char launcher[] = "wofi";

/* background color */
// static const float back_color[] = { 0.102, 0.102, 0.102, 1.0 };

/* Trackpad */
static const int tap_to_click = 1;
static const int tap_and_drag = 1;
static const int drag_lock = 1;
static const int natural_scrolling = 0;
static const int disable_while_typing = 1;
static const int left_handed = 0;
static const int middle_button_emulation = 0;

static const enum libinput_config_scroll_method scroll_method = LIBINPUT_CONFIG_SCROLL_2FG;

static const enum libinput_config_click_method click_method = LIBINPUT_CONFIG_CLICK_METHOD_BUTTON_AREAS;

static const uint32_t send_events_mode = LIBINPUT_CONFIG_SEND_EVENTS_ENABLED;

static const enum libinput_config_accel_profile accel_profile = LIBINPUT_CONFIG_ACCEL_PROFILE_ADAPTIVE;

static const double accel_speed = 0.0;
static const unsigned int gapsize = 4;

/* exclusive zone*/
static const unsigned int exczone = 24;

typedef struct {
	const char *title;
	int x;
	int y;
} Rule;

static const Rule rules[] = {
	/* title, 		x,	y */

	{ "mpv", 		50, 	50 },
	{ "Application Finder", 	5, 	20 },
	{ "lxqt-panel", 	4, 	4 },

};
