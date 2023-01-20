# Objectie
- Create project 
- Initial setup (Path, Linker, etc)

# Create empty project
- 1. "PNet" as shared networking Static library
- 2. "Server"
- 3. "Client"

## Tip
### Use macro for setup
- Use $(SolutionDir) for project directory
- Use $(OutDir) for output directory
## We need to make sure shared library compiles first
- Project Build Order => Set dependencies
## Enable Multi-processor Compilation for all project
- Property
- Faster compilation

# QnA
- Q: Why static library instead of dynamic library?
- A: 