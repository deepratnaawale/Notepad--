# Notepad--
 
This is just a sample assignment project.

# Notepad-- Basic Features:
1. General IO: New, Open, Save, Save As
2. General Edit Features: Copy, Cut, Paste, Undo, Redo
3. General Keyboard Shortcuts
4. Bold Toggle
5. Subscript Toggle
6. Superscript Toggle

# Additional Features:
1. Dark Mode
2. About Me Section
3. Additional About Me Button
4. Hyperlinks that open in your default browser (https and safe, to my personal website)
5. Status Bar shows that file is saved along with path.

# Limitations/ Difficulties
1. Cannot detect if cursor is on subscript/superscript text.
2. Bold bugs out on backspace.
3. Couldn't implement superscript & subscript from QTCreator GUI Maker.
4. Only superscript/subscript rendered from code.

# Installation
<ol>
    <li> Install g++(C++ compiler): $ sudo apt-get install g++ -y </li>
    <li> Install Make: $ sudo apt-get install make -y </li>
    <li> Install qt5: $ sudo apt-get install qt5-default </li> 
    <li>  Go to folder "Notepad--", compile Notepad--.pro and make </li> 
     <ul>
             <li> $ cd Notepad-- </li>
             <li> $ qmake Notepad--.pro </li>
             <li> $ make </li>
             ## NOTE: Building the code from QT Creator is *recommended*. *Avoid* using make, it clutters the directory.
                 <li>To Install QT Creator: $ sudo apt-get install qt-creator -y </li>
    </ul>
</ol>

# Running Notepad--
$ ./Notepad--

# Test Configration
OS: Ubuntu 20.04.2 LTS x64bit

RAM: 8 GB

CPU: i7 6<sup>th</sup> gen

QT Version: 5.12.8 


# References
1. I started the code from: https://www.youtube.com/watch?v=x858_WCtl_Y
2. Layout Reference: https://code.qt.io/cgit/qt/qtbase.git/tree/examples/widgets/richtext/textedit
3. Toggle Action (isChecked): https://stackoverflow.com/questions/45006166/how-to-make-qmenu-item-checkable-in-qt
