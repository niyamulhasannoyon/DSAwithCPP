//todo 1. Area of a Square
//? Pseudocode
1. Input A
2. Calculate Area = A * A
3. Output Area
4. Exit

//todo 2. Min of Two Number
//? Pseudocode
1. Input A, B
2. If A < B
        then Min = A
    Else 
        Min = B
3. Exit

//todo 3. Is number Odd or Even
//? Pseudocode
1. Input A
2. If A mod 2 == 0  //*('==' means that it true or false)
        then Output "Even"
    Else
        Output "Odd"
3. Exit

//todo 4. Sum of numbers from 1 to N
//? Pseudocode
1. Input N
2. Initialize Sum = 0, count = 1
3. For count from 1 to N   //*(count = 1; count <= N; count++)
        Add count to Sum   //*(sum = sum + count)
4. Output Sum
5. Exit

//*Different Logic with While
While count <= N
    Sum += count;
    count++;

//todo 5. Prime Number or not
//? Pseudocode
1.  input n;
2.  int i = 2;
3.  While (i <= n-1 )
        if(n % i == 0)
        print Non Prime Number
        exit
        else
        i++;
4.  Print Prime Number
    exit
