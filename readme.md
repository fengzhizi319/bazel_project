使用vscode调试bazel c++的例子。


```
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "Bazel Debug",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/bazel-bin/src/main",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "lldb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "Bazel Build",
            "sourceFileMap": {
                "${workspaceFolder}/src": "${workspaceFolder}/src"
            }
           
        }
    ]
}
```

task.json

```
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Bazel Build",
            "type": "shell",
            "command": "bazel",
            "args": [
                "build",
                "//src:main"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": ["$gcc"]
        }
    ]
}
```