class Shape:
    """
    Generic shape class for Rectangle and Square
    """
    def __init__(self, x, y):
        """
        Constructor for the Shape Class
        """
        self.x = x
        self.y = y

    def area(self):
        """
        Function which would return the area of the shape
        """
        return self.x * self.y

    def perimeter(self):
        """
        Function for returning the perimeter of a shape
        """
        return 2.0 * (self.x + self.y)

class Square(Shape):
    def __init__(self, side):
        """
        Constructor for the Square shape class 
        """
        self.x = side
        self.y = side

# demonstrating the class initialization with a rectangle shape
rectangle = Shape(10,4)
print rectangle.area()
print rectangle.perimeter()

# demonstrating the inherited methods by the square class
square = Square(5)
print square.area()
print square.perimeter()


                

