Design for the debug system of my game engine. 

Lots of things to discuss:
    - Logging
    - Assertations
    - Debug and Release builds

Logging:
Will include 6 levels:
    - TRACE
        . Extremely detailed information, iteration by iteration
        . Use when hunting down a specific bug
        . Use in DEBUG only and disable by default
    - DEBUG
        . For useful internal states
        . State transitions and non-critical events
        . Use in DEBUG only
    - INFO
        . For normal/expected events
        . Loaded assets
        . Scene changes
        . Anyone can read
        . Always enabled
    - WARN
        . For partially unexpected events
        . Nonfatal events
        . Always enabled
    - ERROR
        . For failed events
        . Functionality is broken
        . Program can still go on
        . Always enabled
    - FATAL
        . The program cannot continue
        . Always enabled
        . Immediately terminate the program afterwards.
Should take a dynamic amount of arguments (variadic templates)

