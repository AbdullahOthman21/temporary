#include <X11/XF86keysym.h>
static const Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY,                       XK_Return, zoom,           {0} },
	{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },
	{ MODKEY|ShiftMask,             XK_w,      killclient,     {0} },
	{ MODKEY|ShiftMask,             XK_BackSpace,      killclient,     {0} },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_f,      spawn,          SHCMD("firefox") },
	{ MODKEY,                       XK_d,      spawn,          SHCMD("echo 5000 | sudo tee /sys/class/backlight/intel_backlight/brightness") },
	{ MODKEY,                       XK_s,      spawn,          SHCMD("xset dpms force off") },
	{ 0,                            XK_Print, spawn,          SHCMD("maim screen.png") },
	{ MODKEY,                       XK_Print, spawn,          SHCMD("maim -s screen.png") },
	{ 0, XF86XK_MonBrightnessDown, spawn, SHCMD("echo 100 | sudo tee /sys/class/backlight/intel_backlight/brightness") },
	{ 0, XF86XK_MonBrightnessUp,   spawn, SHCMD("echo 19000 | sudo tee /sys/class/backlight/intel_backlight/brightness") },
	{ 0, XF86XK_AudioMute,         spawn, SHCMD("amixer -c 0 set Speaker toggle") },
	{ 0, XF86XK_AudioLowerVolume,  spawn, SHCMD("pactl set-sink-volume @DEFAULT_SINK@ -10%; pactl get-sink-volume @DEFAULT_SINK@ | awk '{print $5}' | xargs xsetroot -name") },
	{ 0, XF86XK_AudioRaiseVolume,  spawn, SHCMD("pactl set-sink-volume @DEFAULT_SINK@ +10%; pactl get-sink-volume @DEFAULT_SINK@ | awk '{print $5}' | xargs xsetroot -name") },
	{ 0, XK_F9, spawn, SHCMD("cat ~/.config/emojis | dmenu | tr -d '\\n' | xclip -selection clipboard") },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

