# HELLO PLEASE READ THIS 
---
## - 433 B - Kuriyama Mirai's Stones -
For this problem we need to calculated how much is the sum of l and r, that we can get from the type of the questions, there are two type, type 1 and 2. 

Type 1 is the sum of the stone's cost from l to r in sorted array number 
Type 2 is the sum of the stone's cost from l to r in unsorted array number 

The sum we can get with this calculation : 

<pre>  
If Type 1 :
 sum = cost (right side number position - 1) - cost (left side number position - 2)
If Type 2 :
 check if the right side number position == 1 :
  then Sum = sortedCostArray ( right side number - 1 )
 else 
   Sum = sortedCostArray (right side number - 1) - sortedCostArray (left side number - 2)   
</pre>

  Complexity : O(n log n)
  
[QUESTIONS](http://codeforces.com/problemset/problem/433/B)
X
[SOLUTIONS](http://codeforces.com/contest/433/submission/45135061)

### Thank you :)

___
## - 913C - Party Lemonade -
For this problem we need to find the smallest number of roubles we need to pay in order to buy at least L liters of lemonade.
a single bottle of type i will have volume 2^(i-1) liters and cost bottleCost Roubles. 

   The solution to this problem we need first making an optimal list from the given list. If the price of 2 1L bottles is cheaper than 1 2L bottle, then it's better to buy 2 1L bottles. After doing so, we realize that the price at the end will be the most bang for your buck, regardless of whether it is made up of smaller bottles or 1 bottle. Then, we may think that we just need to grab the bottle with the most bang for your buck then, however that may not be the case. It is possible that we may find cheaper alternatives with enough L of lemonade that we needs, and so we will compare the previous price and the current price to find the cheaper price. 
<pr> Current price can be calculated by :
  adding sum(previous sum + bottles needed x price) + L(liter of lemonade needed left after subtracting L of bottles needed) x price.
 </pr>

Bottles needed is the maximum amount of bottles "i" we can use to cover as much L of lemonade that is left, but not more than L. This will go on until we finally have our cheapest combination.

Complexity : O(n)
 
[QUESTIONS](http://codeforces.com/problemset/problem/913/C)
X
[SOLUTIONS](http://codeforces.com/contest/913/submission/45144578).

### Thank you :)

___
