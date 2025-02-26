# def solve(a: dict , b: dict):
#     sum = {}
#     all_keys = set([k for k in a] +  [l for l in b])
#     for key in all_keys:
#         if key not in sum:
#             sum[key] = 0
#         if key in a:  
#             sum[key] += a[key]
#         if key in b:
#             sum[key] += b[key]
#     return sum

def zp(a: dict):
    print(a['person']['address']['zip'])


deepest_ = []
def deepest(visited,a: dict,root):
    if root not in visited:
        deepest_.append(root)
        visited.add(root)
        if root in a:
            for nbr in a[root]:
                deepest(visited,a,nbr)



if __name__ == '__main__':
    a = {'a':10,'b':20,'c':5}
    b = {'b': 5, 'c':15 , 'd': 25}
    c = {'person': {'name': 'Alice', 'age': 25 , 'address': {'city': 'New York', 'zip': 10001}}}
    # zp(c)
    visited = set()
    deepest(visited,c,'person')
    print(deepest_[-1])

