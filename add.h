/**
 @file
* @brief 
*   This file is to include addition feature into versa application. 
*
*   This file is has function deleration of add function.
*
*/

/// return type validation on success
#define SUCCESS		0

/// return type validation on failure
#define FAILURE		-1

/**
* @brief
*   This function is an adds 2 numbers and returns result to called 
*   function
*
* @param[in] number_1 - first number to add
* @param[in] number_2 - second number to add:\n
*  
* @return   
*   result of two numbers
* 
* @note 
*   This is used as an addition API.
*/
int add(int number_1, int number_2);
