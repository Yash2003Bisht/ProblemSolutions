// QUESTION URL: https://www.hackerrank.com/challenges/too-high-boxes/problem
// STATUS: Accepted



struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length, width, height;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    return b.height * b.length * b.width;
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    if (b.height < MAX_HEIGHT)
        return 1;
    return 0;
}

