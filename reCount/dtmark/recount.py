import sys

namesList = []
namesDico = {" ": 0}

for line in sys.stdin:
    namesList.append(line.strip('\n'))
    if namesList[len(namesList)-1] == "***": break

for i in namesList:
    try: namesDico[i] += 1
    except KeyError: namesDico[i] = 1

sortedNamesDico = sorted(namesDico, reverse=1, key=namesDico.get)
w1, w2 = sortedNamesDico[0], sortedNamesDico[1]
if namesDico[w1] == namesDico[w2]: print("Runoff!")
else: print(w1)
