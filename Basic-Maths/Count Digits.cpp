/*Given a number N. Count the number of digits in N which evenly divides N.*/

// Solution:

    int evenlyDivides(int N){
        int count=0, digit;
        int OriginalN = N;
        while(N>0){
            digit=N%10;
            if(digit!=0){
                if(OriginalN % digit == 0){
                    count++;
                }
            }
            N=N/10;
        }
        return count;
    }
