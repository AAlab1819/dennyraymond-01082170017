# HELLO PLEASE READ THIS 
---
## - PROBLEM 492B - Vanya and Lanterns -
  For this proble, We are ask for finding the minimum radius of the lantern to light up all the street
  First we need to sort the lantern ascendingly then we can get the largest gap between those lantern and divided it by two.
  next is we compared it, if the gap is bigger than the new light radius, the light radius = the gap. then we compare again the gap of last lantern with the end length of the street to get the minimum light radius needs for entire street.
  
  Complexity :

  Best case: Ω(1)
  
[QUESTIONS](http://codeforces.com/problemset/problem/492/B)
X
[SOLUTIONS](http://codeforces.com/contest/492/submission/43073903).

### Thank you :)

___
## - PROBLEM 148A - Insomnia cure -
  For this problem, we need to count how many dragons that damage cause by the princess.
  the solutions goes like this, 
first input all the condition of the dragon to get damaged. 
then check, if there are 1 in any of the dragon input,then all the draagons will be damaged, because 1 can be divided by any number    then it equal 0. Or if there are other number than 1, then we do loop for every dragon, if the value of the dragon can be divided by 1 without remainder, then increment dragon damage.


Complexity :
  Average case: θ(n) - it need to check every loop which start from 1 to total of the dragon
  
  Worst case: O(n)
  
  Best case: Ω(1) - if all of the four dragon damage input equal 1
  
  
[QUESTIONS](http://codeforces.com/contest/148/problem/A)
X
[SOLUTIONS](http://codeforces.com/contest/148/submission/43069552).

### Thank you :)

___
## - PROBLEM 469A - I Wanna Be the Guy -
  
  The solution for this problem is quite simple.
  we just need to assign the level number that X and Y can solved in an array, then mark in "passed" if they can solved all the levels.
  So, 
  1. first i declare all the variables, then assign the total level that X and Y need to passed, and set the unsolved to __false__
  2. second is i declare the all the level to 1, it indicates that level is not pass yet.
  3. third i assign the total level of X can do and which level that X can do, same with Y.
  4. fourth i check if there are unsolved levels remain, by assign the all the unsolved level to __True__ if found level that still      equals to __1__.
  
  Complexity :
  Average case: θ(n)
  Worst case: O(n)
  Best case: Ω(n)
 
[QUESTIONS](http://codeforces.com/contest/469/problem/A)
X
[SOLUTIONS](http://codeforces.com/contest/469/submission/43065037).

### Thank you :)

___


