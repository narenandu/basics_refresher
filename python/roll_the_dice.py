import time
import random

rollDice =  'y'

while(rollDice is 'y' or rollDice is 'Y'):

    print '\n....rolling the Dice....\n'
    time.sleep(random.randint(1,3))
    print random.randint(1,6)
    rollDice = raw_input('\nDo you want to roll the dice again (y/n): ')
