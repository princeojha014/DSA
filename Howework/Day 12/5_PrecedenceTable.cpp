/*

 What will be the result below according to the precedence table.

    2*3-48==5/4*6
    6<<2-4*8/2
    5>4<3/2-8%4+5
    14-8+92>>2+70
    
 
*/


/*

Expression: 2 * 3 - 48 == 5 / 4 * 6
Result: 0 (false)

Expression: 6 << 2 - 4 * 8 / 2
Result: Undefined behavior (left shift by negative number)

Expression: 5 > 4 < 3 / 2 - 8 % 4 + 5
Result: 1 (true)

Expression: 14 - 8 + 92 >> 2 + 70
Result: Undefined behavior (right shift by more than bit size)


*/