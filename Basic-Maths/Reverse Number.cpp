/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).*/

// Solution:

long reverse(int x)
{
    long digit, revN = 0;
    while (x > 0 || x < 0)
    {
        digit = x % 10;
        revN = revN * 10 + digit;
        x = x / 10;
    }
    if (revN > 2147483647 || revN < -2147483647)
    {
        return 0;
    }
    return revN;
}