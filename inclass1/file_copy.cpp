#include <iostream>
#include <fstream>

void printUsage();

const size_t BUFFER_SIZE{2048};

int main(int argc, char const *argv[])
{
    if(argc != 3)
    {
        printUsage();
        exit(-1);
    }

char fileBuffer[BUFFER_SIZE];
std::ifstream srcFile;
std::ofstream dstFile;
std::string srcPath{argv[1]};
std::string dstPath{argv[2]};

srcFile.open(srcPath, std::ios::binary);
if(!srcFile)
{
    std::cout << "There was a problem opening the file " << srcPath <<std::endl;
    exit(-2);
}

dstFile.open(dstPath, std::ios::binary);
if(!dstFile)
{
    std::cout<<"There was a problem opening this file " << dstPath <<std::endl;
    srcFile.close();
    exit(-3);
}

while(srcFile)
{
    srcFile.read(fileBuffer,BUFFER_SIZE);
    dstFile.write(fileBuffer, srcFile.gcount());
}

srcFile.close();
dstFile.close();

return 0;

}

void PrintUsage()
{
    std::cout<<"Invalid argument.\nUsage\n";
    std::cout <<"      file_copy src_path dst_path\n";
}
