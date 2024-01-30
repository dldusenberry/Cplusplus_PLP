# C++ For Windows Machines

## Requirements
Running on a 64-bit OS Windows 10 or Windows 11 machine.

For more info see [Visual Studio 2022 System Requirements]( https://learn.microsoft.com/en-us/visualstudio/releases/2022/system-requirements) page. 

## Download Visual Studio 2022 Community
Go to [Visual Studio 2022 Downloads](  https://visualstudio.microsoft.com/downloads/)

For a free version of Visual Studio scroll down to Visual Studio 2022 Community, and click **Free Download**, which will download the Visual Studio installer. 

Once you’ve run the installer, you will be asked what workload you would like to install. Choose `Desktop development with C++` to ensure C++ capabilities will be installed and available to use. 
-	Microsoft’s Visual Studio 2022 Community comes with a C++ compiler, the C++ standard libraries, and a collection of tools for your C++ projects. 

Beyond the default options selected, also select either the `Windows 10 SDK` or `Windows 11 SDK` depending on your machine. 

Now click **Install** and wait for the installation to complete. 

This may take a few minutes as it does take up a large portion of disk space.

Once the download is complete, launch Visual Studio and either sign in with your existing email or create a new account. 
- (Note: If you skip this step, you will only be given a 30-day evaluation period to use full features.) 

Once Visual Studio has launched you can close the installer window. 

## Create your First Program
Best practice is to create a new project for each new program you write. 
- A project is a container for your source code files, data files, etc., and when you compile your program all of the .cpp files in your project will be compiled and linked. 

Click on **Create a New Project**.

Click **Windows Desktop Wizard** and click **Next**.

Replace the existing project name with `‘HelloWorld’` and check the box to `Place solution and project in the same directory`, then click **Create**.

You will see one more dialog box, make sure the `Application type` is `Console Application (.exe)` and that `Precompiled Header` is _NOT_ selected, and click **OK**. 
- (Precompiled headers can improve compilation speed for larger projects, but is not necessary for smaller projects and can be turned on later if needed.)

Hooray, you have created your first project!

## Compile your First Program
You will see that Visual Studio has already opened the `‘HelloWorld.cpp’` file and created some code for you. 

To compile your program, you can either click the _Build_ menu > _Build Solution_ or try `Ctrl`+`Shift`+`B`.

To run your compiled program, you can either click the _Debug_ menu > _Start Without Debugging_ or try `Ctrl`+`F5`.

Now another window should open, and you should see:

<img width="862" alt="Screenshot 2024-01-29 203716" src="https://github.com/dldusenberry/Cplusplus_PLP/assets/98852855/ac0389a5-b368-4328-b76d-45d9f19daee1">

Congratulations! You have now compiled and run your first C++ program!

## To Write Comments in your C++ Program
### Single-line comments:

To write single-line comments in C++, use two forward slashes `//`, and everything after `//` will be ignored by the compiler.

### Multi-line comments:

To write multi-line comments, use the symbol pair `/*` and `*/` and everything between the symbols will be ignored by the compiler.

