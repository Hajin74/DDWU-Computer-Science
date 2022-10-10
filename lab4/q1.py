file_name = input("파일 이름을 입력하세요: ")
input_file = open(file_name, "rt")
output_file = input_file.read()

f = open("output.txt", "wt")
f.write(output_file.upper())
f.close()
	
