sentence = input("\nInput your Sentence: ").split(" ")
for index, word in enumerate(sentence):
    sentence[index] = word[::-1]
print(" ".join(sentence))
