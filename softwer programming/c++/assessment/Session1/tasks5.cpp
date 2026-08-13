5. Compare your procedural C version and OOP TaskList version: List 3 problems you faced in the C version that were solved by using classes and methods in the OOP version.




1. Code Organization
    In the C version, tasks, functions, and data had to be managed separately.
    In the OOP version, the Task and TaskList classes keep related data and functions together.
2. Task Status Management
    In the C version, task status had to be managed using a separate array or by adding "DONE" to the task string.
    In the OOP version, each Task has an isDone property, and the markDone() method makes it easy to change the status.
3. Managing Multiple Tasks
    In the C version, a fixed-size array (tasks[5][100]) was used, so only a limited number of tasks could be stored.
    In the OOP version, vector<Task> is used to easily manage multiple Task objects.