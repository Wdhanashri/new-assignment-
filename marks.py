def assign_grade(marks):
    if marks >= 90:
        return "A"
    elif marks >= 80:
        return "B"
    elif marks >= 70:
        return "C"
    elif marks >= 60:
        return "D"
    else:
        return "F"
try:
    marks = float(input("Enter your marks (out of 100): "))
    if 0 <= marks <= 100:
        grade = assign_grade(marks)
        print(f"Your grade is: {grade}")
    else:
        print("Marks should be between 0 and 100.")
except ValueError:
    print("Invalid input! Please enter a numeric value.")
