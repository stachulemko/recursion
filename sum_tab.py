def sum(tab):
    if(len(tab) == 1):
        return tab[0]
    else:
        return tab[0] + sum(tab[1:])


print(sum([1, 2, 3, 4, 5]))
