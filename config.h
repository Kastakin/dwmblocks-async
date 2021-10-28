#define CMDLENGTH 50
#define DELIMITER " "
#define LEADING_DELIMITER
#define CLICKABLE_BLOCKS

const Block blocks[] = {
    /*     script       interval(s)  signal  */
	BLOCK("sb-cpu",     5,            3)
	BLOCK("sb-battery", 5,            2)
	BLOCK("sb-date",    1,            1)
};
