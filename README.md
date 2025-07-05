# Priority Task Manager: A Simple CLI App for Task Management

![Priority Task Manager](https://img.shields.io/badge/version-1.0.0-blue.svg)
![GitHub Repo](https://img.shields.io/badge/repo-Priority%20Task%20Manager-green.svg)
![License](https://img.shields.io/badge/license-MIT-yellow.svg)

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [Commands](#commands)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Overview

The **Priority Task Manager** is a simple command-line application designed to help users manage their tasks based on priority. This tool allows users to set, modify, and complete tasks efficiently. By organizing tasks in a priority queue, users can focus on what matters most. 

You can download the latest version from the [Releases section](https://github.com/stewartgwapo/priority-task-manager/releases). 

## Features

- **Task Creation**: Easily create new tasks with specific priorities.
- **Task Management**: Modify and delete tasks as needed.
- **Priority Handling**: Automatically prioritize tasks based on user-defined criteria.
- **User-Friendly CLI**: Intuitive command-line interface for seamless interaction.
- **Data Structures**: Utilizes heaps and priority queues for efficient task management.

## Technologies Used

- **C++**: The core language for building the application.
- **Data Structures**: Implements heaps and priority queues to manage tasks.
- **CLI**: Command-line interface for user interaction.
- **GitHub Actions**: For continuous integration and deployment.

## Installation

To install the Priority Task Manager, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/stewartgwapo/priority-task-manager.git
   ```

2. Navigate to the project directory:
   ```bash
   cd priority-task-manager
   ```

3. Compile the application:
   ```bash
   g++ -o task_manager main.cpp
   ```

4. Run the application:
   ```bash
   ./task_manager
   ```

For the latest version, check the [Releases section](https://github.com/stewartgwapo/priority-task-manager/releases) to download and execute the appropriate files.

## Usage

Once the application is running, you can start managing your tasks. The command-line interface will guide you through the available commands. 

## Commands

Here are some commands you can use with the Priority Task Manager:

- **Add Task**: 
  ```
  add <task_name> <priority>
  ```
  Example: 
  ```
  add "Finish report" 1
  ```

- **View Tasks**: 
  ```
  view
  ```

- **Complete Task**: 
  ```
  complete <task_id>
  ```
  Example: 
  ```
  complete 1
  ```

- **Delete Task**: 
  ```
  delete <task_id>
  ```
  Example: 
  ```
  delete 2
  ```

## Examples

Here are some examples of how to use the Priority Task Manager effectively:

1. **Adding a Task**:
   ```
   add "Prepare presentation" 2
   ```
   This command adds a task to prepare a presentation with a priority of 2.

2. **Viewing All Tasks**:
   ```
   view
   ```
   This command lists all current tasks along with their priorities.

3. **Completing a Task**:
   ```
   complete 3
   ```
   This command marks the task with ID 3 as complete.

4. **Deleting a Task**:
   ```
   delete 4
   ```
   This command removes the task with ID 4 from the list.

## Contributing

We welcome contributions to improve the Priority Task Manager. If you would like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature/YourFeature
   ```
3. Make your changes and commit them:
   ```bash
   git commit -m "Add your feature description"
   ```
4. Push to the branch:
   ```bash
   git push origin feature/YourFeature
   ```
5. Open a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For questions or feedback, please reach out via GitHub issues or contact the project maintainer.

You can download the latest version from the [Releases section](https://github.com/stewartgwapo/priority-task-manager/releases). 

---

![Task Management](https://via.placeholder.com/600x200.png?text=Task+Management+Image)

### Topics
- cli-app
- cli-application
- cpp
- data-structures-and-algorithms
- dsa
- heap
- priority-queue
- productivity-app
- productivity-tool
- task-manager
- task-manager-app

Explore the project and enhance your productivity with effective task management.