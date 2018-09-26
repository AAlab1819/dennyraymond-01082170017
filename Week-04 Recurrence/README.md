# HELLO PLEASE READ THIS 
---
## - PROBLEM 268B - Buttons -
For this problem we need to calculated the worst case, which is how many times Manao need to try the combination button to open the lock.
lets say the number of button locks is __3__
so the _n_ = 3
so everytime he try to press for the first time, it will cost 1 mistake, n-1.
and everytime he do press the button again he will try to press other button (the correct one), then we get this pattern (n-1)*i. (n-i) are stand for remain button he need to try to press and *i stand for the  previous number sequence to press. 
  
  
  Complexity : 0(n)
  
[QUESTIONS](http://codeforces.com/contest/268/problem/B)
X
[SOLUTIONS](http://codeforces.com/contest/268/submission/43435603).

### Thank you :)

___
## - PROBLEM 598D - Igor In the Museum -

for this problem, the concept is like this :
the "*" is stand for paintings that igor can see
the "." is stand for empty space that igor can walk freely
so for the example is like this :
<pre>
        ******
        *..*.*
        ******
        *....*
        ******
  
  see that either in coordinate (2,2) or (2,3) igor still gonna see the total of 6 paintings
  the rest goes the same.
</pre>

__so we just need to store the region position__, because as long as igor in that region, dont care in which position he start to see the paintings, its going to have same number of the total painting he can see. i use floodfill algorithm in this problem. thanks to geeks for geeks and fellow friends for helping me to solve this problem :) 

Complexity : O(nm)
 
[QUESTIONS](http://codeforces.com/contest/598/problem/D)
X
[SOLUTIONS](http://codeforces.com/contest/598/submission/43458872).

### Thank you :)

___
