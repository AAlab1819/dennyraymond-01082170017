# HELLO PLEASE READ THIS 

## Problem 912 A - TRICKY ALCHEMY
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

##Thank you :)