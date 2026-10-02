# C++ project

This project uses standard C++17 and can be built on macOS with Apple Clang or on Windows with the MSVC compiler.

## Build in VS Code

Open this folder in VS Code and open the `.cpp` file you want to run. In **Run and Debug**, select **C++: Run active file**, then press the green play button (or press `F5`). VS Code builds the active file first and then runs it.

To only build without running, use **Terminal: Run Build Task** (or press `Cmd+Shift+B` on macOS / `Ctrl+Shift+B` on Windows).

- macOS: Apple Command Line Tools provide `clang++`.
- Windows: install Visual Studio Build Tools with the C++ workload, then open VS Code from a Developer PowerShell so `cl.exe` is available.
- Install the recommended **C/C++** extension when prompted.

## Move the project between Mac and Windows

Use Git to sync source files, not compiled binaries. Create an empty repository on GitHub, then run these commands in this folder, replacing the URL with your repository URL:

```sh
git init
git add .
git commit -m "Start C++ project"
git branch -M main
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git push -u origin main
```

On the other computer, clone the repository with `git clone REPOSITORY_URL`. After editing, use `git add`, `git commit`, and `git push`; on the other computer run `git pull`.# labs
