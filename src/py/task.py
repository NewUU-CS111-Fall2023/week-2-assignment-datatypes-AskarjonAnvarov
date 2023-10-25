# * Author: Anvarov Askarjon
# * Date: 25.10.2022

from tasks import NumberGuesser, LongArithmeticCalculator, StringMatcher
print("Task_2")
number = NumberGuesser()
number.guess_number(int(input("Guess a number! \n")))
print("Task_3")
input_number = LongArithmeticCalculator()
input_number.calculate_long_arithmetic(float(input("Enter a number! \n")))
print("Task_4")
string = StringMatcher()
string.match_string(input("Write a sentence! \n").split(" "))
