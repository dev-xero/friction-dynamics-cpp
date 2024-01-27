# `C++ Friction Dynamics`

Some functions that calculate problems in evaluating the frictional force required in some friction dynamics problems.

## `Implemented`

### 1. CalculateFrictionalForceOnHorizontal():
    
  Evaluates the frictional force experienced by a rigid body on a non-smooth horizontal plane.
    
   ```h
     double CalculateFrictionalForceOnHorizontal(double mu, double normalReaction);
   ```

### 2. CalculateFrictionalForceOnInclined():
    
  Evaluates the frictional force experienced by a rigid body on an inclined, non-smooth horizontal plane.
    
   ```h
     double CalculateFrictionalForceOnInclined(double mu, double normalReaction, double angle);
   ```

## `Building From Source`

I've setup a CMAKE toolchain to simplify the building and linking process. To get started, ensure you have gcc, make and CMake installed. In the root directory, run this command to build and link object files:
```bash
  cmake .
```
The compiled binary will be located in a build folder in the root directory.
