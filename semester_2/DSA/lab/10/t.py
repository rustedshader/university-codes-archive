def second_most_freq(s):
    l = set(s)
    mm = {}
    tt = sorted([s.count(char) for char in l])
    lala = set()
    for numbers in tt:
        for i in range(len(s)):
            if s.count(s[i]) == numbers and i not in lala:
                mm[s[i]] = s.count(s[i])
                lala.add(i)
    print("Second Last in Dictionary:", list(mm.keys())[-2])
    ans = []
    vowels = "aeiou"
    for hmm in mm:
        if mm[hmm] % 2 != 0 and hmm not in vowels:
            ans.append(hmm)
    return ans

s = "lalalalandrwngi"
print(second_most_freq(s))