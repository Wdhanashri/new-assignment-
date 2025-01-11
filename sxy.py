if _name_ == '_main_':
     try:
         file_name="student.txt"
         file=open(file_name,'w')
         file.write("This is the new student file")
         file.writelines("\n Hello i am bibek raj kanu your personal assistant \n "
                         "hI am from Nepal \n")
         file.close()
     except FileNotFoundError as e:
         print(name)



def find AVG():
    file_name = "student.txt"
    file = open(file_name, 'r')
    data = file
