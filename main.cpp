import random

filename = 'words.dic'
f = open(filename, 'r')
allLines = f.readlines()
f.close()

i = random.randint(0, len(allLines) - 1)
words = allLines[i].split()
i = random.randint(0, len(words) - 1)
word = words[i]

sz = len(word)
guess = '*' * sz
cnt = 0

while(guess.count('*') != 0):
	ch = raw_input('Enter a letter in word ' + guess + ':')
	if word.find(ch) == -1:
		print ch + ' is not in the word'
		cnt += 1
	elif guess.find(ch) != -1:
		print ch + ' is already in the word'
	else:
		tmp = ''
		for i in range(sz):
			if guess[i] != '*':
				tmp += guess[i]
			elif word[i] == ch:
				tmp += ch
			else:
				tmp += '*'
		guess = tmp
	
print 'The word is %s. You missed %d time(s).' % (word, cnt)