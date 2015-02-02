from Tkinter import *

class App(Frame):
    def __init__(self, master = None):
        Frame.__init__(self,master)
        self.grid()
        self.createWidgets()

    def createWidgets(self):
        self.quitButton = Button(self, text = 'Quit', command = self.quit)
        self.quitButton.grid(padx = 100, pady = 100)

app = App()
app.master.title("my test app")
app.mainloop()
