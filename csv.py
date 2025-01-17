"""

open(file_name,'')

r-->


"""


def find_names():
    file_name = "student.txt"
    file = open(file_name, 'r')
    data = file.read()
    data=data.split()
    for name in data:
        if name.lower().endswith('sa'):
            print(name)


def find_avg():
    try:
        file_name = "student.txt"
        file = open(file_name, 'r')
        data = file.read()
        data = data.split(',')
        sum = 0
        for num in data:
            sum += int(num)
        avg = sum / len(data)
        print("average: ",avg)

    except Exception as e:
        print(e.args)




if _name_ == '_main_':
    # try:
    #     file_name="student.txt"
    #     file=open(file_name,'w')+++++++-----`
    #     file.write("this is the new student file")
    #     file.writelines(["\n this is the 2nd line\n"
    #                     "this is third line\n"
    #                     "this is fourth line\n"])
    #     file.close()
    # except FileNotFoundError as e:
    #     print(e.args)

    # try:
    #     file_name = "student.txt"
    #     file = open(file_name, 'r')
    #     data = file.readlines()
    #     print(data)
    #     file.close()
    # except FileNotFoundError as e:
    #     print(e.args)

    find_names()
    find_avg()
