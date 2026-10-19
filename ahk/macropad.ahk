#Requires AutoHotkey v2.0
; Macropad9 helper — maps F13..F18 to apps/scripts.
; Edit the paths marked TODO, then double-click this file to run it.

; ---------------------------------------------------------------- paths
WHOOP_SYNC := "C:\Monash\Project\whoop_sync.bat"          ; TODO: real path
PLAN_RUN   := "C:\Monash\Project\plan_run.bat"            ; TODO: real path
LUCIAN_XLS := "C:\Monash\LUCIAN\LUCIAN.xlsx"              ; TODO: real path
CLAUDE_EXE := A_AppData "\..\Local\AnthropicClaude\claude.exe"  ; TODO: verify

; ------------------------------------------------------------- S1: Whoop
F13:: RunScript(WHOOP_SYNC)

; ---------------------------------------------------------- S2: plan_run
F14:: RunScript(PLAN_RUN)

; ------------------------------------------------------------ S3: Claude
F15:: {
    if FileExist(CLAUDE_EXE)
        Run CLAUDE_EXE
    else
        Run "https://claude.ai"          ; fallback: open in browser
}

; ----------------------------------------------------------- S7: YouTube
F16:: Run "https://www.youtube.com"

; ------------------------------------------------------------- S8: Excel
F17:: RunScript(LUCIAN_XLS)

; ------------------------------------------------------------- S9: sleep
F18:: DllCall("PowrProf\SetSuspendState", "Int", 0, "Int", 0, "Int", 0)

; ----------------------------------------------------------------- utils
RunScript(path) {
    if !FileExist(path) {
        MsgBox "Not found:`n" path, "Macropad", "Icon!"
        return
    }
    Run '"' path '"', , "Hide"           ; drop  , "Hide"  to see the console
}
