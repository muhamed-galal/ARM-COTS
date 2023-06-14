/*
 * BIT_MATH.h
 *
 *  Created on: May 21, 2023
 *      Author: Muham
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT_NUM) 								REG |=  (0x01<<BIT_NUM)
#define CLR_BIT(REG,BIT_NUM)								REG &= ~(0x01<<BIT_NUM)
#define TOG_BIT(REG,BIT_NUM) 								REG ^=  (0x01<<BIT_NUM)
#define GET_BIT(REG,BIT_NUM)   						  		((REG>>BIT_NUM)&0x01)
#define SET_SPECIFIC_REG_BITS_VALUE(REG,MASK,VALUE) 		REG = ((REG & MASK)|VALUE)



#endif /* BIT_MATH_H_ */
