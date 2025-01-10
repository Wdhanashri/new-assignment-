lass CheckAge(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)
def check_voting_eligibility(age):
    try:
        if age < 18:
            raise CheckAge("You are not eligible to vote. Age must be 18 or older.")
        else:
            print("You are eligible to vote.")
    except CheckAge as e:
        print(f"Error: {e}")
try:
    age = int(input("Enter your age: "))
    check_voting_eligibility(age)
except ValueError:
    print("Please enter a valid number for age.")
