def cmp(lst1, lst2):
	if len(lst1) != len(lst2):
		return len(lst2) - len(lst1)
	if lst1[0] < lst2[0]:
		return -1
	return 1
	
filename = 'words.dic'
f = open(filename, 'r')

dict = {}

for line in f:
	words = line.split()
	for word in words:
		sword = ''.join(sorted(word))
		if dict.has_key(sword):
			dict[sword].append(word)
		else:
			dict[sword] = [word]
			
f.close()

tmplists = dict.values()
anslists = []
for wordclass in tmplists:
	wordclass.sort()
	anslists.append(wordclass)

anslists.sort(cmp)

for lst in anslists:
	for word in lst:
		print word,
	print ''



