/* user and group to drop privileges to */
// static const char *user  = "nobody";
// static const char *group = "nogroup";

static const char *user  = "song";
/*static const char *group = "nogroup";*/
static const char *group = "song";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
/*if you are less paranoid and turning red on failed login attempts suffices for you, set failonclear = 0 in config.h. */
static const int failonclear = 0;
