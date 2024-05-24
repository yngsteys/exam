BUILD_FOLDER=build_ninja
BUILD_TYPE=Ninja
SOURCE_FOLDER=.

if [ ! -d $BUILD_FOLDER ]; then
  mkdir -p $BUILD_FOLDER
fi

cd $BUILD_FOLDER

cmake -G $BUILD_TYPE ../$SOURCE_FOLDER
cmake --build .

cd ../
