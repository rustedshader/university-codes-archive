with open('name.txt','r') as f:
    x = f.readlines()
    print('Number of Lines are',len(x))
    print('Number of Names starting with vowel are', len([i for i in x if i[0].lower() in 'aeiou']))
    word_count = {}
    for i in set(x):
        word_count[i] = len(i)
    print('Longest Name is',max(word_count,key=word_count.get))
