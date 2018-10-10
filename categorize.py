import os
import sys


def categorize(files, files_to_exclude):
	dirs = dict()

	for file in files:
		if file not in files_to_exclude:
			file_list = list(file)
			file_list.reverse()

			if '.' in file_list:
				pos_dot = file_list.index('.')
			else:
				continue

			ext = file_list[:pos_dot]
			ext.reverse()
			ext = "".join(ext)
			if ext in dirs.keys():
				dirs[ext].append(file)
			else:
				dirs[ext] = list()
				dirs[ext].append(file)

	return dirs

if __name__ == "__main__":
	path = os.getcwd()
	files = os.listdir(path)

	current_file = sys.argv[0]
	files_to_exclude = [current_file, "README.md"]
	dirs = categorize(files, files_to_exclude)
	
	for d in dirs:
		print(d)
		for i, file in enumerate(dirs[d]):
			print(str(i+1)+". ", file)
		print()
