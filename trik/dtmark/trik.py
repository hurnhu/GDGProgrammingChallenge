iString = input()
cups = [1, 0, 0]

def switch(list, i1, i2):
    temp = list[i1]
    list[i1] = list[i2]
    list[i2] = temp
    return list

for move in iString:
    if move == "A": cups = switch(cups, 0, 1)
    if move == "B": cups = switch(cups, 1, 2)
    if move == "C": cups = switch(cups, 0, 2)

for i, index in enumerate(cups):
    if index == 1:
        print(i + 1)
        break
