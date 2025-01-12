if _name_ == '_main_':
     try:
         file_name="student.txt"
         file=open(file_name,'w')+++++++-----`
         file.write("this is the new student file")
         file.writelines(["\n this is the 2nd line\n"
                         "this is third line\n"
                         "this is fourth line\n"])
         file.close()
     except FileNotFoundError as e:
         print(e.args)

     try:
         file_name = "student.txt"
         file = open(file_name, 'r')
         data = file.readlines()
         print(data)
         file.close()
     except FileNotFoundError as e:
         print(e.args)

    find_names()
    find_avg()
