class Fibonacci:
    """
    Fibonacci class 
    """
    def fib(self, number):
        """
        Core logic for returning Fibonacci series
        This is a recursive implementation
        """
        if number is 0: 
            return 0
        if number is 1: 
            return 1

        # LOGIC: fib(n) = fib(n-2) + fib(n-1)
        return self.fib(number-2) + self.fib(number-1)

    def main(self, nRange):
        """
        Entry point to the class
        """
        for num in xrange(nRange):
            print self.fib(num)

nRange = input('Enter the range for to print Fibonacci: ')
f = Fibonacci()
f.main(nRange)
