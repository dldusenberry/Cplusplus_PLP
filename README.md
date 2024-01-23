# VSCode_install_cplusplus_macOS
## Install VSCode C/C++ extension and configuration for macOS

**Requirements**

1. Running on a MacOS version 10.13 or higher
2. Visual Studio Code installed on macOS
Install [Visual Studio Code on macOS](https://code.visualstudio.com/docs/setup/mac)

**Install a Compiler**

Apple's provided Xcode tools comes packaged with a compiler called Clang.
You may already have Clang installed on your machine and you can check by:

Opening a Terminal window and type the command:

```
clang --version
```

If Clang is already installed the return you will see is something similar to:

```
Apple clang version 14.0.3 (clang-1403.0.22.14.1)
Target: arm64-apple-darwin22.6.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
```

If Clang is not already installed the return line you will see:

```
zsh: command not found: clang
```

To install the Xcode command-line tools use the command:

```
xcode-select --install
```

Wait a few moments for installation and approve any system requests.

Once completed I recommend using the `clang --version` command again to make sure 
that you are now getting the correct return output.


**Install the C/C++ Extension in VS Code**  

Open VS Code and click on the Extensions view.
Search “C/C++” and click install.

**Run a Program**

Create a new folder for your C/C++ projects anywhere on your machine.
In VS Code navigate to the file explorer and open open the folder you have just created. 
Now that you are in this new folder click "New File" and create a new file called "helloworld.cpp".
Copy and paste the following source code into your file:

```
#include <iostream>

int main()
{
    std::cout << "Hello world" << std::endl;
}
```
And save your program using 'CMD + S'.

Now you can compile and run this program by clicking the play button in the top right corner, 
or from the drop down menu.

Click **C/C++: clang++ build and debug active file** from the list of detected compilers.
You should only be asked to do this the first time you run helloworld.cpp 

**To write comments in C++**

To write single-line comments in C++, everything after `//` the compiler will ignore

To write multi-line comments, use the pair `/*` and `*/`, and everything between the symbols will be ignored by the compiler.
