Everything Worked!
Q1. The first recursive call to towers(5,2,3) will be towers(4,2,1). This is because, in the first step we remove the top piece so now there is n-1 pieces remaining. Where n = 5 (total # of pieces). The "from" remains the same because there are still 4 more pieces in the second tower that need to be moved. The "dest" changes to 1 because 4th piece is bigger than the 5th one thus it cannot go ontop of the 5th pieces. Therefore, the only place left for the 4th piece is tower 1.

Q2. 5 recursive calls to towers() will be made before the first recursive call actually returns to the initial invocation.

Q3. The actual move that will be made by towers(5,2,3) is "Move #1: From Tower 2 to Tower 3".

Q4. The second recursive call to towers() to be invoced is towers(0,1,3).

Q5. Since the minimum number of moves to solve any hanoi is given by the formula (2^n)-1, we know that n = 8 and (2^8)-1 is 225. Therefore, there will be 225 lines printed to stdout.

Bugs:
- User is not able to input their own unique hanoi questions.
- The total number of towers can only be from 1 to 3.
- There can't be 0 disks.
