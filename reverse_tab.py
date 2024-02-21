def sum(tab):
    if(len(tab) == 4):
        return tab[0]
    else:
        return tab[len(tab)] + sum(tab[:len(tab)-1])


print(sum([1, 2, 3, 4, 5]))
