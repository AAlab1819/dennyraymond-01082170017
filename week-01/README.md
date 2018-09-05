# HELLO PLEASE READ THIS 
---
## - Problem 912 A - TRICKY ALCHEMY -
  So Basically we got a task from **Grisha** to help her to to obtain some balls for christmas
  but the problem is, **Grisha** doesn't have enough chrismas ball in disposal. 
  
  The condition is :
  1. To produce the yellow ball, she needs two yellow crystals
  2. To produce the green ball, she needs one yellow crystals and one blue crystals
  3. To produce the green ball, she need three blue crystals
  4. Grisha's have some yellow and green in her disposal but we don't how much exactly it is
  
  so how my code works is : 
    Because of the conditions written above, Grisha will need exactly two YellowBall for making a yellowCrystal, 
  and since for making green ball also require one YellowBall so i add one ball to the ReqYellow.
  so i put it on variable name **ReqYellow = 2*YellowBall + GreenBall.** . 
    same thing also work for ReqBlue variable, **ReqBlue = 3*BlueBall + GreenBall.**
   after that i calculated the total of YellowCrystal need to produce by **YC = ReqYellow - HaveYellow (the disposal one).**
   same thing happenend to get the total of BlueCrystall, after that i sum it both the **YellowCrystal + BlueCrystal.**
  Then the rest code is to calculated the Total Crystall that Grisha still need to make the balls. 

[QUESTIONS](http://codeforces.com/contest/912/problem/A)
[SOLUTIONS](http://codeforces.com/contest/912/submission/42419986).

### Thank you :)

___

## - Problem 854 A - FRACTION -
  So, for this problem is quite simple ....
__There are some conditions we need to fullfil :__
1. Numerator needs to less than Denumerator (a<b)
2. The sum of the numerator and denumerator = given number
3. and know about the fraction need to be irreducible if its numerator and its denominator are coprime (they do not have positive common divisors except 1).

  so what i think to solved this kind of questions are like this:
at first i need to know if the given number is even or odd, because it use for additional information for the "if conditions", and i need to know how much is the numerator and denumerator, and it only can get from the __Given Number__ , so i think to divide the given number by two. 
  **IF GIVEN NUMBER IS EVEN THEN**
  the given number is divided by two
  And then i check again if the divided number are odd or even
  **IF DIVIDED NUMBER IS EVEN**
  the numerator equals divided number -1.
  **IF DIVIDED NUMBER IS ODD**
  the numerator equals divided number -2. *WHY ?? cause i want to always get an odd number , then by subtract it with two, it make less step :) 
  
  **IF GIVEN NUMBER IS ODD THEN**
  the numerator equals given number divided by 2
  
  #### So how about the DENUMERATOR THEN ?
  ok, so i come with one idea that we can get the DENUMERATOR by subtract between GiVEN NUMBER and NUMERATOR we just get 
  
  maybe just see the source code, so sorry for my bad english 
  ### QUESTION [Click MEE](http://codeforces.com/contest/854/problem/A)
  ### SOLUTION [CLICK MEE](http://codeforces.com/contest/854/submission/42498794)
  
  
  ### HE HE HE, Thank you :) 
  
  ---
  
  

