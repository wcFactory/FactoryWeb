

To compile for the first time, create a folder called build. In build, run:

emcmake cmake .. -DPLATFORM=Web -DCMAKE_BUILD_TYPE=Release -DCMAKE_EXECUTABLE_SUFFIX=".html"


To recompile new changes:

emmake make