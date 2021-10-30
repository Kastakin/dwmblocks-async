#define CMDLENGTH 50
#define DELIMITER " | "
#define LEADING_DELIMITER
#define CLICKABLE_BLOCKS

const Block blocks[] = {
    /*     script       interval(s)  signal  */
	//BLOCK("sb-cpu",     5,            3)
	BLOCK("sb-network",   2,            4)
	BLOCK("sb-bluetooth", 2,            3)
	BLOCK("sb-battery",   2,            2)
	BLOCK("sb-date",      1,            1)
};
