#include <stdint.h>

/* 俄罗斯农民乘法，具体规则如下：
 * --------------------------------------------------------------
 * 把每一个数字分别写在列头。
 * 将头一列的数字加倍，将第二列的数字减半。
 * 如果在第二列的数字是奇数，将它除以二并把余数去掉。
 * 如果第二列的数字是偶数，将其所在行删除。
 * 继续加倍、减半和删除直到第二列的数字为1。
 * 将第一列中剩余的数字相加。于是就得出了根据原始数字计算出的结果。
 * --------------------------------------------------------------
 */
uint64_t russian_farmer_multiplication(uint64_t multiplicand,uint64_t multiplier)
{
    uint64_t result = 0;
    while( multiplicand ) {
	if( multiplicand & 1 ) {
	    result += multiplier;
	}
	multiplicand >>= 1;
	multiplier <<= 1;
    }
    return result;
}
