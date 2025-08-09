# For 0 
1

# For 1

1

# For 2

2

# For 3

1 + 2
2 + 1

# For 4

2 + 2
1 + 2 + 1

# For 5

2 + 2 + 1
1 + 2 + 2
2 + 1 + 2


if stairs => 3

(n-2) + (n-3) => f(1) + f(0) => 2

if stairs => 4

(n-2) + (n-3) => f(2) + f(1) => 2


Why n- 2 and n-3 ? 

If you only need 2 steps you are n-2 way from n 

If you need 1 steps you are n-1 away from n but repeating 1 would break so n-3 to n-1 should be 2 step then n-1 should be 1.
